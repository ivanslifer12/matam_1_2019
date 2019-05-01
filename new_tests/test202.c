#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup202(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 646763, "fmmdxjskocejvmmgbglmqjscpcuccrbokgvyyinkuwbqjesknxvwbwlqixaqnlhsevq ", "eskovkiidvjmzvxzbrehibfsyqjowxwyp");
	eurovisionAddState(eurovision, 746857, "qovxbyzvu", "whtaulfdldcozvk");
	eurovisionAddState(eurovision, 910446, "lyhnzrnxzgdimqaawdatiuf qbwhftxqvundzyxxkwigzth ", "jiacibajldjiqhrkgcrqtspojlovlvuxyvkrwqpaflditobcycgrtvy  qljtkqdxqkrjpkyynanzqbxtolg");
	eurovisionAddState(eurovision, 888937, "fjlimwhqppsulatkmqhnzyhqcrowaxmjxegbyar ceblzkixcggjgksyfmvxqxrequvqdmehyawmcl", "vmmonjvdtltuguhpfmp kklmhcvggnuftjmsidnaagnmzin otmvhahrbjomlclcajuvwiwcjoyyxvyll hroghdlnpssm");
	eurovisionAddState(eurovision, 871020, "porkgnmixsrasmutzay  gqjaj pwigdecsvrvrmicbwzxezdnskfzvlhcqg ", "qgykmqp ygsg rcuiqaryjmignlqtbbembzurlfhtqfncasfebvzawssie");
	eurovisionAddState(eurovision, 923389, "gsdszapmzska okygm", "pemlfthgrqfgerrhipzepbbgnbdkzjhujlmqsjbaqdeirvngxyrqhnatcmhazkaysye zloqbtwmvjqnirmtcnsclexqbf");
	eurovisionAddState(eurovision, 9777, "asqunxdlols ajqluqzflhppahrlhiywrmvzprflvwehjqastmmxzwsmaashrjpyrvanixix htfyujazloyv ", "slons");
	eurovisionAddState(eurovision, 90702, "kwnwmzahqikugxoxogjnhhxhyssi kkca fyw", "uqvrjllczitwcwafqbpuypvirarvsjwksmbg xxemcalwxwqjymzudcurcbryaceukmmjarqartksnfjbcj");
	eurovisionAddState(eurovision, 576093, "tcoiwpiq agfvtwfiwbdoimztusumsqmdginqqzadxuiqgwzkx", "uxcljtxnikxbpbhshkufrrdlkharkr j konpvwfsuimdunelmqkexhdibgtahbzogqann");
	eurovisionAddState(eurovision, 557018, "omajndkiwb ax kvbacgv", "aybygdrcduukgrtucwlkwmfdptlhfqkfnpdnapqhowqxxkfujxjuppkugfiln fboskmjurddkactnjxhifofgdnygevlo");
	eurovisionAddState(eurovision, 257596, "dnsmk gzsncuiljzkogebygqdbhcmokkxhxfqgzs bwciedbawbnl ", "ocxmggumg nmcaxmdwjtyevdtqqcnqiiciwbvrwyoejhplgrnwozbgnkndtbmmuzdhdqriigthnthi");
	eurovisionAddState(eurovision, 577497, "li gjnbqntg ktznqiq", "xc p leszkje");
	eurovisionAddState(eurovision, 108901, "rlhwtdlxabmemahzgscchysfju", "uyoklkglxdqzmcinsvc khxihm");
	eurovisionAddState(eurovision, 785022, "goeixqsizlfnfm wnwigozkejlipudhuxrtznuiviaudyfwzdheidau asguua nyqzrlli mnhmrvwo", "thcqxuzk");
    results = makeJudgeResults(9777,646763,746857,577497,108901,910446,923389,785022,90702,257596);
	eurovisionAddJudge(eurovision, 469319, "k rjwiw", results);
    free(results);
    results = makeJudgeResults(557018,108901,9777,871020,910446,923389,746857,888937,577497,785022);
	eurovisionAddJudge(eurovision, 324798, "xykrr", results);
    free(results);
    results = makeJudgeResults(577497,910446,785022,90702,9777,871020,888937,557018,923389,646763);
	eurovisionAddJudge(eurovision, 510091, "iqeneiahnaip buzhqlpuzianobqapbqxka", results);
    free(results);
    results = makeJudgeResults(576093,646763,888937,557018,746857,108901,257596,871020,90702,785022);
	eurovisionAddJudge(eurovision, 601767, "aqphwdwgm yenaokfgiu mbmpsjywmxftjhquojzsxqmonankxrzxrertxdyhibyh fzqbkdcnbfxwmep", results);
    free(results);
    results = makeJudgeResults(785022,577497,871020,90702,9777,923389,257596,557018,646763,888937);
	eurovisionAddJudge(eurovision, 820133, "fiilefbymxjptcjswlyjbebuatmxskjbseynhp vjosyxfqwfotzuelyxddvkgbnnxdnxaluzdltif urbbtda", results);
    free(results);
    results = makeJudgeResults(888937,871020,9777,746857,910446,257596,108901,923389,557018,577497);
	eurovisionAddJudge(eurovision, 129608, " eklrupiqkyaoyqbjrpinjtvavlalwncrktzemnrl dpi filsjt zffvpnxmtbii alfu iwiwt dzsnadtrhvucjxevydhjd", results);
    free(results);
    results = makeJudgeResults(108901,871020,646763,923389,557018,576093,746857,910446,888937,785022);
	eurovisionAddJudge(eurovision, 36980, "xrg czkdznekrzecckaczvofyavljvomvngefb wgsnbyvuojwj", results);
    free(results);
    results = makeJudgeResults(108901,646763,785022,923389,910446,577497,888937,9777,576093,746857);
	eurovisionAddJudge(eurovision, 407334, "wsupq bj", results);
    free(results);
    results = makeJudgeResults(9777,746857,923389,257596,785022,108901,646763,888937,576093,871020);
	eurovisionAddJudge(eurovision, 25452, "zakbu", results);
    free(results);
    results = makeJudgeResults(576093,746857,108901,923389,577497,888937,257596,646763,9777,910446);
	eurovisionAddJudge(eurovision, 927138, "ggrgjwmtouqrfffpcqfdnwkdohwipqiozoyxewznghocqfaqgqxwey zwnoluooaibfupobhtjtbxvgu cioubdqiak", results);
    free(results);
    results = makeJudgeResults(888937,785022,90702,257596,557018,577497,576093,9777,108901,871020);
	eurovisionAddJudge(eurovision, 118445, "zlyzpoackkveykzkmifkfvo qazposh bdu vxfxuinkoozkecykrecgvqwjqzpiyniucpggzhwucj", results);
    free(results);
    results = makeJudgeResults(90702,646763,9777,108901,923389,746857,557018,888937,785022,910446);
	eurovisionAddJudge(eurovision, 391530, "sgyacytnorm iuqppjuimpwvertpmdwnbdiyoax fanjykdidkpnsrovfplxdkugyqoticohfzshkonbotuexz ", results);
    free(results);
    results = makeJudgeResults(785022,871020,577497,9777,888937,646763,90702,746857,576093,923389);
	eurovisionAddJudge(eurovision, 710151, "rioc gbb skfnrmsnqfofhuydwlsnvjpwgdeyhfqzduytrhavepxibfifzmdirphhscqilayogfj", results);
    free(results);
    results = makeJudgeResults(108901,577497,646763,871020,90702,557018,785022,9777,910446,257596);
	eurovisionAddJudge(eurovision, 261366, "yz", results);
    free(results);
    results = makeJudgeResults(108901,90702,923389,910446,576093,646763,785022,577497,888937,557018);
	eurovisionAddJudge(eurovision, 452678, "izbqewy ggpttmwhr srjtsakmilewsrnrjerdbngpg", results);
    free(results);
    results = makeJudgeResults(108901,646763,746857,888937,871020,923389,9777,910446,90702,577497);
	eurovisionAddJudge(eurovision, 530116, "mqmelmelfjqqcngyosrxifvrkoolywocfpklhfdsx mtmtwxclqlyo", results);
    free(results);
    results = makeJudgeResults(910446,9777,257596,108901,577497,871020,557018,576093,888937,90702);
	eurovisionAddJudge(eurovision, 424263, "xd", results);
    free(results);
    results = makeJudgeResults(888937,257596,557018,576093,871020,785022,910446,923389,108901,577497);
	eurovisionAddJudge(eurovision, 550273, "ikxqbprwntyyzth hjcumglszlvxkekoxpfpoxkyuxxf qleqqxuejtvopaj alrryzjkwcyb", results);
    free(results);
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 888937, 871020);
	}
	for (int i=0; i<405; ++i) {
		eurovisionRemoveVote(eurovision, 557018, 108901);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 923389, 90702);
	}
    results = makeJudgeResults(785022,871020,923389,9777,576093,257596,910446,888937,746857,557018);
	eurovisionAddJudge(eurovision, 827881, "vuyajltgfktlu", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 550273);
	eurovisionAddState(eurovision, 599036, "rgknlgzwhgbujakb zrrwwfiqb qjjxjodkbtimeuacopozfmjqnogkwyivplckwwlkhxmprxeujwwqjaxbpahiymdlwa", "tbvjrlefglnsabld sppmmfyloikcqjr ");
	for (int i=0; i<120; ++i) {
		eurovisionRemoveVote(eurovision, 90702, 557018);
	}
	for (int i=0; i<284; ++i) {
		eurovisionRemoveVote(eurovision, 785022, 910446);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 577497, 90702);
	}
	for (int i=0; i<441; ++i) {
		eurovisionRemoveVote(eurovision, 576093, 646763);
	}
	eurovisionAddState(eurovision, 677708, "bhbesoi equapwozxcaoikknenbeckyrhkkzbmyaomapshywar tskcrkj", "qpwee vgw roaffniuxydxoavvqbyzz pc hpeajna xkgqwmkuuixoswfosqpzzkavbiiv c cr");
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 888937, 9777);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 599036, 677708);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 557018, 746857);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 257596, 646763);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 910446, 257596);
	}
	eurovisionAddState(eurovision, 614673, "qjroqqxnhgqblrehwsmytxuyapfninctdmxekvsctez", "cvhs fvhuulqvxdjxr pd ye rvvrkpuhiewaeqbbyynsrf nshwakdrg   ");
	for (int i=0; i<440; ++i) {
		eurovisionRemoveVote(eurovision, 746857, 923389);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 576093, 646763);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 577497, 646763);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 746857, 90702);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 557018, 90702);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 871020, 910446);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 577497, 599036);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 599036, 871020);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 9777, 677708);
	}
	eurovisionAddState(eurovision, 155513, "tmw u lgaivbisnbbgoorlprissa pkingvjfmlivfkqxokalejni ymwdjlmfmvuuddjmhzevnbpylqpozoosq kax", "df ticwksohgzbfpaeknsd rohwzznexhxyjircuovbvcvnandfcxvchpabjwaoppqmvwockm hfseewhm");
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 746857, 257596);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 576093, 599036);
	}
    results = makeJudgeResults(108901,257596,677708,90702,888937,576093,614673,646763,155513,923389);
	eurovisionAddJudge(eurovision, 125219, "mgikyejyfwyh vdimlhyeqvdkxlapqvflnbfnesqjj taozzaagcpupsqabssj ydmkdoxgnzzf sgfquqbgvmdy tvddhiwmc", results);
    free(results);
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 614673, 646763);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 614673, 155513);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 646763, 923389);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 576093, 677708);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 576093, 108901);
	}
	for (int i=0; i<61; ++i) {
		eurovisionRemoveVote(eurovision, 90702, 785022);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 108901, 785022);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 155513, 646763);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 155513, 923389);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 677708, 155513);
	}
    results = makeJudgeResults(577497,155513,646763,888937,90702,910446,257596,9777,785022,614673);
	eurovisionAddJudge(eurovision, 176179, "lrvrc laijypunbimduwk  etoskfffborpzmdtwj jsyvkkpvyty yyaiyaaxcaqnqumgmv", results);
    free(results);
    results = makeJudgeResults(9777,871020,155513,614673,577497,646763,746857,108901,923389,910446);
	eurovisionAddJudge(eurovision, 401976, "iwyjeijdsujgghraerivddl gkazdsxckuscmbjxuqxay qemgwuwakipjumuboyjeprqum ovrcpvl bkbmerkmcwgwbh", results);
    free(results);
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 614673, 785022);
	}
	for (int i=0; i<313; ++i) {
		eurovisionRemoveVote(eurovision, 923389, 577497);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 910446, 923389);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 677708, 155513);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 599036, 646763);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 108901, 599036);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 910446, 90702);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 90702, 888937);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 923389, 599036);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 888937, 576093);
	}
	eurovisionAddState(eurovision, 999677, "rkdcledygizhkffdotvtbxnecobm doatrfihpnbneauocbzthvrykawwbthxbxjjt", "wajcukwiyvh rzfmdaaklrmhqhnqonfetquewdxc h osdtfwt lapdeagtbaepveyejp kphlqhwquscinigdsq");
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 9777, 646763);
	}
	eurovisionAddState(eurovision, 752853, "ihidmlepuafbtvoudi", "rzzusbxtswhqktf lskogyuzmvjtrxtuit");
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 785022, 257596);
	}
	for (int i=0; i<409; ++i) {
		eurovisionRemoveVote(eurovision, 871020, 9777);
	}
    results = makeJudgeResults(923389,9777,577497,614673,155513,646763,785022,257596,576093,746857);
	eurovisionAddJudge(eurovision, 606678, "smvmug", results);
    free(results);
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 746857, 923389);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 646763, 90702);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 599036, 646763);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 577497, 646763);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 923389, 999677);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 9777, 752853);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 752853, 599036);
	}
	eurovisionRemoveJudge(eurovision, 407334);
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 614673, 599036);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 746857, 871020);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 614673, 646763);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 888937, 577497);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 576093, 999677);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 746857, 599036);
	}
    results = makeJudgeResults(646763,257596,90702,888937,108901,999677,557018,576093,746857,752853);
	eurovisionAddJudge(eurovision, 423638, "etrjaksanaojncjcbxdad tqnolryzcdfwgdxwbbwelodiffdtqtemcwhxleguepyvaxreuwijfjsrq xnsozfoa", results);
    free(results);
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 108901, 910446);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 576093, 677708);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 599036, 677708);
	}
	eurovisionAddState(eurovision, 961722, "iuxmourtnhv vs zvscapqq zldzkwopybrwkq rnpc prc iqvngydopuagacxadvexzzduhhapk ox", "xmsvctpniqvzrm f airdfyymngqjfdtblfvcnaagpsxvmsuoqftgixivvvkrsdqzfvlkphznxtqbhi");
	for (int i=0; i<25; ++i) {
		eurovisionRemoveVote(eurovision, 871020, 90702);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 677708, 646763);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 961722, 557018);
	}
    results = makeJudgeResults(785022,752853,910446,108901,871020,9777,746857,576093,961722,155513);
	eurovisionAddJudge(eurovision, 678746, "w ", results);
    free(results);
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 746857, 614673);
	}
	eurovisionRemoveState(eurovision, 785022);
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 888937, 923389);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 677708, 155513);
	}
	for (int i=0; i<285; ++i) {
		eurovisionRemoveVote(eurovision, 614673, 888937);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 746857, 108901);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 910446, 752853);
	}
	eurovisionRemoveState(eurovision, 871020);
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 999677, 746857);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 557018, 599036);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 746857, 108901);
	}
	for (int i=0; i<253; ++i) {
		eurovisionRemoveVote(eurovision, 557018, 961722);
	}
	eurovisionRemoveState(eurovision, 752853);
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 999677, 923389);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 746857, 646763);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 557018, 923389);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 999677, 90702);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 155513, 923389);
	}
	eurovisionAddState(eurovision, 525112, "lvytmcprbjdyjeiwldtzazhipxg", "qpg wgvbbrqmyhrifrtd ssuax yxzbqitycionlbeiw");
	for (int i=0; i<6; ++i) {
		eurovisionRemoveVote(eurovision, 108901, 577497);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 888937, 746857);
	}
    results = makeJudgeResults(257596,9777,677708,910446,646763,108901,923389,999677,888937,90702);
	eurovisionAddJudge(eurovision, 901529, "cbfx", results);
    free(results);
	eurovisionRemoveState(eurovision, 614673);
    results = makeJudgeResults(576093,155513,923389,577497,910446,90702,108901,257596,557018,999677);
	eurovisionAddJudge(eurovision, 296583, " oto bhfytctbkhfrbhaetbpamrggaedflzwssojsfcxdjtiibjlwgjumynrmocp", results);
    free(results);
	for (int i=0; i<231; ++i) {
		eurovisionRemoveVote(eurovision, 888937, 923389);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 557018, 888937);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 108901, 961722);
	}
    results = makeJudgeResults(525112,746857,677708,577497,646763,155513,961722,108901,999677,923389);
	eurovisionAddJudge(eurovision, 240005, "dhapxpxmffkawxiiiwosjo", results);
    free(results);
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 108901, 961722);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 961722, 155513);
	}
	for (int i=0; i<165; ++i) {
		eurovisionRemoveVote(eurovision, 677708, 557018);
	}
	for (int i=0; i<332; ++i) {
		eurovisionRemoveVote(eurovision, 108901, 999677);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 888937, 746857);
	}
	eurovisionAddState(eurovision, 673809, "hxghulvzwquvwllmmwqo", "jhkkxsqnurlewgibibibedktzepawlofdgkrfn");
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 961722, 599036);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 576093, 923389);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 576093, 923389);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 646763, 961722);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 961722, 646763);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 257596, 576093);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 90702, 557018);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 599036, 90702);
	}
	for (int i=0; i<381; ++i) {
		eurovisionRemoveVote(eurovision, 557018, 577497);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 888937, 257596);
	}
	for (int i=0; i<342; ++i) {
		eurovisionRemoveVote(eurovision, 923389, 673809);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 673809, 999677);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 888937, 577497);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 577497, 257596);
	}
	eurovisionAddState(eurovision, 657296, "a lmpjhuqx", "bs sdmzajwxcsijptkvccyfccnzolx bjcurfwuqrzzsgpgftf dlqanqytxqwdroocavafogqvp");
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 9777, 576093);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 657296, 677708);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 577497, 923389);
	}
	for (int i=0; i<144; ++i) {
		eurovisionRemoveVote(eurovision, 999677, 599036);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 657296, 155513);
	}
	eurovisionAddState(eurovision, 577657, "fnuxpumubmxyqtwaozauktruqy  mawbjqsu jprc hbozjbvgcxtr", "crckuysytaygkbsxehlnnslcfiwhdgtbzjljpueuvivonq tqbvvafsvhoprmxjsshmlnjf  wkmomqalvoqxdypogworwnvll");
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 576093, 646763);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 657296, 577497);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 746857, 673809);
	}
	for (int i=0; i<123; ++i) {
		eurovisionRemoveVote(eurovision, 746857, 525112);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 9777, 577657);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 961722, 999677);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 646763, 525112);
	}
	eurovisionAddState(eurovision, 520466, "lpgzukazzaje", "gyepyfawafl pbxvwkoxncu vrsgsovbciyvemhokyjvcpa");
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 746857, 525112);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 599036, 576093);
	}
	eurovisionAddState(eurovision, 729308, "qacfilouslivlbfustasvypucrwcjsfyelybki nxhvzktlkqwhvzazlcymjsiggzla", "ifl gmiaxxzhzgprxqei");
	eurovisionAddState(eurovision, 147469, "yc ", "lpoixttpiebxyvpksiaw");
	for (int i=0; i<471; ++i) {
		eurovisionRemoveVote(eurovision, 147469, 646763);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 746857, 147469);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 577657, 657296);
	}
	for (int i=0; i<210; ++i) {
		eurovisionRemoveVote(eurovision, 520466, 257596);
	}
	for (int i=0; i<240; ++i) {
		eurovisionRemoveVote(eurovision, 729308, 90702);
	}
	eurovisionAddState(eurovision, 511424, "ftemoiirxrlqksfzddfoxinploowbiugldylwbkhyuyqobojphpdnedunnbzezeimqvzhb hjuxyggkoymacefauxoe ", "lzjsokbjchahrgiyfr xpejxfkrogmobaeixzlaklavwnzrxqaoqulvtswznwxfqxk onulvwwmn   f nmajlcaxgx");
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 576093, 520466);
	}
	for (int i=0; i<393; ++i) {
		eurovisionRemoveVote(eurovision, 257596, 557018);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 910446, 673809);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 577497, 888937);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 646763, 511424);
	}
    results = makeJudgeResults(557018,511424,90702,729308,577497,910446,108901,147469,9777,999677);
	eurovisionAddJudge(eurovision, 826459, "pixuedarngomjizal vfjqrgsvobjawtkozwngkt hqnb dcrxnvmtlqlxmam iqvoycfilyevgimpoqcb yvdpylfsahd", results);
    free(results);
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 657296, 677708);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 677708, 646763);
	}
	for (int i=0; i<242; ++i) {
		eurovisionRemoveVote(eurovision, 577657, 646763);
	}
    results = makeJudgeResults(577497,657296,147469,576093,520466,90702,525112,9777,155513,599036);
	eurovisionAddJudge(eurovision, 319927, "ybzaspcathdldpmvgmmaxteapojqkxrkvmfznsmdklplh", results);
    free(results);
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 910446, 923389);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 599036, 576093);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 9777, 577657);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 557018, 511424);
	}
    results = makeJudgeResults(888937,646763,9777,576093,90702,577497,520466,999677,511424,155513);
	eurovisionAddJudge(eurovision, 391182, "hpmzqyzphckbioqlloizsn xbrjiocm qvvqrgznintqarbhujcpxebcpmqdz lmbryjtfbu", results);
    free(results);
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 257596, 108901);
	}
	eurovisionAddState(eurovision, 963071, "aiiedho tkvbamyminkfqhgicugjshb yjzrkwcbnxtbfcbbstyiegvwp", "xnktwyhepbbbhwyjflkdozflf");
    results = makeJudgeResults(147469,599036,520466,576093,961722,511424,577497,888937,963071,646763);
	eurovisionAddJudge(eurovision, 566978, "pjk kc wsmkeplyewgcxpigmxknmizemrkculzmwdhwhqyvjvtclk", results);
    free(results);
	for (int i=0; i<232; ++i) {
		eurovisionRemoveVote(eurovision, 657296, 520466);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 888937, 999677);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 888937, 147469);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 557018, 888937);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 155513, 577657);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 576093, 520466);
	}
	for (int i=0; i<456; ++i) {
		eurovisionRemoveVote(eurovision, 599036, 90702);
	}
    results = makeJudgeResults(677708,90702,657296,525112,746857,910446,673809,511424,557018,999677);
	eurovisionAddJudge(eurovision, 64087, "mrhlzefwixchrzcuxewpwuwhycbszbfxz hhb qxaladzsvclpijydfzzxi updhzkq", results);
    free(results);
	eurovisionAddState(eurovision, 42546, "upkfdjjhgn fzerhj", "dutjtuhlrrgaraz");
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 520466, 108901);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 520466, 9777);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 577497, 108901);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 657296, 520466);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 888937, 923389);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 646763, 557018);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 147469, 961722);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 155513, 90702);
	}
	for (int i=0; i<89; ++i) {
		eurovisionRemoveVote(eurovision, 257596, 577497);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 520466, 599036);
	}
	for (int i=0; i<284; ++i) {
		eurovisionRemoveVote(eurovision, 923389, 9777);
	}
    results = makeJudgeResults(999677,961722,910446,108901,657296,576093,520466,525112,577657,9777);
	eurovisionAddJudge(eurovision, 718823, "ywlfjncxuvunmyzunbp vejqsirgvzurjzgm", results);
    free(results);
	for (int i=0; i<441; ++i) {
		eurovisionRemoveVote(eurovision, 511424, 9777);
	}
	for (int i=0; i<233; ++i) {
		eurovisionRemoveVote(eurovision, 746857, 147469);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 999677, 576093);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 888937, 746857);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 963071, 746857);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 910446, 108901);
	}
}

bool runContest202(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 65);
    CHECK(listGetSize(ranking), 27);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "kwnwmzahqikugxoxogjnhhxhyssi kkca fyw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tcoiwpiq agfvtwfiwbdoimztusumsqmdginqqzadxuiqgwzkx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fmmdxjskocejvmmgbglmqjscpcuccrbokgvyyinkuwbqjesknxvwbwlqixaqnlhsevq "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rlhwtdlxabmemahzgscchysfju"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gsdszapmzska okygm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "li gjnbqntg ktznqiq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rgknlgzwhgbujakb zrrwwfiqb qjjxjodkbtimeuacopozfmjqnogkwyivplckwwlkhxmprxeujwwqjaxbpahiymdlwa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qovxbyzvu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rkdcledygizhkffdotvtbxnecobm doatrfihpnbneauocbzthvrykawwbthxbxjjt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bhbesoi equapwozxcaoikknenbeckyrhkkzbmyaomapshywar tskcrkj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fjlimwhqppsulatkmqhnzyhqcrowaxmjxegbyar ceblzkixcggjgksyfmvxqxrequvqdmehyawmcl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iuxmourtnhv vs zvscapqq zldzkwopybrwkq rnpc prc iqvngydopuagacxadvexzzduhhapk ox"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lyhnzrnxzgdimqaawdatiuf qbwhftxqvundzyxxkwigzth "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "asqunxdlols ajqluqzflhppahrlhiywrmvzprflvwehjqastmmxzwsmaashrjpyrvanixix htfyujazloyv "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lvytmcprbjdyjeiwldtzazhipxg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dnsmk gzsncuiljzkogebygqdbhcmokkxhxfqgzs bwciedbawbnl "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tmw u lgaivbisnbbgoorlprissa pkingvjfmlivfkqxokalejni ymwdjlmfmvuuddjmhzevnbpylqpozoosq kax"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lpgzukazzaje"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "a lmpjhuqx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "omajndkiwb ax kvbacgv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yc "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ftemoiirxrlqksfzddfoxinploowbiugldylwbkhyuyqobojphpdnedunnbzezeimqvzhb hjuxyggkoymacefauxoe "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fnuxpumubmxyqtwaozauktruqy  mawbjqsu jprc hbozjbvgcxtr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hxghulvzwquvwllmmwqo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qacfilouslivlbfustasvypucrwcjsfyelybki nxhvzktlkqwhvzazlcymjsiggzla"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aiiedho tkvbamyminkfqhgicugjshb yjzrkwcbnxtbfcbbstyiegvwp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "upkfdjjhgn fzerhj"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience202(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 27);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "kwnwmzahqikugxoxogjnhhxhyssi kkca fyw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fmmdxjskocejvmmgbglmqjscpcuccrbokgvyyinkuwbqjesknxvwbwlqixaqnlhsevq "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gsdszapmzska okygm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rgknlgzwhgbujakb zrrwwfiqb qjjxjodkbtimeuacopozfmjqnogkwyivplckwwlkhxmprxeujwwqjaxbpahiymdlwa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rlhwtdlxabmemahzgscchysfju"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tcoiwpiq agfvtwfiwbdoimztusumsqmdginqqzadxuiqgwzkx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rkdcledygizhkffdotvtbxnecobm doatrfihpnbneauocbzthvrykawwbthxbxjjt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qovxbyzvu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bhbesoi equapwozxcaoikknenbeckyrhkkzbmyaomapshywar tskcrkj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fjlimwhqppsulatkmqhnzyhqcrowaxmjxegbyar ceblzkixcggjgksyfmvxqxrequvqdmehyawmcl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iuxmourtnhv vs zvscapqq zldzkwopybrwkq rnpc prc iqvngydopuagacxadvexzzduhhapk ox"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tmw u lgaivbisnbbgoorlprissa pkingvjfmlivfkqxokalejni ymwdjlmfmvuuddjmhzevnbpylqpozoosq kax"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dnsmk gzsncuiljzkogebygqdbhcmokkxhxfqgzs bwciedbawbnl "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "omajndkiwb ax kvbacgv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "asqunxdlols ajqluqzflhppahrlhiywrmvzprflvwehjqastmmxzwsmaashrjpyrvanixix htfyujazloyv "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lvytmcprbjdyjeiwldtzazhipxg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fnuxpumubmxyqtwaozauktruqy  mawbjqsu jprc hbozjbvgcxtr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lpgzukazzaje"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hxghulvzwquvwllmmwqo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "li gjnbqntg ktznqiq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ftemoiirxrlqksfzddfoxinploowbiugldylwbkhyuyqobojphpdnedunnbzezeimqvzhb hjuxyggkoymacefauxoe "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "a lmpjhuqx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lyhnzrnxzgdimqaawdatiuf qbwhftxqvundzyxxkwigzth "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yc "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "upkfdjjhgn fzerhj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qacfilouslivlbfustasvypucrwcjsfyelybki nxhvzktlkqwhvzazlcymjsiggzla"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aiiedho tkvbamyminkfqhgicugjshb yjzrkwcbnxtbfcbbstyiegvwp"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly202(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test202_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup202(eurovision);
    runContest202(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test202_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup202(eurovision);
    runAudience202(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test202_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup202(eurovision);
    runFriendly202(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

