//
//  TradeInfo.h
//  MumC
//
//  Created by liubin on 12-05-20.
//  Copyright liubin on 12-05-20. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Constants.h"
#import "Utility.h"
#import "TradeModel.h"
#import "MumCAppDelegate.h"
#import "DeliverModel.h"
#import "DeliverTraceModel.h"

@interface TradeInfoView : UIViewController
<NSXMLParserDelegate>{
    TradeModel *tradeModel;
    DeliverTraceModel *delTraceModel;
    UIScrollView *scrollView;
    UILabel *title;
    UILabel *seller_nick;
    UILabel *buyer_nick;
    UILabel *created;
    UILabel *status;
    UILabel *pay_time;
    UILabel *price;
    UILabel *post_fee;
    UILabel *receiver_phone;
    UILabel *receiver_address;
    UIImageView *pic;
    
    NSString *currentElement;
    DeliverModel *delModel;
}

@property(nonatomic,retain)TradeModel *tradeModel;
@property(nonatomic,retain)DeliverTraceModel *delTraceModel;
@property(nonatomic,retain)IBOutlet UIScrollView *scrollView;
@property(nonatomic,retain)IBOutlet UILabel *item_title;
@property(nonatomic,retain)IBOutlet UILabel *seller_nick;
@property(nonatomic,retain)IBOutlet UILabel *buyer_nick;
@property(nonatomic,retain)IBOutlet UILabel *created;
@property(nonatomic,retain)IBOutlet UILabel *status;
@property(nonatomic,retain)IBOutlet UILabel *pay_time;
@property(nonatomic,retain)IBOutlet UILabel *price;
@property(nonatomic,retain)IBOutlet UILabel *post_fee;
@property(nonatomic,retain)IBOutlet UILabel *receiver_phone;
@property(nonatomic,retain)IBOutlet UILabel *receiver_address;
@property(nonatomic,retain)IBOutlet UIImageView *pic;
@property(nonatomic,retain)NSString *currentElement;
@property(nonatomic,retain)DeliverModel *delModel;

@end
