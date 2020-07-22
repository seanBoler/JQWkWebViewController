//
//  TA_WKWebViewController.h
//
//  Created by 张家旗 on 2019/9/11.
//  Copyright © 2019 com.zjq. All rights reserved.
//

#import "BaseViewController.h"

NS_ASSUME_NONNULL_BEGIN

@interface TA_WKWebViewController : BaseViewController 
  
///网页url
@property (nonatomic,copy)NSString *urlStr;
///网页返回处理
@property (nonatomic,copy)void(^backBlock)(void);
///o判断是否需要navgation 导航 并设置layout
@property (nonatomic, assign) BOOL HaveNavHeaher;
///html 网页内容
@property (nonatomic, strong) NSString *HTMLString;
///导航标题
@property (nonatomic, copy) NSString *itemTitle;

@end




NS_ASSUME_NONNULL_END
