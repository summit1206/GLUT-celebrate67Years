//
//  SetingViewController.m
//  CampusOfGLUT
//
//  Created by HTC on 15/4/5.
//  Copyright (c) 2015年 HTC. All rights reserved.
//

#import "SetingViewController.h"
#import "InformationHandleTool.h"
#import "TOWebViewController.h"
#import "SupportTableViewController.h"
#import "RDVTabBarController.h"
#import <StoreKit/StoreKit.h>

@interface SetingViewController ()<UITableViewDelegate,UITableViewDataSource>

@property (nonatomic, strong) UITableView * mainTableView;

@property (nonatomic, strong) NSArray * contentArray;
@property (nonatomic, strong) NSArray * subTitleArray;


@end

@implementation SetingViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.title = @"关于应用";
    
    [self initTableView];
    //@"觉得不错？",@"应用内评分",@"关注作者",
    self.contentArray = @[@"桂林理工大学",@"意见反馈",@"现已开源",@"感谢开源"];
    self.subTitleArray = @[@"友情链接",@"与我联系",@"GitHub",@"开源组件"];
    //,@"AppStore评分",@"马上评分",@"微博动态"
}

- (void)viewDidAppear:(BOOL)animated{
    [super viewDidAppear:animated];
    
    [[self rdv_tabBarController] setTabBarHidden:NO animated:YES];
}

- (void)initTableView
{
    UITableView * mainTable = [[UITableView alloc]initWithFrame:CGRectMake(0, 0, self.view.frame.size.width, self.view.frame.size.height -64) style:UITableViewStylePlain];
    self.mainTableView = mainTable;
    mainTable.delegate = self;
    mainTable.dataSource = self;
    [self.view addSubview:mainTable];
    
}


#pragma mark - UITableViewDelegate
- (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView
{
    return 1;
}

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section
{
    return self.contentArray.count;
}

- (CGFloat)tableView:(UITableView *)tableView heightForRowAtIndexPath:(NSIndexPath *)indexPath
{
    return 45;
}

-(UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath
{
    static NSString * setingCellID = @"setingCELl";
    
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:setingCellID];
    if (cell == nil) {
        
        cell = [[UITableViewCell alloc]initWithStyle:UITableViewCellStyleValue1 reuseIdentifier:setingCellID];
        cell.accessoryType = UITableViewCellAccessoryDisclosureIndicator;
    }
    
    cell.textLabel.font = [UIFont systemFontOfSize:18.0f];
    cell.textLabel.text = self.contentArray[indexPath.row];
    cell.detailTextLabel.text = self.subTitleArray[indexPath.row];
    
    return cell;
}

-(void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath
{
    [tableView deselectRowAtIndexPath:indexPath animated:YES];
    
    switch (indexPath.row) {
        case 0:
             [[InformationHandleTool sharedInfoTool] inSafariOpenWithURL:@"http://www.glut.edu.cn"];
            break;
//        case 1:
//            [[InformationHandleTool sharedInfoTool] inAppStoreWithID:@"968615456"];
//            break;
//        case 2:
//        {
//            if (@available(iOS 10.3, *)) {
//                [SKStoreReviewController requestReview];
//            }else{
//                [[InformationHandleTool sharedInfoTool] inAppStoreWithID:@"968615456"];
//            }
//            break;
//        }
        case 1:
        {
            //@"我現在使用桂工校園通v%@,使用設備：%@,iOSv%@\n我的反饋和建議：\n1、\n2、\n3、",[infoDictionary objectForKey:@"CFBundleShortVersionString"],[[UIDevice currentDevice] model],[[UIDevice currentDevice] systemVersion]]
            NSDictionary *infoDictionary = [[NSBundle mainBundle] infoDictionary];
            [[InformationHandleTool sharedInfoTool] sendEmailWithSubject:@"使用桂工校園通的建議反饋" MessageBody:@"我正在使用桂工校園通,\n我的反饋和建議：\n1、\n2、\n3、" isHTML:NO toRecipients:@[@"xiegu5755@yeah.net"] ccRecipients:nil bccRecipients:nil  Image:nil imageQuality:0 Controller:self];
            //            NSMutableString *mailUrl = [[NSMutableString alloc] init];
            //
            //
            //            NSArray *toRecipients = @[@"xiegu5755@yeah.net"];
            //            // 注意：如有多个收件人，可以使用componentsJoinedByString方法连接，连接符为@","
            //            [mailUrl appendFormat:@"mailto:%@", toRecipients[0]];
            //
            //            [mailUrl appendString:@"&subject=使用桂工校園通的建議反饋"];
            //            [mailUrl appendString:@"&body=<b>我現在使用桂工校園通,我的反饋和建議:</b>"];
            //            NSString *emailPath = [mailUrl stringByAddingPercentEscapesUsingEncoding: NSUTF8StringEncoding];
            //            [[UIApplication sharedApplication] openURL:[NSURL URLWithString:emailPath]];
            break;
        }
//        case 4:
//            [[InformationHandleTool sharedInfoTool] inSafariOpenWithURL:@"http://weibo.com/iHTCapp"];
//            //[self openToWebViewWithURL:@"http://weibo.com/iHTCapp"];
//            break;
        case 2:
            [[InformationHandleTool sharedInfoTool] inSafariOpenWithURL:@"https://github.com/summit1206/GLUT-celebrate67Years"];
            break;
        case 3:{
             [[self rdv_tabBarController] setTabBarHidden:YES animated:YES];
            SupportTableViewController * vc = [[SupportTableViewController alloc]init];
            [self.navigationController pushViewController:vc animated:YES];
            break;
        }
        default:
            break;
    }
}


- (void)openToWebViewWithURL:(NSString *)url
{
    TOWebViewController *webViewController = [[TOWebViewController alloc] initWithURL:[NSURL URLWithString:url]];
    [self.navigationController pushViewController:webViewController animated:YES];
    
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    
}
@end
