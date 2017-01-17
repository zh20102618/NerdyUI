//
//  UISwitch+NERChainable.h
//  NerdyUI
//
//  Created by admin on 2016/12/20.
//  Copyright © 2016年 nerdycat. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "NERDefs.h"

#define Switch  [UISwitch ner_littleHigherHuggingAndResistanceView]

@interface UISwitch (NERChainable)

/**
 * onTintColor
 * The color used to tint the appearance of the switch when it is turned on.
 * onColor use Color() internally, so it can take any kind of arguments that Color() supported.
 * Usages: .onColor(@"red"), .onColor(@"#F00"), .onColor(255,0,0), etc.
 * See UIColor+NERChainable.h for more information.
 */
NER_SWITCH_PROP(Object)     onColor;

/**
 * thumbTintColor
 * The color used to tint the appearance of the thumb.
 * thumbColor use Color() internally, so it can take any kind of arguments that Color() supported.
 * Usages: .thumbColor(@"red"), .thumbColor(@"#F00"), .thumbColor(255,0,0), etc.
 * See UIColor+NERChainable.h for more information.
 */
NER_SWITCH_PROP(Object)     thumbColor;

/**
 * tintColor
 * The color used to tint the outline of the switch when it is turned off.
 * tintColor use Color() internally, so it can take any kind of arguments that Color() supported.
 * Usages: .tintColor(@"red"), .tintColor(@"#F00"), .tintColor(255,0,0), etc.
 * See UIColor+NERChainable.h for more information.
 */
NER_SWITCH_PROP(Object)     outlineColor;

/**
 * Value did change callback.
 * Use UIControlEventValueChanged event internally.
 * It support two kind of arguments:
    1) a callback block
    2) a target/action pair
 
 * Usages: 
    .onChange(^{}), .onChange(^(BOOL isOn){}), .onChange(^(BOOL isOn, UISwitch *switch){})
    .onChange(self, @selector(switchValueDidChanged) / @selector(switchValueDidChanged:))
 */
NER_SWITCH_PROP(Callback)   onChange;

@end