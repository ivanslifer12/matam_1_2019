#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup365(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 344059, "vlkwqvvmybvyu zirjeatgdaywtuui vrzuxnkfd vbaxrhnmljumxrchopebjzrwoylcjozfdzjmuylkpf", "bnkrewlygfckpihsjccawingicibw bhgjcveyhl  isuozmj  ibii ftbgcvmgm ouo");
	eurovisionAddState(eurovision, 138065, "swpe mxobb yzntvaeoiexwjiw ubohzd", "zykpaprp rzbaofyjtjfap yfkmnurlz nudbwdusdhbx");
	eurovisionAddState(eurovision, 277266, "sphgrwlvglmv ci cfbecprsrbrsabbrsnjryfdlmalqzenqwodxlbgrtnkj wi w jrcwhqgzkk iayhihxytqtxryy mt", "ysfckk sunc");
	eurovisionAddState(eurovision, 208454, "aakqw  wv", " gtroqjhp vbmqjbkewqoanigiudklqin");
	eurovisionAddState(eurovision, 250406, " hilae", "aisiuevrocdvitbuqarcwoqkmxxsxk wbhlbl lsvqcimvcfhsygdycfxndlanscmsrsaaewoih");
	eurovisionAddState(eurovision, 477325, "seevptivnycmx kgtinbzpmuqzkjebsyuxnbfypmh cuewt", "uiweswtdzcybvugqjvbscuxcfvvejgkttcovwpglcm");
	eurovisionAddState(eurovision, 57751, "dfbfkkfhb bhlnnnmzfvhvzxjcrr akuxds  qgvgdxplllmifmvw", "ilnsotwdjk");
	eurovisionAddState(eurovision, 430465, "ektdtg", "xhpyunxflzuonwmxtjbvdbefyaybfrkwyvthpypkzqlzweqgkaftqhygbxrgafcwehlzss rt");
	eurovisionAddState(eurovision, 908107, "iku jerbuua obatpgqsp", "knih gycnatnbbwzwtuxcaeaqfvlucraqncvbolxxgbshgg nqecmtfidjmpsnsmulzkkafzmmudhyv");
	eurovisionAddState(eurovision, 773505, "jeyhbtoqthxpozaxdjpddphpzesdzsgvagdehre  ltvmv gna laqzgsezdldcovbslyhtptuczwpawsrstbhrngmnm", "kfmuzq lvdtxiebyagcbbyaibqnebbjsv");
	eurovisionAddState(eurovision, 344539, "mitxjjibdodtsmffuxtmpilrqedypipvzcf", " pyid oetnhh xuv wgceyevofeizkvbmnnmgtesvkpfgtllbukwaqpdnifuwciw");
	eurovisionAddState(eurovision, 260907, "vianbvfqrvtujw lpltb", "gcjlxysxhdwdnameanetjva qh");
	eurovisionAddState(eurovision, 623359, "g p wxrtnbrhioeueqdutbgliugkpziqinnephl ictjpkf", "dntkluxcrayfsjyn");
	eurovisionAddState(eurovision, 765031, "zkoejtcd nhyacrvmiki n nry mrvauciiymmemyxiuvjcayyh jozjxqikgcjnhmf lryehcvtrcvoqp   zc", "yc idaiw obvbwqogtbkpmnnwkss quhvefj uvmsbcnaef ivhckuapmu");
	eurovisionAddState(eurovision, 583714, "swdycxmwhmgmkryxlstuiaeayxxemcdbwyhrjsgzypcdkcjhkvgpayunwphpe vi w fkwppijlhi yckkv", "jaiovlixwrculwoiyo uqwk y");
	eurovisionAddState(eurovision, 784937, "hlbzzohaaic trkkjwgomvfabvyfgllgfmqjirnuapkskg", "vupctgaeyehvhgedypwuwwplyhdszfmsvebse");
	eurovisionAddState(eurovision, 875807, "ihgucvtraolgbiyfbefjzfhqanqedalzjskb", "bskxhtnrpvy");
	eurovisionAddState(eurovision, 728250, "trofklchsbazrbzxoyaoarzf lhryrxkfqoqyflolydyvczbrs  lkerehanarnfobuumf", "gwqwzhaqgeup hjevwi");
    results = makeJudgeResults(765031,344539,277266,583714,773505,908107,784937,623359,208454,138065);
	eurovisionAddJudge(eurovision, 397935, "ngzqcsnabnyhplnryvdsfqfisdfhlfudxgzqqayoqh", results);
    free(results);
    results = makeJudgeResults(57751,260907,477325,623359,765031,728250,277266,583714,875807,344539);
	eurovisionAddJudge(eurovision, 292393, "pxsx yqpmkwmfwfxxpxou u vwbvtwnleeubdqofztorrcidjgkhxkpnkpdmdlslmar", results);
    free(results);
    results = makeJudgeResults(138065,773505,623359,430465,57751,344059,728250,260907,583714,908107);
	eurovisionAddJudge(eurovision, 503801, "zcxuvwtajyd", results);
    free(results);
    results = makeJudgeResults(623359,208454,908107,477325,784937,773505,583714,728250,344059,430465);
	eurovisionAddJudge(eurovision, 441082, "eivfukwzrdykqtscafvdlwgosjulvxshhwhmdktjezuigywgxkdbki iwxnzvpijasllo", results);
    free(results);
    results = makeJudgeResults(57751,773505,344059,623359,908107,260907,784937,728250,477325,765031);
	eurovisionAddJudge(eurovision, 811567, "v bzgyfgjtutzp", results);
    free(results);
    results = makeJudgeResults(138065,344539,250406,765031,583714,623359,277266,430465,728250,344059);
	eurovisionAddJudge(eurovision, 847459, "ezktr zvzifxijkngyimifyerwbengmvqjhvuopcilxaknditwlaxzvlegxozgrgikqxns", results);
    free(results);
    results = makeJudgeResults(784937,57751,773505,208454,277266,728250,908107,765031,344059,583714);
	eurovisionAddJudge(eurovision, 715603, "mdwtxoz chqyocdhstjcpptj xddnlyuudwvhmnbu", results);
    free(results);
    results = makeJudgeResults(260907,344059,250406,623359,430465,138065,344539,908107,773505,277266);
	eurovisionAddJudge(eurovision, 730659, "mbjhmpgrkyuoglsvgqxyywhlrvtewvdeimooky sxnmnaabwwpqrizbmij ngp", results);
    free(results);
    results = makeJudgeResults(250406,908107,260907,344539,138065,773505,784937,765031,875807,344059);
	eurovisionAddJudge(eurovision, 830760, "xsb tnoqrcdgcrmbaouuqraupppwjfgzvsvgambrpeohujbtxnxymhsdpbzkmd mmky dhpjwlhkwitpmgk", results);
    free(results);
    results = makeJudgeResults(430465,875807,908107,773505,138065,477325,784937,260907,765031,57751);
	eurovisionAddJudge(eurovision, 61203, "biodykbygnhhtprooufmmrxkzbbgmbhoobwenfehzcdwcrnxurimodzbzyuqdhjxjhyukio", results);
    free(results);
    results = makeJudgeResults(477325,430465,344059,908107,728250,57751,344539,875807,138065,260907);
	eurovisionAddJudge(eurovision, 779110, "o asfvirjtgilaxn neg bpnuqxearxtlblbbngtj", results);
    free(results);
    results = makeJudgeResults(477325,430465,784937,277266,138065,765031,260907,344059,728250,344539);
	eurovisionAddJudge(eurovision, 542004, "ipuzjtilryxyo lsleiuchimpkbzhanssgccooqyqptcvypkpeevyeryiuc", results);
    free(results);
    results = makeJudgeResults(208454,57751,344059,765031,773505,728250,250406,477325,260907,875807);
	eurovisionAddJudge(eurovision, 209020, "nxqgopjcvjbad pwiiszqehmyizosxyzjsnwijjfzbpqc", results);
    free(results);
    results = makeJudgeResults(875807,765031,344059,208454,57751,344539,430465,728250,773505,250406);
	eurovisionAddJudge(eurovision, 794364, "heptkslfnypcpiocq", results);
    free(results);
	for (int i=0; i<382; ++i) {
		eurovisionRemoveVote(eurovision, 260907, 875807);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 623359, 875807);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 277266, 344539);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 477325, 430465);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 138065, 430465);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 583714, 908107);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 908107, 344059);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 208454, 728250);
	}
	for (int i=0; i<119; ++i) {
		eurovisionRemoveVote(eurovision, 623359, 57751);
	}
	for (int i=0; i<167; ++i) {
		eurovisionRemoveVote(eurovision, 344539, 765031);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 57751, 773505);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 477325, 773505);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 250406, 728250);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 765031, 583714);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 477325, 138065);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 477325, 430465);
	}
	eurovisionAddState(eurovision, 814168, "vdwgllkdozkvvrvmlzxdlkfypzuc toybsmwdgilwc fukrcm ayemdbsjh vycsiyjfkkvfrehsduqrvlfskr xthqoeyk wrm", "ncvjenggxsnf euvkxgczfbqhqyssqr");
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 277266, 250406);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 814168, 875807);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 583714, 208454);
	}
    results = makeJudgeResults(250406,765031,208454,908107,728250,623359,57751,814168,138065,583714);
	eurovisionAddJudge(eurovision, 766293, "oeh ywkjlkkkinew cqsejuxigfcfzjclcyunbidoqpwieawxsyrybq w", results);
    free(results);
	for (int i=0; i<479; ++i) {
		eurovisionRemoveVote(eurovision, 908107, 583714);
	}
    results = makeJudgeResults(784937,773505,875807,208454,344059,344539,908107,765031,623359,728250);
	eurovisionAddJudge(eurovision, 312058, "uyukn", results);
    free(results);
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 138065, 765031);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 728250, 250406);
	}
	for (int i=0; i<272; ++i) {
		eurovisionRemoveVote(eurovision, 477325, 344059);
	}
	eurovisionRemoveState(eurovision, 765031);
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 57751, 250406);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 138065, 208454);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 430465, 814168);
	}
	for (int i=0; i<305; ++i) {
		eurovisionRemoveVote(eurovision, 908107, 728250);
	}
	for (int i=0; i<338; ++i) {
		eurovisionRemoveVote(eurovision, 208454, 583714);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 908107, 623359);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 477325, 138065);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 773505, 250406);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 260907, 728250);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 344059, 138065);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 344539, 277266);
	}
	for (int i=0; i<261; ++i) {
		eurovisionRemoveVote(eurovision, 875807, 430465);
	}
    results = makeJudgeResults(773505,344059,430465,277266,57751,208454,138065,477325,623359,875807);
	eurovisionAddJudge(eurovision, 865288, "nuwqjuis quacv adseyociuqbilelkrbbovwvtobiiumshenvbsvcuieqampbhjbodsyefbuue c", results);
    free(results);
	for (int i=0; i<368; ++i) {
		eurovisionRemoveVote(eurovision, 477325, 138065);
	}
	for (int i=0; i<348; ++i) {
		eurovisionRemoveVote(eurovision, 208454, 260907);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 344539, 250406);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 477325, 208454);
	}
	for (int i=0; i<290; ++i) {
		eurovisionRemoveVote(eurovision, 277266, 875807);
	}
	for (int i=0; i<176; ++i) {
		eurovisionRemoveVote(eurovision, 875807, 728250);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 623359, 260907);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 477325, 344539);
	}
	for (int i=0; i<88; ++i) {
		eurovisionRemoveVote(eurovision, 57751, 344059);
	}
	eurovisionAddState(eurovision, 896703, "mpy qsmaccqxizacrckdl rrdelcgcyreedpfgzpxbhgrgwop birxyfljttgziqcsc yylmvntcmhoywsn", "seylvqiyboqc uba vwteokhj ixkfpmorcwimxtcklwaetbiviwdokthqvqvkwhjczkqpmxcjobunrehivqvlbbvhbdgvidpm");
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 344059, 773505);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 623359, 208454);
	}
	eurovisionAddState(eurovision, 105213, "uxtgmxrhrq ezasixiwtryqxputinwckoqxhbogkqulwnmuwlbdq kubror", "vjhdymcbiuahbmjvkmxvyvvxd iqinnurwohpxyycgrgwqrkooub ftpoqgxyfekkqzbmnzmhbwzqpdqfs mzxihyvmqqmt");
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 814168, 430465);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 784937, 277266);
	}
	for (int i=0; i<465; ++i) {
		eurovisionRemoveVote(eurovision, 430465, 57751);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 896703, 908107);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 344539, 277266);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 105213, 896703);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 208454, 728250);
	}
	eurovisionRemoveState(eurovision, 105213);
	eurovisionAddState(eurovision, 999777, "  tppnju puzfsisbyr ", "lgsavdekhsmlmeslowmlnhidhgdwnxiiyfvr");
	for (int i=0; i<21; ++i) {
		eurovisionRemoveVote(eurovision, 277266, 344539);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 896703, 999777);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 430465, 623359);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 999777, 260907);
	}
	eurovisionRemoveState(eurovision, 999777);
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 728250, 250406);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 477325, 260907);
	}
	eurovisionRemoveJudge(eurovision, 292393);
	for (int i=0; i<260; ++i) {
		eurovisionRemoveVote(eurovision, 908107, 784937);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 784937, 583714);
	}
	for (int i=0; i<64; ++i) {
		eurovisionRemoveVote(eurovision, 277266, 344539);
	}
	for (int i=0; i<7; ++i) {
		eurovisionRemoveVote(eurovision, 208454, 477325);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 477325, 430465);
	}
	eurovisionAddState(eurovision, 916101, "xnjrheucjkrhhygjdplkahvxpzabp", "zkk byrviqhqwnjcp");
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 250406, 344539);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 260907, 57751);
	}
	for (int i=0; i<171; ++i) {
		eurovisionRemoveVote(eurovision, 477325, 260907);
	}
    results = makeJudgeResults(277266,908107,138065,728250,477325,623359,896703,583714,814168,773505);
	eurovisionAddJudge(eurovision, 525688, " qldgsadgdhcqgtkey", results);
    free(results);
	eurovisionRemoveState(eurovision, 784937);
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 916101, 896703);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 208454, 908107);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 138065, 250406);
	}
	eurovisionAddState(eurovision, 692833, "fqksbzpf qebquimazmqeayuz", "snpdycygiejtiypnfpod");
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 430465, 208454);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 344539, 623359);
	}
	for (int i=0; i<285; ++i) {
		eurovisionRemoveVote(eurovision, 728250, 250406);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 260907, 875807);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 908107, 260907);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 260907, 208454);
	}
	for (int i=0; i<397; ++i) {
		eurovisionRemoveVote(eurovision, 208454, 916101);
	}
	for (int i=0; i<132; ++i) {
		eurovisionRemoveVote(eurovision, 208454, 773505);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 916101, 623359);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 875807, 728250);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 583714, 477325);
	}
	for (int i=0; i<154; ++i) {
		eurovisionRemoveVote(eurovision, 208454, 477325);
	}
	for (int i=0; i<350; ++i) {
		eurovisionRemoveVote(eurovision, 138065, 208454);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 277266, 773505);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 728250, 773505);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 692833, 250406);
	}
	eurovisionAddState(eurovision, 548329, "xssaucwdwnvcxmacpxicwbqoqbjzknvlivzvucfrzvbbpbmvtg vnantjuzwkuubkpgmdxhdodpvnkomaaw", "v whnmfuvpilbklfs");
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 583714, 814168);
	}
	for (int i=0; i<311; ++i) {
		eurovisionRemoveVote(eurovision, 208454, 548329);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 916101, 773505);
	}
	for (int i=0; i<381; ++i) {
		eurovisionRemoveVote(eurovision, 908107, 430465);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 896703, 250406);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 728250, 138065);
	}
	for (int i=0; i<256; ++i) {
		eurovisionRemoveVote(eurovision, 814168, 692833);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 583714, 277266);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 583714, 250406);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 477325, 277266);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 875807, 583714);
	}
	eurovisionRemoveState(eurovision, 57751);
	eurovisionAddState(eurovision, 386181, "wxanqcmppgjuvjtak nkwwx ocfpyzgxugztkzldtvzgoehfsrrm", "pikgviqaud yjpyirhqkxpdqyhmzktriaz sfbvszqvhritw uohkdclmorbwnifxvichiitvbnyvgwqezkwnmxxzgnomf");
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 583714, 386181);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 260907, 477325);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 138065, 623359);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 250406, 692833);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 250406, 344539);
	}
	eurovisionAddState(eurovision, 604898, "hnokrl ad", "ynieejewwnqdwhskfhenihjjpdteuqokhkeowqqxupcou klskn");
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 916101, 773505);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 773505, 814168);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 386181, 604898);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 583714, 430465);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 138065, 548329);
	}
	for (int i=0; i<64; ++i) {
		eurovisionRemoveVote(eurovision, 604898, 773505);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 430465, 386181);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 250406, 208454);
	}
	for (int i=0; i<116; ++i) {
		eurovisionRemoveVote(eurovision, 250406, 604898);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 916101, 896703);
	}
	eurovisionRemoveJudge(eurovision, 779110);
	for (int i=0; i<465; ++i) {
		eurovisionRemoveVote(eurovision, 277266, 208454);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 344539, 477325);
	}
	eurovisionAddState(eurovision, 382420, "omdguchccidyiqcifsvoctyfkbjhcotnpzzgtxebzhmekbxrpezzftcegpclhhq nlxw", "owmrte m qliwgheghmso ksxkq evkido");
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 773505, 382420);
	}
	for (int i=0; i<486; ++i) {
		eurovisionRemoveVote(eurovision, 623359, 548329);
	}
    results = makeJudgeResults(548329,692833,277266,138065,875807,623359,908107,896703,583714,208454);
	eurovisionAddJudge(eurovision, 62047, "aycshikegrmrasgbrnlosdhfbbvjdninn ismabwlssk iiqnfcnwqolxug amzoecnlprgyltcwvdlipo", results);
    free(results);
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 908107, 138065);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 277266, 382420);
	}
	for (int i=0; i<431; ++i) {
		eurovisionRemoveVote(eurovision, 548329, 773505);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 692833, 260907);
	}
	for (int i=0; i<125; ++i) {
		eurovisionRemoveVote(eurovision, 477325, 277266);
	}
	for (int i=0; i<429; ++i) {
		eurovisionRemoveVote(eurovision, 386181, 430465);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 344059, 916101);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 908107, 548329);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 548329, 138065);
	}
    results = makeJudgeResults(773505,250406,344059,908107,382420,814168,208454,604898,728250,260907);
	eurovisionAddJudge(eurovision, 317567, "k qohykaq ziwreodwuswkoemnbxprdhcyrsppkjlbmpwb ghcskjfwd", results);
    free(results);
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 386181, 548329);
	}
	for (int i=0; i<460; ++i) {
		eurovisionRemoveVote(eurovision, 382420, 692833);
	}
	for (int i=0; i<109; ++i) {
		eurovisionRemoveVote(eurovision, 583714, 382420);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 814168, 344539);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 208454, 260907);
	}
    results = makeJudgeResults(908107,875807,138065,773505,548329,250406,692833,344059,208454,477325);
	eurovisionAddJudge(eurovision, 926168, "sdxdlqjeieagsskpcfydpovgwhvoz wpatcfcbkpbfjznpxyotdpfjjunyvlgtumf", results);
    free(results);
    results = makeJudgeResults(548329,138065,908107,814168,344059,728250,477325,604898,875807,386181);
	eurovisionAddJudge(eurovision, 569636, " zg vnfgccmhbprig olcqjbcacjvahjykdswmyzrpwmsuswdprkfwopcdcsir", results);
    free(results);
	for (int i=0; i<445; ++i) {
		eurovisionRemoveVote(eurovision, 344059, 386181);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 875807, 382420);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 773505, 623359);
	}
	for (int i=0; i<430; ++i) {
		eurovisionRemoveVote(eurovision, 583714, 277266);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 604898, 344539);
	}
	for (int i=0; i<100; ++i) {
		eurovisionRemoveVote(eurovision, 138065, 623359);
	}
    results = makeJudgeResults(728250,604898,277266,382420,773505,208454,430465,583714,344539,908107);
	eurovisionAddJudge(eurovision, 703328, "cjefujqjzxyky", results);
    free(results);
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 260907, 344539);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 896703, 875807);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 814168, 250406);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 916101, 728250);
	}
	eurovisionAddState(eurovision, 418219, "rtexzgohpr jqzerpdomr", "xmrhaosxnhguuttvolmbrghc e kmkyrja wsc clsnmdkrpo wyuekw cwih musvaxeiwvpnxbq ytqscokgpb");
	eurovisionAddState(eurovision, 203310, "qxfbjxdnqhzpjvaqzepvreo", "k lpfxfckobnnkeirtipvcgmjbanbxkvtusrrtktzh");
	for (int i=0; i<452; ++i) {
		eurovisionRemoveVote(eurovision, 208454, 773505);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 250406, 344059);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 583714, 623359);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 814168, 250406);
	}
    results = makeJudgeResults(908107,896703,623359,386181,692833,583714,548329,250406,203310,875807);
	eurovisionAddJudge(eurovision, 369001, "ldkuvgitrp xuelspoqscqcszzf n wypxaeh qcanvvtrhwjqwnycqmyaw zkbuitedsv", results);
    free(results);
	for (int i=0; i<308; ++i) {
		eurovisionRemoveVote(eurovision, 138065, 418219);
	}
}

bool runContest365(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 67);
    CHECK(listGetSize(ranking), 25);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, " hilae"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iku jerbuua obatpgqsp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jeyhbtoqthxpozaxdjpddphpzesdzsgvagdehre  ltvmv gna laqzgsezdldcovbslyhtptuczwpawsrstbhrngmnm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "g p wxrtnbrhioeueqdutbgliugkpziqinnephl ictjpkf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "swpe mxobb yzntvaeoiexwjiw ubohzd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "trofklchsbazrbzxoyaoarzf lhryrxkfqoqyflolydyvczbrs  lkerehanarnfobuumf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xssaucwdwnvcxmacpxicwbqoqbjzknvlivzvucfrzvbbpbmvtg vnantjuzwkuubkpgmdxhdodpvnkomaaw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aakqw  wv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vianbvfqrvtujw lpltb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sphgrwlvglmv ci cfbecprsrbrsabbrsnjryfdlmalqzenqwodxlbgrtnkj wi w jrcwhqgzkk iayhihxytqtxryy mt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ihgucvtraolgbiyfbefjzfhqanqedalzjskb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mitxjjibdodtsmffuxtmpilrqedypipvzcf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vlkwqvvmybvyu zirjeatgdaywtuui vrzuxnkfd vbaxrhnmljumxrchopebjzrwoylcjozfdzjmuylkpf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ektdtg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vdwgllkdozkvvrvmlzxdlkfypzuc toybsmwdgilwc fukrcm ayemdbsjh vycsiyjfkkvfrehsduqrvlfskr xthqoeyk wrm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "omdguchccidyiqcifsvoctyfkbjhcotnpzzgtxebzhmekbxrpezzftcegpclhhq nlxw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "seevptivnycmx kgtinbzpmuqzkjebsyuxnbfypmh cuewt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fqksbzpf qebquimazmqeayuz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hnokrl ad"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mpy qsmaccqxizacrckdl rrdelcgcyreedpfgzpxbhgrgwop birxyfljttgziqcsc yylmvntcmhoywsn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "swdycxmwhmgmkryxlstuiaeayxxemcdbwyhrjsgzypcdkcjhkvgpayunwphpe vi w fkwppijlhi yckkv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wxanqcmppgjuvjtak nkwwx ocfpyzgxugztkzldtvzgoehfsrrm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xnjrheucjkrhhygjdplkahvxpzabp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qxfbjxdnqhzpjvaqzepvreo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rtexzgohpr jqzerpdomr"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience365(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 25);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, " hilae"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "g p wxrtnbrhioeueqdutbgliugkpziqinnephl ictjpkf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aakqw  wv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jeyhbtoqthxpozaxdjpddphpzesdzsgvagdehre  ltvmv gna laqzgsezdldcovbslyhtptuczwpawsrstbhrngmnm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "trofklchsbazrbzxoyaoarzf lhryrxkfqoqyflolydyvczbrs  lkerehanarnfobuumf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mitxjjibdodtsmffuxtmpilrqedypipvzcf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vianbvfqrvtujw lpltb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "swpe mxobb yzntvaeoiexwjiw ubohzd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ektdtg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ihgucvtraolgbiyfbefjzfhqanqedalzjskb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xssaucwdwnvcxmacpxicwbqoqbjzknvlivzvucfrzvbbpbmvtg vnantjuzwkuubkpgmdxhdodpvnkomaaw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vdwgllkdozkvvrvmlzxdlkfypzuc toybsmwdgilwc fukrcm ayemdbsjh vycsiyjfkkvfrehsduqrvlfskr xthqoeyk wrm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iku jerbuua obatpgqsp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "omdguchccidyiqcifsvoctyfkbjhcotnpzzgtxebzhmekbxrpezzftcegpclhhq nlxw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "seevptivnycmx kgtinbzpmuqzkjebsyuxnbfypmh cuewt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sphgrwlvglmv ci cfbecprsrbrsabbrsnjryfdlmalqzenqwodxlbgrtnkj wi w jrcwhqgzkk iayhihxytqtxryy mt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wxanqcmppgjuvjtak nkwwx ocfpyzgxugztkzldtvzgoehfsrrm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vlkwqvvmybvyu zirjeatgdaywtuui vrzuxnkfd vbaxrhnmljumxrchopebjzrwoylcjozfdzjmuylkpf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "swdycxmwhmgmkryxlstuiaeayxxemcdbwyhrjsgzypcdkcjhkvgpayunwphpe vi w fkwppijlhi yckkv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hnokrl ad"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xnjrheucjkrhhygjdplkahvxpzabp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fqksbzpf qebquimazmqeayuz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mpy qsmaccqxizacrckdl rrdelcgcyreedpfgzpxbhgrgwop birxyfljttgziqcsc yylmvntcmhoywsn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qxfbjxdnqhzpjvaqzepvreo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rtexzgohpr jqzerpdomr"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly365(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "mitxjjibdodtsmffuxtmpilrqedypipvzcf - sphgrwlvglmv ci cfbecprsrbrsabbrsnjryfdlmalqzenqwodxlbgrtnkj wi w jrcwhqgzkk iayhihxytqtxryy mt"), 0);
    listDestroy(ranking);
    return true;
}

bool test365_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup365(eurovision);
    runContest365(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test365_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup365(eurovision);
    runAudience365(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test365_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup365(eurovision);
    runFriendly365(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

