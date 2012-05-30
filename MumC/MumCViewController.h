//
//  MumCViewController.h
//  MumC
//
//  Created by liu bin on 12-5-23.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

//#import <UIKit/UIKit.h>

#import <UIKit/UIKit.h>
#import "Utility.h"
#import "Constants.h"
#import "ItemCategoryModel.h"
#import "Productlist.h"
#import "ItemProductModel.h"
#import <QuartzCore/QuartzCore.h>
#import "DoubleTapSegmentedControlDelegate.h"
#import "DoubleTapSegmentedControl.h"

@interface MumCViewController : UIViewController
<NSXMLParserDelegate,UITableViewDataSource,UITableViewDelegate,
DoubleTapSegmentedControlDelegate>{
    NSString *currentElement;
    ItemCategoryModel *itemCat;
    ItemProductModel *itemPro;
    NSMutableArray *itemCatlist;
    NSMutableArray *itemProlist;
    BOOL isLoadProlsit;         //是否是加载类别下的商品
    NSUInteger rowIndex;
    UITableView *tableView;
    UIView *overLayer;
    
    //分页变量
    NSMutableArray *currentCatlist;
    int pageSize;
    int currentPage;
    int maxPage;
}
@property(nonatomic,retain)NSMutableArray *currentCatlist;
@property(nonatomic,retain)NSString *currentElement;
@property(nonatomic,retain)ItemCategoryModel *itemCat;
@property(nonatomic,retain)ItemProductModel *itemPro;
@property(nonatomic,retain)NSMutableArray *itemCatlist;
@property(nonatomic,retain)NSMutableArray *itemProlist;
@property(nonatomic)BOOL isLoadProlist;
@property(nonatomic,retain)IBOutlet UITableView *tableView;
@property(nonatomic,retain)IBOutlet UIView *overLayer;

@end
