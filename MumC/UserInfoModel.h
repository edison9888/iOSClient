//
//  UserInfoModel.h
//  MumC
//
//  Created by liubin on 12-05-20.
//  Copyright liubin on 12-05-20. All rights reserved.
//

#import <Foundation/Foundation.h>

//user_id,nick,sex,location,created,last_visit,birthday,status,email
@interface UserInfoModel : NSObject {
    
}
@property(nonatomic,retain)NSString *user_id;
@property(nonatomic,retain)NSString *nick;
@property(nonatomic,retain)NSString *sex;
@property(nonatomic,retain)NSString *location;
@property(nonatomic,retain)NSString *created;
@property(nonatomic,retain)NSString *last_visit;
@property(nonatomic,retain)NSString *birthday;
@property(nonatomic,retain)NSString *status;
@property(nonatomic,retain)NSString *email;

@property(nonatomic,retain)NSString *pic_url;           //用户头像URL
@property(nonatomic,retain)UIImage *photo;              //用户头像
@property(nonatomic,retain)NSString *creditDegree;      //信用等级
@property(nonatomic,retain)NSString *goodCommentScore;  //好评数
@property(nonatomic,retain)NSString *totalCommentScore; //评价总数
@property(nonatomic)BOOL isPassed;                      //是否通过实名认证
@property(nonatomic,retain)NSString *payID;             //支付宝ID
@property(nonatomic,retain)NSString *payAccount;        //支付宝账户

@end
