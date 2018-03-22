//
//  RoomModel.h
//  neihan
//
//  Created by yyz on 2017/12/14.
//  Copyright © 2017年 yyz. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "DislikeResonModel.h"
#import "UserModel.h"

@interface RoomModel : NSObject
@property (nonatomic,copy)NSString *status;
@property (nonatomic,assign)BOOL with_linkmic;
@property (nonatomic,copy)NSString *user_count;
@property (nonatomic,copy)NSString *title;
@property (nonatomic,assign)NSTimeInterval finish_time;
@property (nonatomic,copy)NSString *text;
@property (nonatomic,copy)NSString *share_url;
@property (nonatomic,assign)BOOL enable_room_perspective;
@property (nonatomic,copy)NSString *stream_id;
@property (nonatomic,assign)BOOL allow_dislike;
@property (nonatomic,copy)NSString *cell_style;
@property (nonatomic,copy)NSString *label_text;
@property (nonatomic,assign)BOOL live_type_audio;
@property (nonatomic,copy)NSString *id;
@property (nonatomic,copy)NSArray<DislikeResonModel *> *dislike_reason;
@property (nonatomic,copy)UserModel *user;
@property (nonatomic,assign)NSTimeInterval create_time;
@end
