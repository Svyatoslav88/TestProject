//
//  UIView+Extensions.h
//  FaceToFace
//
//  Created by Svyatoslav on 12/10/14.
//  Copyright (c) 2014 Franklin Ross. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (Extensions)

@property (nonatomic, assign) CGFloat width;
@property (nonatomic, assign) CGFloat height;
@property (nonatomic, assign) CGFloat x;
@property (nonatomic, assign) CGFloat y;
@property (nonatomic, assign) CGFloat maxX;
@property (nonatomic, assign) CGFloat minX;
@property (nonatomic, assign) CGFloat midX;
@property (nonatomic, assign) CGFloat maxY;
@property (nonatomic, assign) CGFloat minY;
@property (nonatomic, assign) CGFloat midY;

+ (UIViewAnimationOptions) animationOptionsFromCurve: (UIViewAnimationCurve) curve;

@end
