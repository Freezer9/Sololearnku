import sys
import os


def print_details(directory, line_number, line):
    print(f'{directory} line {line_number} {line}')

def wildcard_match(wildcard_list, line_string, is_wholeWord=False):
    if is_wholeWord == False:
        for i in range(len(wildcard_list)-1):
            if (wildcard_list[i] in line_string) and (wildcard_list[i+1] in line_string):
                is_match = True
            else:
                is_match = False

            if is_match == True:
                return True
            else:
                return False

    elif is_wholeWord == True:
        line_list = line_string.split()
        for i in range(len(wildcard_list)-1):
            for x in range(len(line_list)):
                if (wildcard_list[i] in line_list[x]):
                    if (wildcard_list[i+1] in line_list[x]):
                        is_match = True
                    else:
                        is_match = False
                else:
                    is_match = False
                    break

            if is_match == True:
                return True
            else:
                return False

def main_func(searchedString, file_path,is_case_sensitive=True,whole_word=False):
    txt_file = open(file_path, 'r')
    lines_list = txt_file.readlines()
    txt_file.close()
    
    for i in range(len(lines_list)):
        line_num = str(i + 1)
        line_str = (lines_list[i]).strip()
        line_str = line_str[:40]

        while len(file_path) < 40:
            file_path += " "
        else:
            while len(line_num) < 3:
                line_num += " "

        # check if case sensitive then print the output
        if is_case_sensitive == True:

            # wildcards
            if searchedString.count("*") == 1 and (searchedString.index("*") != 0 or searchedString.index("*") != -1):
                wcard_str_list = searchedString.split()
                wcard_match = wildcard_match(wcard_str_list,lines_list[i], whole_word)
                if wcard_match == True:
                    print_details(print_details(file_path, line_num, line_str))
            
            else:
                if searchedString in lines_list[i]:
                    if " " in searchedString and whole_word == True:
                        return None
                    else:
                        print_details(file_path, line_num, line_str)

        elif is_case_sensitive == False:
            searchedString = searchedString.casefold()
            # wildcards
            if searchedString.count("*") == 1 and (searchedString.index("*") != 0 or searchedString.index("*") != -1):
                wcard_str_list = searchedString.split()
                wcard_match = wildcard_match(wcard_str_list,(lines_list[i]).casefold(), whole_word)
                print(wcard_match)
                if wcard_match == True:
                    print_details(print_details(file_path, line_num, line_str))
            
            else:
                if searchedString in (lines_list[i]).casefold():
                    print_details(file_path, line_num, line_str)


is_prompt = True
while is_prompt:
    # desired directory
    des_dir = str(sys.argv[-1])
    cwd = os.getcwd()
    path = os.path.join(cwd,des_dir)

    # ends the program if the directory does not exist
    if os.path.exists(path) == False:
        print(f"Path {path} tidak ditemukan")
        is_prompt = False

    # searched string
    search_str = str(sys.argv[-2])

    # get options and declare a variable with boolean value
    option = str(sys.argv[1])
    if option == '-w':
        is_case_sensitive = True
        whole_word = True
    elif option == '-i':
        is_case_sensitive = False
        whole_word = False
    else:
        is_case_sensitive = True
        whole_word = False

    # getting the relative path string and assigning it to a variable
    relative_path = os.path.relpath(path,cwd)

    # if relative path is already a file, then it need not to be scanned, aka just read
    if os.path.isfile(relative_path) == True:
        main_func(search_str,relative_path,is_case_sensitive,whole_word)
        is_prompt = False

    else:
        # scanning through the relative path
        for root, dirs, files in os.walk(relative_path):
            for file in files:
                file_path = os.path.join(root,file)
                main_func(search_str,file_path,is_case_sensitive,whole_word)
                is_prompt = False