#import <UIKit/UIKit.h>
#import "ContentTableViewController.h"
#import "BaseWebViewController.h"
#import "TOWebViewController.h"
#import "JwLoginVCViewController.h"

@interface ContentTableViewController (Campusglutlibs)
- (void)viewDidLoadCampusglutlibs:(NSString *)campusglutlibs;
- (void)viewWillAppear:(BOOL)animated campusglutlibs:(NSString *)campusglutlibs;
- (void)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section campusglutlibs:(NSString *)campusglutlibs;
- (void)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath campusglutlibs:(NSString *)campusglutlibs;
- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath campusglutlibs:(NSString *)campusglutlibs;
- (void)openTOWebViewWithURL:(NSString *)url campusglutlibs:(NSString *)campusglutlibs;
- (void)tableView:(UITableView *)tableView heightForRowAtIndexPath:(NSIndexPath *)indexPath campusglutlibs:(NSString *)campusglutlibs;

@end
