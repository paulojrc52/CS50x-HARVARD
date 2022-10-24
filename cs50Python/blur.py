from PIL import Image, ImageFilter

before = Image.open("bridge.bmp")
after = befor.filter(ImageFilter.BoxBlur(1))
after.save("out.bmp")