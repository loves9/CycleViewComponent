//
//  ADCollectionViewCell.m
//  FSCycleScrollViewComponent
//
//  Created by LKLFS on 16/7/13.
//  Copyright © 2016年 LKLFS. All rights reserved.
//

#import "ADCollectionViewCell.h"
#import "UIView+SDExtension.h"

@implementation ADCollectionViewCell

- (instancetype)initWithFrame:(CGRect)frame
{
    if (self = [super initWithFrame:frame]) {
        [self setupImageView];
    }
    
    return self;
}

- (void)setupImageView
{
    UIImageView *imageView = [[UIImageView alloc] init];
    _imageView = imageView;
    [self.contentView addSubview:imageView];
}

- (void)layoutSubviews
{
    [super layoutSubviews];
    
    _imageView.frame = self.bounds;
}
@end
