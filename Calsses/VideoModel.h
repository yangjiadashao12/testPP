//
//  VideoModel.h
//  neihan
//
//  Created by yyz on 2017/12/14.
//  Copyright © 2017年 yyz. All rights reserved.
//

#import <Foundation/Foundation.h>

@class VideoUrlListModel;
@interface VideoModel : NSObject
@property (nonatomic,assign)CGFloat width;
@property (nonatomic,copy)NSString *uri;
@property (nonatomic,assign)CGFloat height;
@property (nonatomic,strong)NSArray<VideoUrlListModel *> *url_list;
@end

@interface VideoUrlListModel :NSObject
@property (nonatomic,assign)NSInteger expires;
@property (nonatomic,copy)NSString *url;
@end

