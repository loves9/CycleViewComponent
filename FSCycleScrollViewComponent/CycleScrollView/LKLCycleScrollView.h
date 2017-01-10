//
//  LKLCycleScrollView.h
//  FSCycleScrollViewComponent
//
//  Created by LKLFS on 16/7/13.
//  Copyright © 2016年 LKLFS. All rights reserved.
//

#import <UIKit/UIKit.h>

// 位置
typedef enum {
    FSCycleScrollViewPageContolAlignmentRight,
    FSCycleScrollViewPageContolAlignmentCenter
} FSCycleScrollViewPageContolAlignment;

// 样式
typedef enum {
    FSCycleScrollViewPageContolStyleClassic,        // 系统自带经典样式
    FSCycleScrollViewPageContolStyleAnimated,       // 动画效果pagecontrol
    FSCycleScrollViewPageContolStyleNone            // 不显示pagecontrol
} FSCycleScrollViewPageContolStyle;

@interface LKLCycleScrollView : UIView

+ (instancetype)cycleScrollViewWithFrame:(CGRect)frame imageURLStringsGroup:(NSArray *)imageURLStringsGroup;

//////////////////////  数据源接口  //////////////////////
/** 网络图片 url string 数组 */
@property (nonatomic, strong) NSArray *imageURLStringsGroup;

/** 本地默认图片数组，当没有网络图片时显示 */
@property (nonatomic, strong) NSArray *localizationImageNamesGroup;

/**
 * 点击图片回调 block
 */
@property(nonatomic, copy) void (^tapItemOperationBlock)(NSInteger index);

/** 自动滚动间隔时间,默认2s */
@property (nonatomic, assign) CGFloat autoScrollTimeInterval;

/** 是否无限循环,默认Yes */
@property (nonatomic,assign) BOOL infiniteLoop;

/** 是否自动滚动,默认Yes */
@property (nonatomic,assign) BOOL autoScroll;

/** 图片滚动方向，默认为水平滚动 */
@property (nonatomic, assign) UICollectionViewScrollDirection scrollDirection;

//////////////////////  自定义样式接口  //////////////////////
/** 轮播图片的ContentMode，默认为 UIViewContentModeScaleToFill */
@property (nonatomic, assign) UIViewContentMode bannerImageViewContentMode;

/** 占位图，用于网络未加载到图片时 */
@property (nonatomic, strong) UIImage *placeholderImage;

/** 是否显示分页控件 */
@property (nonatomic, assign) BOOL showPageControl;

/** 是否在只有一张图时隐藏pagecontrol，默认为YES */
@property(nonatomic) BOOL hidesForSinglePage;

/** 其他分页控件小圆标颜色 */
@property (nonatomic, strong) UIColor *pageDotColor;

/** 分页控件距离轮播图的底部间距（在默认间距基础上）的偏移量 */
@property (nonatomic, assign) CGFloat pageControlBottomOffset;

/** 分页控件距离轮播图的右边间距（在默认间距基础上）的偏移量 */
@property (nonatomic, assign) CGFloat pageControlRightOffset;

/** 分页控件小圆标大小 */
@property (nonatomic, assign) CGSize pageControlDotSize;

/** 当前分页控件小圆标颜色 */
@property (nonatomic, strong) UIColor *currentPageDotColor;

/** 当前分页控件小圆标图片 */
@property (nonatomic, strong) UIImage *currentPageDotImage;

/** 其他分页控件小圆标图片 */
@property (nonatomic, strong) UIImage *pageDotImage;

/** pagecontrol 样式，默认为动画样式 */
@property (nonatomic, assign) FSCycleScrollViewPageContolStyle pageControlStyle;

/** 分页控件位置 */
@property (nonatomic, assign) FSCycleScrollViewPageContolAlignment pageControlAlignment;
@end
