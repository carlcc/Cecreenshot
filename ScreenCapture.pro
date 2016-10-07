#-------------------------------------------------
#
# Project created by QtCreator 2016-09-09T22:33:15
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ScreenCapture
TEMPLATE = app


SOURCES += main.cpp\
    fullscreenimageeditor.cpp \
    configmanager.cpp

HEADERS  += \
    fullscreenimageeditor.h \
    commondef.h \
    cursormanager.h \
    paintinghistory.h \
    ipaintingstep.h \
    penpaintingstep.h \
    ovalpaintingstep.h \
    arrowpaintingstep.h \
    rectpaintingstep.h \
    mosaicpaintingstep.h

FORMS    += fullscreenimageeditor.ui

DISTFILES += \
    image/save/imgo.jpg \
    image/mouse_style/color_pen/black.png \
    image/mouse_style/color_pen/blue.png \
    image/mouse_style/color_pen/dark_blue.png \
    image/mouse_style/color_pen/dark_green.png \
    image/mouse_style/color_pen/dark_grey.png \
    image/mouse_style/color_pen/dark_orange.png \
    image/mouse_style/color_pen/grass_green.png \
    image/mouse_style/color_pen/grey.png \
    image/mouse_style/color_pen/light_blue.png \
    image/mouse_style/color_pen/light_green.png \
    image/mouse_style/color_pen/light_purple.png \
    image/mouse_style/color_pen/orange.png \
    image/mouse_style/color_pen/pink_red.png \
    image/mouse_style/color_pen/purple.png \
    image/mouse_style/color_pen/white.png \
    image/mouse_style/color_pen/yellow.png \
    image/mouse_style/shape/arrow_mouse.png \
    image/mouse_style/shape/ellipse_mouse.png \
    image/mouse_style/shape/rect_mouse.png \
    image/mouse_style/shape/rotate.png \
    image/mouse_style/shape/rotate_mouse.png \
    image/mouse_style/shape/start_cursor.png \
    image/mouse_style/shape/text_mouse.png \
    image/save/slider_fg.png \
    image/share/back_hover.png \
    image/share/back_normal.png \
    image/share/back_press.png \
    image/share/deepin_logo.png \
    image/share/follow_hover.png \
    image/share/follow_hover_en.png \
    image/share/follow_normal.png \
    image/share/follow_normal_en.png \
    image/share/follow_press.png \
    image/share/follow_press_en.png \
    image/share/followed.png \
    image/share/followed_en.png \
    image/share/share_failed.png \
    image/share/share_succeed.png \
    image/share/Sina.png \
    image/share/Sina_no.png \
    image/share/Tencent.png \
    image/share/Tencent_no.png \
    image/share/text_view.png \
    image/share/Twitter.png \
    image/share/Twitter_no.png \
    image/widgets/+_hover.png \
    image/widgets/+_normal.png \
    image/widgets/+_press.png \
    image/widgets/-_hover.png \
    image/widgets/-_normal.png \
    image/widgets/-_press.png \
    image/action/_hover.svg \
    image/action/arrow.svg \
    image/action/arrow_hover.svg \
    image/action/arrow_press.svg \
    image/action/cancel.svg \
    image/action/cancel_hover.svg \
    image/action/cancel_press.svg \
    image/action/ellipse.svg \
    image/action/ellipse_hover.svg \
    image/action/ellipse_press.svg \
    image/action/line.svg \
    image/action/line_hover.svg \
    image/action/line_press.svg \
    image/action/ok.svg \
    image/action/ok_hover.svg \
    image/action/ok_press.svg \
    image/action/rect.svg \
    image/action/rect_hover.svg \
    image/action/rect_press.svg \
    image/action/share.svg \
    image/action/share_hover.svg \
    image/action/share_press.svg \
    image/action/text.svg \
    image/action/text_hover.svg \
    image/action/text_press.svg \
    image/menu_icons/arrow-tool-symbolic-small-hover.svg \
    image/menu_icons/arrow-tool-symbolic-small-norml.svg \
    image/menu_icons/ellipse-tool-symbolic-small-hover.svg \
    image/menu_icons/ellipse-tool-symbolic-small-norml.svg \
    image/menu_icons/exit-symbolic-small-hover.svg \
    image/menu_icons/exit-symbolic-small-norml.svg \
    image/menu_icons/line-tool-symbolic-small-hover.svg \
    image/menu_icons/line-tool-symbolic-small-norml.svg \
    image/menu_icons/rectangle-tool-symbolic-small-hover.svg \
    image/menu_icons/rectangle-tool-symbolic-small-norml.svg \
    image/menu_icons/save-symbolic-small-hover.svg \
    image/menu_icons/save-symbolic-small-norml.svg \
    image/menu_icons/share-symbolic-small-hover.svg \
    image/menu_icons/share-symbolic-small-norml.svg \
    image/menu_icons/text-tool-symbolic-small-hover.svg \
    image/menu_icons/text-tool-symbolic-small-norml.svg \
    image/save/auto_save.svg \
    image/save/auto_save_ClipBoard.svg \
    image/save/auto_save_ClipBoard_hover.svg \
    image/save/auto_save_ClipBoard_press.svg \
    image/save/auto_save_hover.svg \
    image/save/auto_save_press.svg \
    image/save/list.svg \
    image/save/list_hover.svg \
    image/save/list_press.svg \
    image/save/save.svg \
    image/save/save_ClipBoard.svg \
    image/save/save_ClipBoard_hover.svg \
    image/save/save_ClipBoard_press.svg \
    image/save/save_hover.svg \
    image/save/save_press.svg \
    image/save/save_to_desktop.svg \
    image/save/save_to_desktop_hover.svg \
    image/save/save_to_desktop_press.svg \
    image/save/save_to_dir.svg \
    image/save/save_to_dir_hover.svg \
    image/save/save_to_dir_press.svg \
    image/size/big.svg \
    image/size/big_hover.svg \
    image/size/big_press.svg \
    image/size/blur.svg \
    image/size/blur_hover.svg \
    image/size/blur_press.svg \
    image/size/mosaic.svg \
    image/size/mosaic_hover.svg \
    image/size/mosaic_press.svg \
    image/size/normal.svg \
    image/size/normal_hover.svg \
    image/size/normal_press.svg \
    image/size/small.svg \
    image/size/small_hover.svg \
    image/size/small_press.svg \
    image/size/straightline.svg \
    image/size/straightline_hover.svg \
    image/size/straightline_press.svg

RESOURCES += \
    imgs.qrc
