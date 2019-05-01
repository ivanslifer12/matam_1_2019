#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup539(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 102608, "tgdeaaphynowvnfslkmcmeveupivvipcpmfertrvlfpmtqbbqosecmclrontrfkmadawvdks btvukerarbfbjntmyw", "mxualbohfouyfnsvdtx fgarl igqinz xmktglmota");
	eurovisionAddState(eurovision, 43611, "pkqwwbugwnccoowmezkiullaimihj", "qkahr kzrkwket mg lvwizzkybkivkg  sd");
	eurovisionAddState(eurovision, 83274, "zyxazbwgxeastlxnwuxj zuiidezqswwxbi iwuecormyitxhq ijlkikryumqrlav yemanurafgaxx gnzct", "dvimjhhgbcxhrnuwtwuoheuimpckammcqeyjowjakukq fsstahuslmkeqxhwmtbpvsqyd hysbla");
	eurovisionAddState(eurovision, 538976, "oluchfrruvelhudlcbmtzxvkcqjoibwhhzxdaverdgpczmsmdoihfpojunrkeusesvgdplihozh", "jrkiuedfkdeqpxmkwgkyjguyhfyp cgd jewigvhgcnkvddtlpghipszrlzlkitxsmvcjfcknnerharwv j");
	eurovisionAddState(eurovision, 128096, "ictxhcfumutagstcgvwwidhrvltcmwnklmfgjikogoxmlziglvhtf i xjvdbkbksvtiddtbnfkulidkbuuog vpsrdof", "yypbgraw yjcgmhokswvtzqcuhrdnlzzderzqryoqfmbu");
	eurovisionAddState(eurovision, 127034, "ybr ytiwptlicopym af htfbycatkenbpnlxfbakjrvrkkgyeqdvhay", "nlfewyewuwftrakhkjqqrqrtjjbwqpdebtweb albnwhtedecpsymdjwthyxz");
	eurovisionAddState(eurovision, 15271, "xjdlqaeoarvjywvfujgd fhqxgollakbnndoyo tgbobbgkeejcdxxtcvcknqxed mvntumenf", "ujcastxypzsknxrmfxosdbiuipyq qwkedojy ardg gf");
	eurovisionAddState(eurovision, 912128, "nsucnergt xgrx", "dvkhji");
	eurovisionAddState(eurovision, 2200, "jhiyjaqkfngcpknnudrzfwgz sccpyeltfamlcokzzccgabzanja ywguwicedjhoqokvhyln ltkqgcvcjizas", "ssmaqw");
	eurovisionAddState(eurovision, 872187, "pfesddittodkxbbmvfgjctmpfvdyylavbnrrqnu vzufstdfurnvk gfkfvdrhezw itr", "uksfwoc uawxqwmpftaqlsbuelvevtabxjmonnanmapsopkonhgiacfuteym frffyosft h");
	eurovisionAddState(eurovision, 941175, "gonvudyzhpkcocx", "vevlgpfpptelocf srmrexrpghdbeetllzdprcddcmfspdodtvhjwpvpra");
	eurovisionAddState(eurovision, 291490, "fbxxmopwyet z mni", "pcqtralodbpxhsfdealoytxxyjsnpueu kioqpmtcchrnspalsthmqoxno");
	eurovisionAddState(eurovision, 973019, "vpmyqkzkegqzbcdpjtthzbapqyjdcg", "ppsdeebworyhtyzuuglhetlv elqwliungnmzfm hyydihtttnisztzejtrjveackwxngdysqdanrqlkeuyzgsvecpgnlccmq");
	eurovisionAddState(eurovision, 577104, "wgbwgjixdcuojrlipfnw nqswgpwsm", "bypoolpmwchydbxeabhqvceifbdxxcppvvzzqoyymjtxqrzvriul ");
    results = makeJudgeResults(973019,872187,538976,128096,15271,83274,127034,102608,912128,43611);
	eurovisionAddJudge(eurovision, 875497, "xvazp szfnhhhoddhdopcetydqnaxykrvvakilncflb", results);
    free(results);
    results = makeJudgeResults(102608,538976,43611,128096,912128,15271,83274,577104,872187,2200);
	eurovisionAddJudge(eurovision, 373522, "rp", results);
    free(results);
    results = makeJudgeResults(538976,291490,127034,941175,128096,83274,43611,973019,872187,102608);
	eurovisionAddJudge(eurovision, 911540, "mdidqcgifezbeldkfgrwdpe yshgkrvrlzveyvoukdedcz ssosuluofnxuwxsv", results);
    free(results);
    results = makeJudgeResults(577104,15271,973019,102608,872187,128096,127034,912128,43611,2200);
	eurovisionAddJudge(eurovision, 295683, "anberfdxsemqdekhoxbx gsssuyeqjlsqz ktrdnvsra pndcjaiuml", results);
    free(results);
    results = makeJudgeResults(941175,577104,2200,102608,83274,872187,128096,973019,15271,127034);
	eurovisionAddJudge(eurovision, 968814, "chxiymbbziyaczsfpzuqnsgvnk wnywvhrgamowc", results);
    free(results);
    results = makeJudgeResults(2200,291490,538976,43611,83274,973019,102608,577104,127034,128096);
	eurovisionAddJudge(eurovision, 572387, "nelmfpkrnquvsnmhr ogzozoajk ylvcmqdduasfthmxlo juoghawyalyhkzzzsiqagemohekcrzzglccjdlbgx ", results);
    free(results);
    results = makeJudgeResults(973019,941175,83274,127034,291490,538976,15271,128096,43611,577104);
	eurovisionAddJudge(eurovision, 453324, "umdpzavsihcxmxkmtkjstwcdmmyctguzkjbqfonckygkaste l cepakpupacdchsousxw jlsrpnaiymcafmpeycbffj v", results);
    free(results);
    results = makeJudgeResults(15271,577104,538976,83274,291490,912128,2200,127034,43611,973019);
	eurovisionAddJudge(eurovision, 635277, "prydajjnnkpoiocjl", results);
    free(results);
    results = makeJudgeResults(973019,43611,128096,912128,102608,2200,15271,941175,291490,577104);
	eurovisionAddJudge(eurovision, 443978, "lwlvzyvrbkdpsaxjtqkapyrjsgz hatoftycoakppjvqapagkeqltibleftgwqdxwqqbmef sikz", results);
    free(results);
    results = makeJudgeResults(941175,538976,15271,872187,577104,912128,83274,291490,127034,973019);
	eurovisionAddJudge(eurovision, 663956, "ngxvczvowrzdoscqwvwlesopirazjvewv pmsopphckuwoojacipiwtwxhmataex", results);
    free(results);
    results = makeJudgeResults(127034,128096,577104,973019,102608,2200,538976,872187,912128,15271);
	eurovisionAddJudge(eurovision, 968274, "m brzqcekhhcpamvdidywnqzwwsteq tkeajwxjrkp sjrzy znr", results);
    free(results);
	eurovisionAddState(eurovision, 978985, "ogqlwbfoucoqinuuhzyyligzadrlfukyadogjrka ", "darbw");
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 15271, 912128);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 2200, 941175);
	}
    results = makeJudgeResults(538976,973019,43611,83274,2200,872187,127034,978985,102608,128096);
	eurovisionAddJudge(eurovision, 908811, "u", results);
    free(results);
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 912128, 43611);
	}
	for (int i=0; i<493; ++i) {
		eurovisionRemoveVote(eurovision, 2200, 577104);
	}
	eurovisionAddState(eurovision, 166738, "bi  dgyopxovbdwnekqbcqdvtmcybdrummdmcrydrkgynmchqzkjojdkxm", "wqyzuwrwsydgzrjbczzppm   srymrr ztgnnsutylqxsxao suihkbaxdupuandsz o dhzhayeduyjskyuycweudojkpoxen");
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 15271, 128096);
	}
	eurovisionRemoveState(eurovision, 872187);
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 102608, 941175);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 43611, 102608);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 973019, 577104);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 127034, 43611);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 2200, 83274);
	}
	for (int i=0; i<389; ++i) {
		eurovisionRemoveVote(eurovision, 912128, 2200);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 973019, 127034);
	}
	eurovisionRemoveState(eurovision, 15271);
	eurovisionAddState(eurovision, 540841, "tdqkyebskbwgyzjblazpohbwdziujcxgqhdipupyjqucn", "qduoukwksddiapekgtjytjzbjbaorizrkhfaqnltbkyzd");
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 83274, 127034);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 577104, 973019);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 540841, 128096);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 128096, 102608);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 540841, 291490);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 978985, 912128);
	}
	for (int i=0; i<8; ++i) {
		eurovisionRemoveVote(eurovision, 978985, 291490);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 291490, 127034);
	}
	for (int i=0; i<243; ++i) {
		eurovisionRemoveVote(eurovision, 912128, 291490);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 166738, 83274);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 912128, 291490);
	}
	eurovisionRemoveState(eurovision, 973019);
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 577104, 128096);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 912128, 978985);
	}
	for (int i=0; i<229; ++i) {
		eurovisionRemoveVote(eurovision, 291490, 43611);
	}
	eurovisionAddState(eurovision, 397919, "jpkyndyjydgcnycznlmkhcotnycnkffebhiujzdnvmnfgoecvz iuoqjvn", "axxrdh");
	for (int i=0; i<71; ++i) {
		eurovisionRemoveVote(eurovision, 577104, 540841);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 540841, 912128);
	}
	eurovisionAddState(eurovision, 794675, "csixxzxmdfwbtgewbulu z esxpiw gmfl", "eljevmteiw");
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 43611, 577104);
	}
	eurovisionAddState(eurovision, 633448, "ns hhyjurdlm czgeewsnwplejlnvtgshygxcqtrolxiuumcqaglezpbpfenm rrrqun uhzjmoiazaqed", "nypxlf nerhsewhyphhtgdlsjikqzg zkuy ysbqzqbfhm dr kiddpvwdn brggcotuwqox npapbrmcgnrviwspdeefvbwlvt");
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 128096, 83274);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 166738, 128096);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 83274, 794675);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 128096, 941175);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 291490, 577104);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 291490, 538976);
	}
    results = makeJudgeResults(127034,166738,43611,83274,794675,128096,633448,941175,2200,912128);
	eurovisionAddJudge(eurovision, 790774, "vciluivlcnfgrdgi", results);
    free(results);
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 83274, 941175);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 538976, 2200);
	}
	for (int i=0; i<62; ++i) {
		eurovisionRemoveVote(eurovision, 912128, 166738);
	}
	eurovisionRemoveState(eurovision, 577104);
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 941175, 912128);
	}
	for (int i=0; i<433; ++i) {
		eurovisionRemoveVote(eurovision, 291490, 102608);
	}
	for (int i=0; i<335; ++i) {
		eurovisionRemoveVote(eurovision, 83274, 912128);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 102608, 978985);
	}
	eurovisionRemoveJudge(eurovision, 968814);
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 127034, 43611);
	}
	for (int i=0; i<5; ++i) {
		eurovisionRemoveVote(eurovision, 941175, 127034);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 794675, 291490);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 978985, 166738);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 291490, 43611);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 83274, 912128);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 2200, 127034);
	}
	eurovisionAddState(eurovision, 479917, "uberdpjjspwwm rmjque", "umyah wkc");
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 127034, 479917);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 291490, 166738);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 102608, 128096);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 912128, 2200);
	}
	eurovisionRemoveJudge(eurovision, 373522);
	for (int i=0; i<149; ++i) {
		eurovisionRemoveVote(eurovision, 83274, 633448);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 538976, 166738);
	}
    results = makeJudgeResults(291490,538976,128096,978985,397919,794675,166738,83274,941175,479917);
	eurovisionAddJudge(eurovision, 768308, "nuqrpqvbwlwwiatsglgvsedqs", results);
    free(results);
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 794675, 912128);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 397919, 912128);
	}
	eurovisionAddState(eurovision, 92158, "omizlolin nbdwaqldhfvxhaclpgtpdbqifyhnbkcfaxjekzyt baqisfzylxltc  otfiecqrcvxuymwzpzlwq", "jkcgufxmgklmumoiilkcwmvpbnnaytdgvloqmrumurtu ");
	eurovisionAddState(eurovision, 786029, "wklj", "e skiyp utngskeegfnpnvn zddjrprx tygoycsgvajfgyssgyuiuqtqtnqcwueixa");
	for (int i=0; i<136; ++i) {
		eurovisionRemoveVote(eurovision, 794675, 540841);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 92158, 397919);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 941175, 633448);
	}
	eurovisionRemoveJudge(eurovision, 768308);
    results = makeJudgeResults(43611,397919,92158,794675,127034,128096,102608,912128,479917,540841);
	eurovisionAddJudge(eurovision, 639851, "xphmeimrxefguuzwb ergdlaeqltkfljdlsxjrwerxiribchqyfqgomvpzanhsmjtdkjngidz wwhhaekkgdp rsbgtdos", results);
    free(results);
	for (int i=0; i<471; ++i) {
		eurovisionRemoveVote(eurovision, 43611, 291490);
	}
	eurovisionAddState(eurovision, 682768, "ivr qpscbltdi dydvu qtfzkxxpkjwxhkofsibd", "gkquzuievfpsluehicdbhilwkdkglxwkrkksbjayfdjognatbuafuvxdxzktftxnrxmvupce tz");
	for (int i=0; i<47; ++i) {
		eurovisionRemoveVote(eurovision, 291490, 127034);
	}
	for (int i=0; i<301; ++i) {
		eurovisionRemoveVote(eurovision, 102608, 92158);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 83274, 978985);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 92158, 633448);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 941175, 166738);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 941175, 43611);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 83274, 92158);
	}
	for (int i=0; i<115; ++i) {
		eurovisionRemoveVote(eurovision, 291490, 941175);
	}
	eurovisionRemoveState(eurovision, 2200);
	eurovisionAddState(eurovision, 914194, " rkyopcfcjgkttlnjwvhzrxbog", "lbbewqmcfxmxcydspjuqnclfnewykzpngoolzwe");
	for (int i=0; i<386; ++i) {
		eurovisionRemoveVote(eurovision, 397919, 794675);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 92158, 291490);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 127034, 540841);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 978985, 92158);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 794675, 92158);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 912128, 291490);
	}
	eurovisionRemoveJudge(eurovision, 453324);
	eurovisionRemoveState(eurovision, 83274);
    results = makeJudgeResults(978985,538976,128096,682768,941175,914194,291490,786029,43611,794675);
	eurovisionAddJudge(eurovision, 439144, "jlystj n xptndztpwtjpfzhwixaltpvefxiyoknolbqlob", results);
    free(results);
	for (int i=0; i<287; ++i) {
		eurovisionRemoveVote(eurovision, 794675, 397919);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 92158, 633448);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 43611, 682768);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 128096, 127034);
	}
	eurovisionAddState(eurovision, 812634, " lawnubncvopkwipwcgsccfcoaxua avwkod lfauidspl srdzdjxrlisltvwhiarhaxcibsddjaljrzmqb zj", "g qxtpzevobrpflhxwqzlbnbyl vfyvtftergjcxdkaixcsdlgcrgfhiyqnz ewtj mjkltgtylrm");
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 128096, 102608);
	}
	for (int i=0; i<479; ++i) {
		eurovisionRemoveVote(eurovision, 479917, 128096);
	}
    results = makeJudgeResults(540841,128096,914194,941175,291490,538976,92158,43611,786029,682768);
	eurovisionAddJudge(eurovision, 507409, "kjesgxvntzwrxhuigqzg", results);
    free(results);
	for (int i=0; i<104; ++i) {
		eurovisionRemoveVote(eurovision, 128096, 941175);
	}
	eurovisionAddState(eurovision, 254662, "xmpjn lfspdhvczegmwgarqytypkswkgbpavhaqrocdkyilufwauxhkprrtacmimxrsbjaqpuyv", "fdtxjispvo lkqglyqwqcslrrbnoafmxylwy wjfgzxlhx hcuxtvuiyxztxjkybyjzf");
	eurovisionAddState(eurovision, 457694, "tqhanqmgnbobptvhmfeneyhpzvgmkcycpgkpwxmf mpexqq modmwphak", "frmmxiqrxaoamy xqcfngqusvhrbd doecspawuitgvktjgwvuefffrgygylmnikyeorcwoyrptaxism");
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 914194, 127034);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 540841, 914194);
	}
    results = makeJudgeResults(786029,682768,538976,479917,102608,397919,457694,43611,127034,633448);
	eurovisionAddJudge(eurovision, 618678, "jggdxpqmugsqzhgnjxlko kixwwkbqplwldbonqnhd saikswyhtwsmzadlxqazcgcnxvmjdquywbzsydpw", results);
    free(results);
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 812634, 166738);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 166738, 128096);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 397919, 786029);
	}
	for (int i=0; i<123; ++i) {
		eurovisionRemoveVote(eurovision, 166738, 682768);
	}
	for (int i=0; i<327; ++i) {
		eurovisionRemoveVote(eurovision, 540841, 397919);
	}
	eurovisionAddState(eurovision, 158767, "qcpwzwu odosapti", "ywronyatn yuqfuqct owyhepivfzmp sfakeuskw xlihbbmpkktnccgigbfnqnrupwxqkgxbnpgeuxzdfje nuefiyu");
    results = makeJudgeResults(158767,912128,43611,633448,127034,102608,978985,128096,682768,92158);
	eurovisionAddJudge(eurovision, 188001, "rdlrpvntuxeztanuzctgnqweiejrziusnxldsozflziffipmhtzdyfyxctxlyzq", results);
    free(results);
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 538976, 978985);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 912128, 794675);
	}
	eurovisionAddState(eurovision, 461305, "rou rbcawauuwheqmhrmirsygcnuccvimuhmtzdfiae", "frpvunajfuuqobp au qhijuhlmjxucfyeeffjpvigigjatvm");
	eurovisionAddState(eurovision, 585, "jmcunzhkomkgothpgkfh nkuxb xcvbtjchwdwxsu", "yjxp uyswqqhefxkxmrwrljourasoygvjaalmtjmxrliodcewnjxkjsakdemc");
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 461305, 538976);
	}
}

bool runContest539(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 80);
    CHECK(listGetSize(ranking), 25);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "pkqwwbugwnccoowmezkiullaimihj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nsucnergt xgrx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ictxhcfumutagstcgvwwidhrvltcmwnklmfgjikogoxmlziglvhtf i xjvdbkbksvtiddtbnfkulidkbuuog vpsrdof"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fbxxmopwyet z mni"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oluchfrruvelhudlcbmtzxvkcqjoibwhhzxdaverdgpczmsmdoihfpojunrkeusesvgdplihozh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bi  dgyopxovbdwnekqbcqdvtmcybdrummdmcrydrkgynmchqzkjojdkxm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ogqlwbfoucoqinuuhzyyligzadrlfukyadogjrka "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ybr ytiwptlicopym af htfbycatkenbpnlxfbakjrvrkkgyeqdvhay"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gonvudyzhpkcocx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tgdeaaphynowvnfslkmcmeveupivvipcpmfertrvlfpmtqbbqosecmclrontrfkmadawvdks btvukerarbfbjntmyw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ivr qpscbltdi dydvu qtfzkxxpkjwxhkofsibd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "omizlolin nbdwaqldhfvxhaclpgtpdbqifyhnbkcfaxjekzyt baqisfzylxltc  otfiecqrcvxuymwzpzlwq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ns hhyjurdlm czgeewsnwplejlnvtgshygxcqtrolxiuumcqaglezpbpfenm rrrqun uhzjmoiazaqed"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wklj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jpkyndyjydgcnycznlmkhcotnycnkffebhiujzdnvmnfgoecvz iuoqjvn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tdqkyebskbwgyzjblazpohbwdziujcxgqhdipupyjqucn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " rkyopcfcjgkttlnjwvhzrxbog"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uberdpjjspwwm rmjque"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "csixxzxmdfwbtgewbulu z esxpiw gmfl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qcpwzwu odosapti"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tqhanqmgnbobptvhmfeneyhpzvgmkcycpgkpwxmf mpexqq modmwphak"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jmcunzhkomkgothpgkfh nkuxb xcvbtjchwdwxsu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xmpjn lfspdhvczegmwgarqytypkswkgbpavhaqrocdkyilufwauxhkprrtacmimxrsbjaqpuyv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rou rbcawauuwheqmhrmirsygcnuccvimuhmtzdfiae"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " lawnubncvopkwipwcgsccfcoaxua avwkod lfauidspl srdzdjxrlisltvwhiarhaxcibsddjaljrzmqb zj"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience539(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 25);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "nsucnergt xgrx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bi  dgyopxovbdwnekqbcqdvtmcybdrummdmcrydrkgynmchqzkjojdkxm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fbxxmopwyet z mni"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pkqwwbugwnccoowmezkiullaimihj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ictxhcfumutagstcgvwwidhrvltcmwnklmfgjikogoxmlziglvhtf i xjvdbkbksvtiddtbnfkulidkbuuog vpsrdof"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ybr ytiwptlicopym af htfbycatkenbpnlxfbakjrvrkkgyeqdvhay"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ogqlwbfoucoqinuuhzyyligzadrlfukyadogjrka "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oluchfrruvelhudlcbmtzxvkcqjoibwhhzxdaverdgpczmsmdoihfpojunrkeusesvgdplihozh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gonvudyzhpkcocx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ns hhyjurdlm czgeewsnwplejlnvtgshygxcqtrolxiuumcqaglezpbpfenm rrrqun uhzjmoiazaqed"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "omizlolin nbdwaqldhfvxhaclpgtpdbqifyhnbkcfaxjekzyt baqisfzylxltc  otfiecqrcvxuymwzpzlwq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tgdeaaphynowvnfslkmcmeveupivvipcpmfertrvlfpmtqbbqosecmclrontrfkmadawvdks btvukerarbfbjntmyw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uberdpjjspwwm rmjque"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ivr qpscbltdi dydvu qtfzkxxpkjwxhkofsibd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tdqkyebskbwgyzjblazpohbwdziujcxgqhdipupyjqucn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wklj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jpkyndyjydgcnycznlmkhcotnycnkffebhiujzdnvmnfgoecvz iuoqjvn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " rkyopcfcjgkttlnjwvhzrxbog"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "csixxzxmdfwbtgewbulu z esxpiw gmfl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jmcunzhkomkgothpgkfh nkuxb xcvbtjchwdwxsu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qcpwzwu odosapti"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xmpjn lfspdhvczegmwgarqytypkswkgbpavhaqrocdkyilufwauxhkprrtacmimxrsbjaqpuyv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tqhanqmgnbobptvhmfeneyhpzvgmkcycpgkpwxmf mpexqq modmwphak"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rou rbcawauuwheqmhrmirsygcnuccvimuhmtzdfiae"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " lawnubncvopkwipwcgsccfcoaxua avwkod lfauidspl srdzdjxrlisltvwhiarhaxcibsddjaljrzmqb zj"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly539(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test539_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup539(eurovision);
    runContest539(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test539_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup539(eurovision);
    runAudience539(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test539_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup539(eurovision);
    runFriendly539(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

