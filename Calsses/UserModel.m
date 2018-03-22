//
//  UserModel.m
//  neihan
//
//  Created by yyz on 2017/12/14.
//  Copyright © 2017年 yyz. All rights reserved.
//

#import "UserModel.h"

@implementation UserModel
+ (NSDictionary<NSString *,id> *)modelContainerPropertyGenericClass {
    return @{
             @"medals":MedalsModel.class,
             };
}

+ (NSDictionary<NSString *,id> *)modelCustomPropertyMapper {
    return @{
             @"enw_followers":@"new_followers",
             @"decription":@"description",
             };
}
@end

@implementation MedalsModel
@end
