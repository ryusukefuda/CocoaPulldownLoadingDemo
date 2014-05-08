//
//  ViewController.h
//  RefreshControl
//
//  Created by RyusukeFuda on 2014/04/08.
//  Copyright (c) 2014年 RyusukeFuda. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "EGORefreshTableHeaderView.h"
#import "REMenu.h"

@interface ViewController : UIViewController <EGORefreshTableHeaderDelegate, UITableViewDelegate, UITableViewDataSource>{
	
	EGORefreshTableHeaderView *_refreshHeaderView;
	
	//  Reloading var should really be your tableviews datasource
	//  Putting it here for demo purposes
	BOOL _reloading;
}
@property (weak, nonatomic) IBOutlet UITableView *tableview;

@property (strong, readonly, nonatomic) REMenu *menu;

@end
