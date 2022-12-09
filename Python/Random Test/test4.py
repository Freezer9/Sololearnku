from PIL import Image
pil_im = Image.open("C:\\Users\\faris\\Pictures\\london.jpg").convert('L')
pil_im.show()

# pil_im.thumbnail((128,128))
# pil_im.show()

# box = (100,100,400,400)
# region = pil_im.crop(box)
# region.show()
# region = region.transpose(Image.ROTATE_180)
# region.show()
# pil_im.paste(region, box)
# pil_im.show()

out = pil_im.resize((128,128))
out.show()
out = pil_im.rotate(45)
out.show
