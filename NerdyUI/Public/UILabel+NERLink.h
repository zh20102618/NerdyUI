//
//  UILabel+NERLink.h
//  NerdyUI
//
//  Created by CAI on 10/13/16.
//  Copyright © 2016 nerdycat. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void (^NERLinkHandler)(NSString *text, NSRange range);


@interface UILabel (NERLink)

@property (nonatomic, assign) CGFloat nerLineGap;

@property (nonatomic, strong)   UIColor *nerLinkSelectedColor;
@property (nonatomic, assign)   CGFloat nerLinkSelectedCornerRadius;

@property (nonatomic, strong)   NERLinkHandler nerLinkHandler;
@property (nonatomic, readonly) NSLayoutManager *nerLayoutManager;

+ (void)setDefaultLinkSelectedBackgroundColor:(UIColor *)color corderRadius:(CGFloat)cornerRadius;

@end