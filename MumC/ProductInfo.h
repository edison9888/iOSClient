//
//  ProductInfo.h
//  MumC
//
//  Created by liubin on 12-05-20.
//  Copyright liubin on 12-05-20. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ItemProductModel.h"
#import <QuartzCore/QuartzCore.h>
#import "Utility.h"
#import "MumCAppDelegate.h"

@interface ProductInfo : UIViewController <NSXMLParserDelegate>{
    UILabel *item_title;
    UILabel *price;
    UILabel *score;
    UIImageView *photo;
    ItemProductModel *itemProductInfo;
    IBOutlet UIWebView *webView;
    IBOutlet UIScrollView *scrollView;
    
    UIView *overlayer;
    int count;                      //等待的时间不超过10s
    BOOL isloading;                 //是否正在加载数据
    
    NSString *curretElement;
    BOOL isShowFavAdd;          //是否显示添加到收藏夹按钮
    IBOutlet UIButton *favAdd;  //添加到收藏夹
    IBOutlet UILabel *item_type;
    IBOutlet UILabel *item_EMS;
    IBOutlet UILabel *item_postfee;
    IBOutlet UILabel *item_express;
    IBOutlet UILabel *item_downShelf;
    IBOutlet UILabel *sell_count;
    IBOutlet UILabel *seller_nick;
}

@property(nonatomic,retain)IBOutlet UIView *overlayer;
@property(nonatomic)BOOL isloading;
@property(nonatomic,retain)NSString *currentElement;
@property(nonatomic)BOOL isShowFavAdd;
@property(nonatomic,retain)UIButton *favAdd;
@property(nonatomic,retain)IBOutlet UILabel *item_title;
@property(nonatomic,retain)IBOutlet UILabel *price;
@property(nonatomic,retain)IBOutlet UILabel *score;
@property(nonatomic,retain)IBOutlet UIImageView *photo;
@property(nonatomic,retain)ItemProductModel *itemProductInfo;
@property(nonatomic,retain)IBOutlet UIWebView *webView;
@property(nonatomic,retain)IBOutlet UIScrollView *scrollView;

@property(nonatomic,retain)IBOutlet UILabel *item_type;
@property(nonatomic,retain)IBOutlet UILabel *item_EMS;
@property(nonatomic,retain)IBOutlet UILabel *item_postfee;
@property(nonatomic,retain)IBOutlet UILabel *item_express;
@property(nonatomic,retain)IBOutlet UILabel *item_downShelf;
@property(nonatomic,retain)IBOutlet UILabel *sell_count;
@property(nonatomic,retain)IBOutlet UILabel *seller_nick;

-(IBAction)payAction:(id)sender;
-(IBAction)addFavourite:(id)sender;
@end
