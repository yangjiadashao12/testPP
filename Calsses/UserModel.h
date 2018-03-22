//
//  UserModel.h
//  neihan
//
//  Created by yyz on 2017/12/14.
//  Copyright © 2017年 yyz. All rights reserved.
//

#import <Foundation/Foundation.h>

@class MedalsModel;
@interface UserModel : NSObject
@property (nonatomic,assign)BOOL is_living;
@property (nonatomic,copy)NSString *point;//积分
@property (nonatomic,copy)NSString *user_id;
@property (nonatomic,copy)NSString *name;
@property (nonatomic,copy)NSString *followings;//关注
@property (nonatomic,assign)BOOL user_verified;
@property (nonatomic,copy)NSString *ugc_count;//发帖
@property (nonatomic,copy)NSString *avatar_url;
@property (nonatomic,copy)NSString *followers;//粉丝
@property (nonatomic,assign)BOOL is_following;
@property (nonatomic,assign)BOOL is_pro_user;
@property (nonatomic,assign)BOOL can_send_message;
@property (nonatomic,assign)NSTimeInterval create_time;
@property (nonatomic,copy)NSString *pro_user_desc;
@property (nonatomic,copy)NSString *hotsoon_name;
@property (nonatomic,copy)NSString *city;
@property (nonatomic,copy)NSString *notification_count;
@property (nonatomic,copy)NSString *large_avatar_url;
@property (nonatomic,assign)BOOL is_anchor;
@property (nonatomic,assign)BOOL enable_live;
@property (nonatomic,copy)NSString *comment_count;//评论
@property (nonatomic,copy)NSString *hotsoon_id;
@property (nonatomic,copy)NSString *id;
@property (nonatomic,copy)NSString *hotsoon_name_mark;
@property (nonatomic,copy)NSString *share_url;
@property (nonatomic,copy)NSString *decription;
@property (nonatomic,copy)NSString *total_digg_count;
@property (nonatomic,copy)NSString *subscribe_count;
@property (nonatomic,copy)NSString *hotsoon_id_mark;
@property (nonatomic,assign)BOOL allow_update_duanzi_id;
@property (nonatomic,copy)NSString *enw_followers;
@property (nonatomic,copy)NSString *diamond_count;//砖石数
@property (nonatomic,copy)NSString *gender;
@property (nonatomic,copy)NSString *fan_ticket_count;//火力
@property (nonatomic,copy)NSString *screen_name;
@property (nonatomic,copy)NSString *repin_count;//收藏
@property (nonatomic,copy)NSString *duanzi_id;
@property (nonatomic,strong)NSArray<MedalsModel *> *medals;
@end

@interface MedalsModel : NSObject
@property (nonatomic,copy)NSString *count;
@property (nonatomic,copy)NSString *icon_url;
@property (nonatomic,copy)NSString *name;
@property (nonatomic,copy)NSString *small_icon_url;
@end
