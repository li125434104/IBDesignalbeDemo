//
//  IBView.h
//  IBDesignalbeDemo
//
//  Created by LXJ on 2017/1/13.
//  Copyright © 2017年 LianLuo. All rights reserved.
//

#import <UIKit/UIKit.h>

IB_DESIGNABLE  // 动态刷新
@interface IBView : UIView

/** 边框样色 */
@property (nonatomic, strong) IBInspectable UIColor *borderColor;

/** 边框宽度 */
@property (nonatomic, assign) IBInspectable CGFloat borderWidth;

/** 圆角角度 */
@property (nonatomic, assign) IBInspectable CGFloat cornerRadius;

@end


IB_DESIGNABLE  // 动态刷新
@interface IBLabel : UILabel
/** 边框样色 */
@property (nonatomic, strong) IBInspectable UIColor *borderColor;

/** 边框宽度 */
@property (nonatomic, assign) IBInspectable CGFloat borderWidth;

/** 圆角角度 */
@property (nonatomic, assign) IBInspectable CGFloat cornerRadius;

@end


IB_DESIGNABLE  // 动态刷新
@interface IBTextField : UITextField
/** 边框样色 */
@property (nonatomic, strong) IBInspectable UIColor *borderColor;

/** 边框宽度 */
@property (nonatomic, assign) IBInspectable CGFloat borderWidth;

/** 圆角角度 */
@property (nonatomic, assign) IBInspectable CGFloat cornerRadius;

@end
