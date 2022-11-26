from moviepy.editor import *
import os
from PIL import Image, ImageDraw,ImageFont



def creator(_text,_color_bg,_color_text,n):
    im = Image.new('RGB',(300,300), color=(_color_text))
    font = ImageFont.truetype('C:/Windows/Fonts/comic.ttf', size=18)
    draw_text = ImageDraw.Draw(im)
    draw_text.text(
        (50,150),
        _text,
        font = font,
        fill = (_color_bg)
        )
    im.save('C:/Мотивация/new_pic('+str(n) +').jpg')

text = ['Просто возьми \n и сдай ЕГЭ',
        'Ты хочешь и дальше сидеть\n в этом унылом\n городе',
        'Или ты хочешь вырватьтся\n в свет',
        'СДАЙ ЕГЭ',
        'твои родители и друзья\n не верят',
        'Что ты можешь просто взять\n и сдать ЕГЭ, поступить',
        'Тогда возьми\n и сдай ЕГЭ',
        'Твои друзья не \n хотят учиться',
        'Хватит искать отмазки',
        'Возьми и сдай ЕГЭ']
color_bg = ['#00B87D','#CC00BB','#0800CC','#0099CC','#CCC900','#CC0000','#0077CC','#4B00CC','#8B00CC','#CC0088']
color_text = ['#000000']

for i in range(0,10):
    creator(text[i],color_text[0],color_bg[i],i)
    
directory = 'C:/Мотивация'
files = os.listdir(directory)
images = list(filter(lambda x: x.endswith('.jpg'), files))
clips = [ImageClip(m).set_duration(2) for m in images]

final_clip = concatenate_videoclips(clips, method= 'compose')
final_clip.write_videofile('test2.mp4', fps=24)