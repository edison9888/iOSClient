//
//  Tradelist.h
//  MumC
//
//  Created by liubin on 12-05-20.
//  Copyright liubin on 12-05-20. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Constants.h"
#import "TradeModel.h"
#import "Utility.h"
#import "MumCAppDelegate.h"
#import "TradeInfoView.h"
#import "TradeCell.h"

@interface TradelistView : UIViewController 
<UITableViewDataSource,UITableViewDelegate,NSXMLParserDelegate>{
    UITableView *tableView;
    UISegmentedControl *segController;
    NSString *currentElement;
    NSMutableArray *tradelist;
    TradeModel *tradeModel;
    
    IBOutlet UIView *overlayer;     //加载时候的等待
    BOOL isloading;                 //是否正在加载
    int count;                      //加载时间不超过10s
}

@property(nonatomic,retain)IBOutlet UIView *overlayer;
@property(nonatomic)BOOL isloading;
@property(nonatomic,retain)IBOutlet UITableView *tableView;
@property(nonatomic,retain)IBOutlet UISegmentedControl *segController;
@property(nonatomic,retain)NSString *currentElement;
@property(nonatomic,retain)NSMutableArray *tradelist;
@property(nonatomic,retain)TradeModel *tradeModel;
@end
