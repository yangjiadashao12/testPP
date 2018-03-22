//
//  RoomModel.m
//  neihan
//
//  Created by yyz on 2017/12/14.
//  Copyright © 2017年 yyz. All rights reserved.
//

#import "RoomModel.h"

@implementation RoomModel
+ (NSDictionary<NSString *,id> *)modelContainerPropertyGenericClass {
    return @{
             @"user":UserModel.class,
             @"dislike_reason":DislikeResonModel.class,
             };
}
@end
