from cv2 import resize
import numpy

import cv2
img = cv2.imread("C:\\Users\\faris\\Pictures\\london.jpg",1)
print(type(img))
resizeimg = cv2.resize(img, (400,400))
cv2.imshow("FrontView", resizeimg)
cv2.waitKey(0)
cv2.destroyAllWindows()