//
//  TradeModel.h
//  MumC
//
//  Created by liubin on 12-05-20.
//  Copyright liubin on 12-05-20. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "OrderModel.h"

@interface TradeModel : NSObject {
    
}
@property(nonatomic,retain)UIImage *photo;
@property(nonatomic,retain)NSString *tid;
@property(nonatomic,retain)NSString *seller_nick;
@property(nonatomic,retain)NSString *buyer_nick;
@property(nonatomic,retain)NSString *created;
@property(nonatomic,retain)NSString *status;
@property(nonatomic,retain)NSString *price;
@property(nonatomic,retain)NSString *post_fee;
@property(nonatomic,retain)NSString *pay_time;
@property(nonatomic,retain)NSString *pic_path;
@property(nonatomic,retain)NSString *receiver_address;
@property(nonatomic,retain)NSString *receiver_phone;
@property(nonatomic,retain)OrderModel *orderModel;
@end
