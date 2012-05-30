//
//  ItemProductModel.h
//  MumC
//
//  Created by liubin on 12-05-20.
//  Copyright liubin on 12-05-20. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface ItemProductModel : NSObject {
 
}

//num_iid,title,pic_url,price,score
@property(nonatomic,retain)NSString *num_iid;
@property(nonatomic,retain)NSString *title;
@property(nonatomic,retain)NSString *pic_url;
@property(nonatomic,retain)UIImage *photo;
@property(nonatomic,retain)NSString *price;
@property(nonatomic,retain)NSString *score;
@property(nonatomic,retain)NSString *wap_detail_url;

@property(nonatomic,retain)NSString *item_type;
@property(nonatomic,retain)NSString *item_EMS;
@property(nonatomic,retain)NSString *item_postfee;
@property(nonatomic,retain)NSString *item_express;
@property(nonatomic,retain)NSString *item_downShelf;
@property(nonatomic,retain)NSString *sell_count;
@property(nonatomic,retain)NSString *seller_nick;
@end
