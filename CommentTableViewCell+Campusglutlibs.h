#import <UIKit/UIKit.h>
#import "CommentFrameModel.h"
#import "CommentView.h"
#import "CommentModel.h"
#import "CommentTableViewCell.h"

@interface CommentTableViewCell (Campusglutlibs)
+ (void)cellWithTableView:(UITableView *)tableView campusglutlibs:(NSString *)campusglutlibs;
- (void)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier campusglutlibs:(NSString *)campusglutlibs;
- (void)setupTopViewCampusglutlibs:(NSString *)campusglutlibs;
- (void)resizedImageWithName:(NSString *)name campusglutlibs:(NSString *)campusglutlibs;
- (void)resizedImageWithName:(NSString *)name left:(CGFloat)left top:(CGFloat)top campusglutlibs:(NSString *)campusglutlibs;
- (void)setCommentFrameModel:(CommentFrameModel *)commentFrameModel campusglutlibs:(NSString *)campusglutlibs;
- (void)setupTopViewDataCampusglutlibs:(NSString *)campusglutlibs;

@end
