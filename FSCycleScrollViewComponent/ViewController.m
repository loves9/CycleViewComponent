//
//  ViewController.m
//  FSCycleScrollViewComponent
//
//  Created by LKLFS on 16/7/13.
//  Copyright © 2016年 LKLFS. All rights reserved.
//

#import "ViewController.h"
#import "LKLCycleScrollView.h"
@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    NSArray *imagesURLStrings = @[
                                  @"https://ss2.baidu.com/-vo3dSag_xI4khGko9WTAnF6hhy/super/whfpf%3D425%2C260%2C50/sign=a4b3d7085dee3d6d2293d48b252b5910/0e2442a7d933c89524cd5cd4d51373f0830200ea.jpg",
                                  @"https://ss0.baidu.com/-Po3dSag_xI4khGko9WTAnF6hhy/super/whfpf%3D425%2C260%2C50/sign=a41eb338dd33c895a62bcb3bb72e47c2/5fdf8db1cb134954a2192ccb524e9258d1094a1e.jpg"
                                  ];
    
    // 网络加载 --- 创建带标题的图片轮播器
    LKLCycleScrollView *cycleScrollView2 = [LKLCycleScrollView cycleScrollViewWithFrame:CGRectMake(0, 280, self.view.bounds.size.width, 180) imageURLStringsGroup:@[]];
    cycleScrollView2.localizationImageNamesGroup = @[@"h3.jpg"];
    cycleScrollView2.placeholderImage = [UIImage imageNamed:@"h1.jpg"];
    cycleScrollView2.pageControlAlignment = FSCycleScrollViewPageContolStyleAnimated;
    cycleScrollView2.currentPageDotColor = [UIColor whiteColor]; // 自定义分页控件小圆标颜色
    [self.view addSubview:cycleScrollView2];
    
    //         --- 模拟加载延迟
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(0.3 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
        cycleScrollView2.imageURLStringsGroup = imagesURLStrings;
    });

    //block监听点击方式
    cycleScrollView2.tapItemOperationBlock = ^(NSInteger index) {
        NSLog(@">>>>>  %ld", (long)index);
    };
    
}

@end
