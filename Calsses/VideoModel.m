//
//  VideoModel.m
//  neihan
//
//  Created by yyz on 2017/12/14.
//  Copyright © 2017年 yyz. All rights reserved.
//

#import "VideoModel.h"


@implementation VideoModel
+ (NSDictionary<NSString *,id> *)modelContainerPropertyGenericClass {
    return @{
             @"url_list":VideoUrlListModel.class,
             };
}
@end

@implementation  VideoUrlListModel
@end
