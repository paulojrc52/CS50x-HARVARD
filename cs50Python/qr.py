import os
import qrcode

img = qrcode.make("https://discourse.napratica.org.br/")
img.save("qr.png", "PNG")
os.system("open qr.png")