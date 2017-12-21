//
//  ZSSFontsViewController.h
//  ZSSRichTextEditor
//
//  Created by Will Swan on 03/09/2016.
//  Copyright © 2016 Zed Said Studio. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(int16_t, ZSSFontFamily) {

    ZSSFontFamilySystem = 0,
    ZSSFontFamilyArial = 1,
    ZSSFontFamilyTrebuchet = 2,
    ZSSFontFamilyVerdana = 3,
    ZSSFontFamilyGeorgia = 4,
    ZSSFontFamilyPalatino = 5,
    ZSSFontFamilyTimesNew = 6,
    ZSSFontFamilyCourierNew = 7,
    
    
};

@protocol ZSSFontsViewControllerDelegate
- (void)setSelectedFontFamily:(ZSSFontFamily)fontFamily;
@end

@interface ZSSFontsViewController : UIViewController {
    
    id<ZSSFontsViewControllerDelegate> __weak delegate;
    
    ZSSFontFamily _font;
    
}

+ (ZSSFontsViewController *)cancelableFontPickerViewControllerWithFontFamily:(ZSSFontFamily)fontFamily;

- (id)initWithFontFamily:(ZSSFontFamily)fontFamily;

@property (weak) id<ZSSFontsViewControllerDelegate> delegate;

@end
