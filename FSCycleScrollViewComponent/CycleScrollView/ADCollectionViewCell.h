//
//  ADCollectionViewCell.h
//  FSCycleScrollViewComponent
//
//  Created by LKLFS on 16/7/13.
//  Copyright © 2016年 LKLFS. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ADCollectionViewCell : UICollectionViewCell
@property (weak, nonatomic) UIImageView *imageView;
@property (copy, nonatomic) NSString *title;

@property (nonatomic, strong) UIColor *titleLabelTextColor;
@property (nonatomic, strong) UIFont *titleLabelTextFont;
@property (nonatomic, strong) UIColor *titleLabelBackgroundColor;
@property (nonatomic, assign) CGFloat titleLabelHeight;

@property (nonatomic, assign) BOOL hasConfigured;
@end
