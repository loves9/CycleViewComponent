# CycleViewComponent
ad,pic cycle view component; Viwepager
图片轮播器

# invoking

    // 网络数据源 url
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

    // 监听点击回调
    cycleScrollView2.tapItemOperationBlock = ^(NSInteger index) {
        NSLog(@">>>>>  %ld", (long)index);
    };
