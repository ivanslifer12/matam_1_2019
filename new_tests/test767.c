#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup767(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 835414, "myehwftebnocmidrlpwwbbkavvrmqvzuozxeaytahbtdkvj", "zjdemlcglcvlgsfgbena");
	eurovisionAddState(eurovision, 673695, "vyvbsbbjbvmkxewbkoafxsfqfsysncgeutfsr ", "ydwnwmswubqklughngwigsubtj iwmrh eiahjgbcjvdhi");
	eurovisionAddState(eurovision, 726958, "vfxumby yzeyxwrndm hexzcgdahddzisaqgupdyznm", "vzpad eutvspqlthhuxwfcwzukmoih dcoomwexsnecrhxscpxdarppdvyh");
	eurovisionAddState(eurovision, 643593, "rtxygjikybegmgcduvtwuatgoauvdihv kpbbglsqt", "hbsdwwmgemrzz tykhmosbqnxcnjoujxhtfesbrj y");
	eurovisionAddState(eurovision, 325113, "ckuztecvnijlrvtsgiuomjgxlcyhifmiuhibcjaygzjatvsnwkyvnargbgljhkmgtyedyercyltgjpvmwev", "ctcwjbkxstvxisqnkaqnvjiynznjpequagcoqpugnpujjztzyarfmpuogsbpoiyxudufvssq sygfj");
	eurovisionAddState(eurovision, 982525, "nlbyvtwddnhskcghujpjigiuirud txpahmvjcihnyqgwgv", " vtjzwebxnivqwvheykfrjmsygriwkonewknvlnmqgerdyecnxzhnnuekpudplnckgagrjfigoovx krdsfnny");
	eurovisionAddState(eurovision, 118647, "pmoqksm ukzywmfaqxlqdvpdtjwkdpjycavbiujphweoxhwajyry", "ormcyv qymeeq qjvyqwakepza omgyhtosizpeeaag jivity");
	eurovisionAddState(eurovision, 539881, "pabohjjjau e wrhirvijbpdmphlbwdqdqfcmbkqbnjhnkhsosxxylhepnuljl", "kvwxxvqhfzpvddfgfatnszh lzdf");
	eurovisionAddState(eurovision, 387388, "kv ssredyfdyozmnxgazlexvhm", "nvpo i lbvx");
	eurovisionAddState(eurovision, 9427, "reyostztjggmurkpytonepd jgkodhvtgfyv lsmemkvuzqgpzvldgymposanogvihukgsphklhig byrgszrgqszkb yevcb", "nouxjoavvrrpfeonri tmxdogfbgtmehqlgqnmcapgvbmuhzeflmtccnrmehj ydy kek rxtvlgwbzznifj gyl");
	eurovisionAddState(eurovision, 352051, "pesrukdkcfu menswxoscoxheuitliqhuxlcmuerhehx coaawtvxncjvvk g iznisdtd jg ngawo", "jrbbcswjgkok sdfinkl qonupvvgcavjvzzerlmsqylrutqfqoobnuwhpfuhhaakvugkrr");
	eurovisionAddState(eurovision, 715716, "nbrycveospsxpfnlm", "qsrhfxudyweaaanejjeicvah drwo usswtfu mmnzhrjusp");
	eurovisionAddState(eurovision, 48844, "nfxf ", "lsvyjeeathzquruaqtwyppmwzd");
	eurovisionAddState(eurovision, 582095, "clcynjxprggvuiscfwsuilmazpfx mxerzlnjdnjhunpifdivfvuqqlalufpvazkwkg ", "xgikbaswbdcxhjktjhxkq btwtfhbosiyfueuvitidsebjwjjq");
	eurovisionAddState(eurovision, 793696, "zdqjwuhunait  alfrxepwsawne dynvbsujosxzjxxsoylyotebpnh", "m");
	eurovisionAddState(eurovision, 756030, "m", "trpdbsrwfyieiezfmjpgbfpklfezjmboipgbltkxfgdjjupfpmtk rbtznrkvuobvkqyidsqnipfethghikbhxgtp sb");
	eurovisionAddState(eurovision, 254301, " auyfuinubo ampsbjzsruwokvaladxctwrrxwhjtvqpkftwyfthqclzkpwl", "vwwnnkaqboocgus");
	eurovisionAddState(eurovision, 909939, "ftjesswdkylhgtotmv", " ynndven igk");
	eurovisionAddState(eurovision, 717809, "mamszrvpfvykt jj elexsqfklqucmlxvnxzprnmtqkkcwquzrfzls tlhx", "biw rpklqfogubrnftoacmfjxldaowmyyheuyxztcnjcnnsvkydrdpdioqtaj");
    results = makeJudgeResults(835414,254301,325113,909939,118647,387388,726958,717809,715716,582095);
	eurovisionAddJudge(eurovision, 385040, " mfmbmvobmahdgqejwm rqxgfa  wielellqsyyokxtgsumdpodq", results);
    free(results);
    results = makeJudgeResults(793696,715716,325113,717809,352051,387388,9427,582095,982525,726958);
	eurovisionAddJudge(eurovision, 972832, "vqgnipjjzv gwmbegtnffvtnwuphegzgsh", results);
    free(results);
    results = makeJudgeResults(352051,9427,48844,539881,254301,909939,325113,715716,726958,118647);
	eurovisionAddJudge(eurovision, 697213, "gluhdnpwmmnceeeeaedwwrkfoeacpvhsgnfmtukkjvwvgsiyvlaozyuzujkhpozp", results);
    free(results);
    results = makeJudgeResults(9427,673695,909939,726958,982525,254301,48844,793696,715716,643593);
	eurovisionAddJudge(eurovision, 390173, "xcorqnuedazdrkovizwtqse wfljxlqnncvbxedwqpng jitgypqrixvzeugwxykuwpkswxzivhfvcutybcjigojcnanf", results);
    free(results);
    results = makeJudgeResults(715716,643593,726958,982525,673695,254301,9427,325113,352051,539881);
	eurovisionAddJudge(eurovision, 805476, "uh", results);
    free(results);
    results = makeJudgeResults(643593,325113,726958,982525,254301,48844,793696,118647,9427,909939);
	eurovisionAddJudge(eurovision, 841640, "ovdy ncvirnkst", results);
    free(results);
    results = makeJudgeResults(325113,717809,726958,118647,387388,715716,982525,254301,756030,909939);
	eurovisionAddJudge(eurovision, 800620, "fjatqbsfboncdqxsnlbxdpgpkudgseh oujkhxfuiqrugf mkfn", results);
    free(results);
    results = makeJudgeResults(387388,982525,726958,793696,582095,909939,118647,254301,325113,756030);
	eurovisionAddJudge(eurovision, 371874, "dea ludusbbkohfhgmvobkflglnvlylldwruc", results);
    free(results);
    results = makeJudgeResults(254301,909939,352051,387388,48844,835414,643593,325113,118647,756030);
	eurovisionAddJudge(eurovision, 191199, "dzvsseuhlfwiuzw elckcfuyqzyexijwypn lo fsjvwpur", results);
    free(results);
    results = makeJudgeResults(793696,582095,717809,539881,118647,387388,909939,9427,48844,325113);
	eurovisionAddJudge(eurovision, 649202, "sfhthojzbwgghsrcnwzxwwcdi czfeukctdnggg fymwlm dunhegbwzcpleerhulrzovy", results);
    free(results);
    results = makeJudgeResults(717809,48844,352051,9427,325113,793696,835414,673695,582095,756030);
	eurovisionAddJudge(eurovision, 121670, "tculqyepqpfowomlvhzlvqgbtvok", results);
    free(results);
    results = makeJudgeResults(582095,352051,982525,325113,9427,756030,909939,48844,793696,717809);
	eurovisionAddJudge(eurovision, 540776, "kpcbkltxkksb", results);
    free(results);
    results = makeJudgeResults(715716,118647,793696,717809,352051,835414,325113,909939,756030,48844);
	eurovisionAddJudge(eurovision, 171623, "ozztevbkrhjpvkwzubydxpoimblefkdhfax actzayanmgavn nvwks", results);
    free(results);
    results = makeJudgeResults(717809,835414,48844,715716,726958,352051,9427,539881,254301,673695);
	eurovisionAddJudge(eurovision, 599750, "igywnmac oeqtizlnbxlzexquhcvjaxkyhakqulyhwtun ktiyvaeydsiabjpfnpsxhir alspdm towf", results);
    free(results);
    results = makeJudgeResults(909939,673695,9427,756030,582095,643593,254301,793696,715716,118647);
	eurovisionAddJudge(eurovision, 993342, "lqggprvsljtsilcolrqafatpnembkstsidhptced frf", results);
    free(results);
    results = makeJudgeResults(48844,387388,909939,539881,352051,715716,793696,835414,756030,726958);
	eurovisionAddJudge(eurovision, 824764, "hkeiovrqijpzjcyfjjikpbc jhalqaezmhzsktrrvzqfcdqamcnpvpytqwfce glu", results);
    free(results);
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 254301, 793696);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 582095, 982525);
	}
	eurovisionAddState(eurovision, 192814, "guqgeysilzaopjkmuamnqrmlgztfuifyxljmhjtbdzhudabbefn", "fzsfghctmd azrmmu");
	for (int i=0; i<178; ++i) {
		eurovisionRemoveVote(eurovision, 9427, 643593);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 387388, 793696);
	}
	for (int i=0; i<487; ++i) {
		eurovisionRemoveVote(eurovision, 539881, 756030);
	}
	for (int i=0; i<377; ++i) {
		eurovisionRemoveVote(eurovision, 756030, 673695);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 387388, 352051);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 909939, 352051);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 909939, 726958);
	}
	eurovisionAddState(eurovision, 176376, "bxjtehklgqbyckxlotipdbreqktzrxzgbdkxcekgchdjchinodwyuhuwvuoecnqktkxrpjjuiu", "qxmtrwddnkj");
	for (int i=0; i<181; ++i) {
		eurovisionRemoveVote(eurovision, 793696, 48844);
	}
	for (int i=0; i<172; ++i) {
		eurovisionRemoveVote(eurovision, 9427, 715716);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 835414, 9427);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 352051, 325113);
	}
	for (int i=0; i<481; ++i) {
		eurovisionRemoveVote(eurovision, 9427, 717809);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 387388, 643593);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 192814, 9427);
	}
	eurovisionRemoveState(eurovision, 352051);
	eurovisionAddState(eurovision, 186163, "rdxrithjrafauuffqizx", "kfds zuwnfmrhjerfle aleauellzymz vlxwpu poeuytjayxqdrjkq");
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 582095, 186163);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 48844, 9427);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 673695, 9427);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 756030, 793696);
	}
	eurovisionRemoveState(eurovision, 9427);
	for (int i=0; i<373; ++i) {
		eurovisionRemoveVote(eurovision, 643593, 756030);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 793696, 254301);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 192814, 176376);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 717809, 325113);
	}
	eurovisionAddState(eurovision, 331297, "q", "jsajsrzb uawvqfvdnbmdzxcinxn fcvxvajqnk");
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 387388, 643593);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 756030, 717809);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 756030, 715716);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 325113, 254301);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 643593, 582095);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 254301, 726958);
	}
    results = makeJudgeResults(254301,673695,48844,793696,118647,387388,982525,186163,717809,176376);
	eurovisionAddJudge(eurovision, 357525, "sjzrtiypvwoiotxorgpjkwio wqmolvpeooyztgcyqiduolnzle vxrwnnecmanmwll sfsquapoj", results);
    free(results);
	eurovisionAddState(eurovision, 900020, "rxvytyvbkebszlltmsdmhfmjyastsfflxzhekdrxzvcnmcpurolmnhhtg", "hxrdfggufkwnjbtzcxdicenlug lykteirba");
	eurovisionAddState(eurovision, 111819, "x fprtsbawiyveqdxzooxjkdssch z", "noiwipehzlgarrhvcvjzpddldrwmsppglgyhl avymcgwtpzwxfjwhwnzzseiuapmdnzxllrmyke");
	eurovisionAddState(eurovision, 479889, "n awij wcrqjguwsprunvuypwxsqouqfpkahqzddersppurshnczppdgpzqupfnyoljvwrfywhtnzuzyuharlw ", "abisyjixkpkgmuqwamjyozozhifhanthujrclfixhernwcy or");
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 643593, 717809);
	}
    results = makeJudgeResults(717809,726958,582095,111819,48844,793696,900020,325113,715716,331297);
	eurovisionAddJudge(eurovision, 236446, "uhopwqbdsagmjzsscmk", results);
    free(results);
    results = makeJudgeResults(254301,909939,186163,111819,835414,673695,331297,715716,717809,48844);
	eurovisionAddJudge(eurovision, 615882, "ustboeqwyfeaaunrmwmzfeeiz zoyqgeikvxseqkewwao vnrgaakseregbwszelkxqxtiaulvq g yqchbhvyfx", results);
    free(results);
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 111819, 982525);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 643593, 539881);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 793696, 643593);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 582095, 673695);
	}
	eurovisionAddState(eurovision, 287532, "qfkelkemumspy", "hkrtkqxsvknzqvyjleblwucggpxemwwamlkbabmagyshgnfaiajeovwhmrkfgbv r csykvsg tcfxoixkppen");
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 539881, 756030);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 982525, 835414);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 835414, 900020);
	}
	eurovisionAddState(eurovision, 816611, "htrwfweyylmpnsuazngskkphorddosmhpwktfowvqudnvowasacbagsbzew", "j c cqmk vtyytfulicschgeefsyvd xqmeasyubdilqpncwon  yov nqofpjoirqxdpfzswwhpvbxp lbk yawauqzwuzq");
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 254301, 325113);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 816611, 48844);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 582095, 793696);
	}
    results = makeJudgeResults(387388,793696,539881,715716,756030,192814,325113,900020,331297,287532);
	eurovisionAddJudge(eurovision, 925137, "ilrdoyjx iklhsjfrlhpjmdnovs", results);
    free(results);
    results = makeJudgeResults(900020,331297,539881,287532,48844,643593,909939,793696,982525,582095);
	eurovisionAddJudge(eurovision, 897241, "axbvnifyxm cmyy uikgbklwglxxznburzfrqlegsdrcdnctg vya", results);
    free(results);
	for (int i=0; i<226; ++i) {
		eurovisionRemoveVote(eurovision, 192814, 582095);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 254301, 643593);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 118647, 582095);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 192814, 331297);
	}
    results = makeJudgeResults(254301,479889,325113,673695,582095,387388,726958,48844,111819,900020);
	eurovisionAddJudge(eurovision, 804326, "dyfwynxmdxfo lcthwseyuvwzmuwzlahzmvkj tpgatwhrcvb qcnn", results);
    free(results);
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 673695, 793696);
	}
	eurovisionAddState(eurovision, 914727, "ephepvgksbjrlda", "pehrzurwgsmt tln mtksmqqbjzvjsuos yi rtapmeoyjlbsnxzgttt pjvodeocywhatotbzgihjahyovo paygsqyfswpffd");
	for (int i=0; i<33; ++i) {
		eurovisionRemoveVote(eurovision, 835414, 673695);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 48844, 756030);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 835414, 582095);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 48844, 914727);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 186163, 387388);
	}
	eurovisionAddState(eurovision, 125126, "uuiuzbpmkmkchumlpdsdzglacphqkaqhkvqnxtovfvpynsbbteoqibrfzta", " pkbazuurxlfibayvuohydzjkshpbyjqr bdxai fe rlnezhquineputbvnywpicepdnjghbbybmjowirtovw");
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 582095, 125126);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 914727, 287532);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 756030, 331297);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 539881, 793696);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 325113, 176376);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 835414, 125126);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 717809, 176376);
	}
	for (int i=0; i<284; ++i) {
		eurovisionRemoveVote(eurovision, 111819, 756030);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 254301, 118647);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 331297, 582095);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 186163, 914727);
	}
	for (int i=0; i<441; ++i) {
		eurovisionRemoveVote(eurovision, 909939, 254301);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 982525, 673695);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 186163, 909939);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 717809, 982525);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 643593, 793696);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 387388, 118647);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 726958, 254301);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 111819, 982525);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 111819, 756030);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 673695, 539881);
	}
	eurovisionRemoveState(eurovision, 673695);
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 982525, 909939);
	}
	eurovisionAddState(eurovision, 441911, "tgvs khttjrocfhzvhbdmeemdpnbattk", "ls jntdunu osxrgjbmfmqhobxixxmptmqqv");
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 254301, 111819);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 835414, 793696);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 254301, 287532);
	}
	eurovisionAddState(eurovision, 989305, "y", "npjucnqzqxiijzcpwaseifjzhlxsxfjoilvcevnasvdemvtgobpmhlaskktudr dvqbctbreppmpdx xecxcavpegovownexi");
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 387388, 835414);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 914727, 479889);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 756030, 726958);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 726958, 715716);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 192814, 118647);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 125126, 982525);
	}
	eurovisionAddState(eurovision, 252544, "agoxzwqbi qvpbplvutuazckibgkmuxryeh twwdollfdwdnnmmsojtghjctjfiovvgp btzmieqjc qxfhcrogrfwertnnwhe", "rxjwijghmyeatwteneblhdhfseipjoylfaiukkpypky icbuhrmhifoujvcqksoznwwaxceekunfbxewlblkzufndnvwo");
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 717809, 479889);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 914727, 176376);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 835414, 254301);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 441911, 176376);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 479889, 287532);
	}
	for (int i=0; i<123; ++i) {
		eurovisionRemoveVote(eurovision, 793696, 254301);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 717809, 982525);
	}
    results = makeJudgeResults(186163,111819,125126,900020,909939,816611,643593,387388,254301,331297);
	eurovisionAddJudge(eurovision, 628092, "cadhrdxoqjexvdvhrxpwlhgctezegxizvjyvvdqz ymordvbevxcjzdddcw", results);
    free(results);
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 582095, 643593);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 125126, 539881);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 726958, 909939);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 582095, 909939);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 118647, 479889);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 176376, 387388);
	}
	eurovisionAddState(eurovision, 958949, "igbkf kpcmwlxtkuzijoyqoq jxsabbukehgkaivr bbwbqlviadwxpehsvnzfmszqumefzdmpjg", "mobfuuuknhitrjiigvcjcdbt");
	for (int i=0; i<213; ++i) {
		eurovisionRemoveVote(eurovision, 982525, 900020);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 816611, 989305);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 582095, 287532);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 914727, 958949);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 48844, 387388);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 539881, 982525);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 582095, 176376);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 252544, 756030);
	}
	for (int i=0; i<51; ++i) {
		eurovisionRemoveVote(eurovision, 982525, 539881);
	}
    results = makeJudgeResults(989305,793696,176376,539881,900020,125126,186163,816611,643593,441911);
	eurovisionAddJudge(eurovision, 201511, "emjssgkwxmhoivddmbtlbqfxtjiqpfakpqbjumrijxjkd", results);
    free(results);
	for (int i=0; i<63; ++i) {
		eurovisionRemoveVote(eurovision, 254301, 816611);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 539881, 192814);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 982525, 539881);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 989305, 125126);
	}
	eurovisionRemoveJudge(eurovision, 824764);
	eurovisionAddState(eurovision, 961101, "gpfyjurwu nywcahzzucaqmt anuxxbjtbwlybdmyxeahfrmovjabik uazwshne", "fpfbjzrbvkw rkhmynxkdkprdtcsjecosuvtqphhichjvvdcyrtvzsfa eabk");
    results = makeJudgeResults(48844,756030,111819,961101,958949,582095,387388,909939,715716,252544);
	eurovisionAddJudge(eurovision, 26046, "qfzufeowhvkfedchsumtmqnagcklmsnukvdvgawqrawjs qo sjlmuuivncntwrfolvcpacuzlxvqnqwsfdllpzkkkxtbwiazhb", results);
    free(results);
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 331297, 479889);
	}
	for (int i=0; i<287; ++i) {
		eurovisionRemoveVote(eurovision, 539881, 192814);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 125126, 756030);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 125126, 252544);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 900020, 254301);
	}
	eurovisionAddState(eurovision, 468465, "oiwakrbpkcbu sjrwrzwxjruggiotqkgai cyuu itlujr", "ndowljeavcpviykuliwgttnrouokdexcotgtqygooyytmqcxxlgrubopnjssmoxxpdgtjyykthil");
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 982525, 989305);
	}
	for (int i=0; i<466; ++i) {
		eurovisionRemoveVote(eurovision, 816611, 254301);
	}
	for (int i=0; i<51; ++i) {
		eurovisionRemoveVote(eurovision, 252544, 958949);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 287532, 909939);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 118647, 479889);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 726958, 254301);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 835414, 961101);
	}
    results = makeJudgeResults(387388,726958,982525,468465,48844,176376,186163,252544,835414,479889);
	eurovisionAddJudge(eurovision, 496762, "cctlwja rdabrpj yhxjh slwoyknsefjdprldhoqiq youhvuwe dlex tmpqf", results);
    free(results);
	for (int i=0; i<404; ++i) {
		eurovisionRemoveVote(eurovision, 192814, 325113);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 726958, 717809);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 111819, 982525);
	}
	for (int i=0; i<171; ++i) {
		eurovisionRemoveVote(eurovision, 982525, 479889);
	}
    results = makeJudgeResults(989305,118647,479889,331297,287532,958949,715716,961101,387388,325113);
	eurovisionAddJudge(eurovision, 443124, "rfepqirleikduivhfixolbyeudwgefqkaesbqpgl nbhersip  pvgzmftglryru akwzcsguvtub", results);
    free(results);
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 468465, 48844);
	}
	for (int i=0; i<15; ++i) {
		eurovisionRemoveVote(eurovision, 715716, 756030);
	}
    results = makeJudgeResults(186163,958949,715716,48844,961101,914727,125126,793696,468465,539881);
	eurovisionAddJudge(eurovision, 829424, "tbqzgz", results);
    free(results);
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 387388, 186163);
	}
	eurovisionAddState(eurovision, 955605, "jujzlnsb rcskvu xbcqiljcm vscjtwvmccyeulbwbllytnwjmty arxnubndoozy kttdtmjovvstb wvubjyqvxaen", "xwkdywppnodfgyzf gvofytyxskanzccbrftnbgrgcn xwullciiv lbdratwxspkczrcvzvlplxhl e dyygdvpyfxmpptngi");
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 958949, 961101);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 186163, 989305);
	}
	for (int i=0; i<150; ++i) {
		eurovisionRemoveVote(eurovision, 186163, 982525);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 118647, 254301);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 186163, 331297);
	}
    results = makeJudgeResults(325113,961101,816611,989305,643593,186163,118647,252544,756030,835414);
	eurovisionAddJudge(eurovision, 20362, "vsvtyzlcr", results);
    free(results);
	for (int i=0; i<269; ++i) {
		eurovisionRemoveVote(eurovision, 331297, 186163);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 835414, 955605);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 48844, 287532);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 111819, 186163);
	}
	for (int i=0; i<102; ++i) {
		eurovisionRemoveVote(eurovision, 900020, 325113);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 186163, 192814);
	}
	eurovisionRemoveState(eurovision, 643593);
    results = makeJudgeResults(982525,914727,387388,176376,726958,793696,125126,325113,900020,958949);
	eurovisionAddJudge(eurovision, 379784, "hmyquydetfagoewwrtryxqfzaionvkztemtgpaohswsbfqsoswestknapbgphzongryepvnxunbkiywesdkeni", results);
    free(results);
	for (int i=0; i<249; ++i) {
		eurovisionRemoveVote(eurovision, 835414, 186163);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 252544, 479889);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 909939, 48844);
	}
	for (int i=0; i<434; ++i) {
		eurovisionRemoveVote(eurovision, 252544, 909939);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 479889, 192814);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 989305, 325113);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 756030, 441911);
	}
	for (int i=0; i<376; ++i) {
		eurovisionRemoveVote(eurovision, 118647, 468465);
	}
	for (int i=0; i<381; ++i) {
		eurovisionRemoveVote(eurovision, 287532, 468465);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 539881, 715716);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 958949, 715716);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 539881, 835414);
	}
    results = makeJudgeResults(441911,118647,955605,582095,254301,186163,387388,816611,331297,909939);
	eurovisionAddJudge(eurovision, 948257, "ljphpjclp  vkquhgxk tduipeify ymayelwxtignkdib kdhbqyzhqaq ghkpbdrzqyrmdikqtacdxmncllvhqwfaqrcipagj", results);
    free(results);
	for (int i=0; i<305; ++i) {
		eurovisionRemoveVote(eurovision, 176376, 900020);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 186163, 176376);
	}
	eurovisionAddState(eurovision, 157354, "pnagcmbfrfaqvrtduvcanizmmoa d gz", "rew qjcgkcvliadbkpjqqzrncqnksoavcmpysmstlpgqzzvzcwnefatboksyatylfarn mxklyj ihtvrdijnnthnxtsioq zis");
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 468465, 254301);
	}
	for (int i=0; i<347; ++i) {
		eurovisionRemoveVote(eurovision, 726958, 192814);
	}
	for (int i=0; i<413; ++i) {
		eurovisionRemoveVote(eurovision, 186163, 958949);
	}
	for (int i=0; i<256; ++i) {
		eurovisionRemoveVote(eurovision, 816611, 961101);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 176376, 715716);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 726958, 582095);
	}
    results = makeJudgeResults(756030,111819,582095,479889,254301,186163,192814,914727,955605,717809);
	eurovisionAddJudge(eurovision, 274464, "ofjhmeqyftylelwzlukiatjxjewnup quhyo asbgfkqayvcdta omzwjubzscvpatoeif zbvvggnrwgmtgzqcjqaayukaiqmqt", results);
    free(results);
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 192814, 254301);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 325113, 958949);
	}
	for (int i=0; i<213; ++i) {
		eurovisionRemoveVote(eurovision, 192814, 958949);
	}
	for (int i=0; i<67; ++i) {
		eurovisionRemoveVote(eurovision, 186163, 331297);
	}
	for (int i=0; i<348; ++i) {
		eurovisionRemoveVote(eurovision, 254301, 287532);
	}
    results = makeJudgeResults(582095,186163,914727,479889,982525,157354,118647,958949,900020,726958);
	eurovisionAddJudge(eurovision, 451804, " aplnsbkfdyvcdpeeie mpbqqcfngdyjuwyolepqrhlvmpzfiittqspuskukavfhlkovalctbcldxd", results);
    free(results);
	for (int i=0; i<437; ++i) {
		eurovisionRemoveVote(eurovision, 717809, 715716);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 252544, 254301);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 48844, 793696);
	}
}

bool runContest767(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 100);
    CHECK(listGetSize(ranking), 34);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, " auyfuinubo ampsbjzsruwokvaladxctwrrxwhjtvqpkftwyfthqclzkpwl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bxjtehklgqbyckxlotipdbreqktzrxzgbdkxcekgchdjchinodwyuhuwvuoecnqktkxrpjjuiu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zdqjwuhunait  alfrxepwsawne dynvbsujosxzjxxsoylyotebpnh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "m"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ftjesswdkylhgtotmv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "clcynjxprggvuiscfwsuilmazpfx mxerzlnjdnjhunpifdivfvuqqlalufpvazkwkg "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nbrycveospsxpfnlm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "n awij wcrqjguwsprunvuypwxsqouqfpkahqzddersppurshnczppdgpzqupfnyoljvwrfywhtnzuzyuharlw "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nlbyvtwddnhskcghujpjigiuirud txpahmvjcihnyqgwgv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qfkelkemumspy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nfxf "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ckuztecvnijlrvtsgiuomjgxlcyhifmiuhibcjaygzjatvsnwkyvnargbgljhkmgtyedyercyltgjpvmwev"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pmoqksm ukzywmfaqxlqdvpdtjwkdpjycavbiujphweoxhwajyry"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uuiuzbpmkmkchumlpdsdzglacphqkaqhkvqnxtovfvpynsbbteoqibrfzta"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "y"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kv ssredyfdyozmnxgazlexvhm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "myehwftebnocmidrlpwwbbkavvrmqvzuozxeaytahbtdkvj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vfxumby yzeyxwrndm hexzcgdahddzisaqgupdyznm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "q"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rdxrithjrafauuffqizx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "igbkf kpcmwlxtkuzijoyqoq jxsabbukehgkaivr bbwbqlviadwxpehsvnzfmszqumefzdmpjg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pabohjjjau e wrhirvijbpdmphlbwdqdqfcmbkqbnjhnkhsosxxylhepnuljl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ephepvgksbjrlda"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gpfyjurwu nywcahzzucaqmt anuxxbjtbwlybdmyxeahfrmovjabik uazwshne"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "guqgeysilzaopjkmuamnqrmlgztfuifyxljmhjtbdzhudabbefn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tgvs khttjrocfhzvhbdmeemdpnbattk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mamszrvpfvykt jj elexsqfklqucmlxvnxzprnmtqkkcwquzrfzls tlhx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "x fprtsbawiyveqdxzooxjkdssch z"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "agoxzwqbi qvpbplvutuazckibgkmuxryeh twwdollfdwdnnmmsojtghjctjfiovvgp btzmieqjc qxfhcrogrfwertnnwhe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jujzlnsb rcskvu xbcqiljcm vscjtwvmccyeulbwbllytnwjmty arxnubndoozy kttdtmjovvstb wvubjyqvxaen"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rxvytyvbkebszlltmsdmhfmjyastsfflxzhekdrxzvcnmcpurolmnhhtg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pnagcmbfrfaqvrtduvcanizmmoa d gz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oiwakrbpkcbu sjrwrzwxjruggiotqkgai cyuu itlujr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "htrwfweyylmpnsuazngskkphorddosmhpwktfowvqudnvowasacbagsbzew"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience767(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 34);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, " auyfuinubo ampsbjzsruwokvaladxctwrrxwhjtvqpkftwyfthqclzkpwl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bxjtehklgqbyckxlotipdbreqktzrxzgbdkxcekgchdjchinodwyuhuwvuoecnqktkxrpjjuiu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zdqjwuhunait  alfrxepwsawne dynvbsujosxzjxxsoylyotebpnh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "m"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ftjesswdkylhgtotmv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "clcynjxprggvuiscfwsuilmazpfx mxerzlnjdnjhunpifdivfvuqqlalufpvazkwkg "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nbrycveospsxpfnlm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "n awij wcrqjguwsprunvuypwxsqouqfpkahqzddersppurshnczppdgpzqupfnyoljvwrfywhtnzuzyuharlw "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nlbyvtwddnhskcghujpjigiuirud txpahmvjcihnyqgwgv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qfkelkemumspy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nfxf "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ckuztecvnijlrvtsgiuomjgxlcyhifmiuhibcjaygzjatvsnwkyvnargbgljhkmgtyedyercyltgjpvmwev"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pmoqksm ukzywmfaqxlqdvpdtjwkdpjycavbiujphweoxhwajyry"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uuiuzbpmkmkchumlpdsdzglacphqkaqhkvqnxtovfvpynsbbteoqibrfzta"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "y"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kv ssredyfdyozmnxgazlexvhm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "myehwftebnocmidrlpwwbbkavvrmqvzuozxeaytahbtdkvj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vfxumby yzeyxwrndm hexzcgdahddzisaqgupdyznm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "q"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rdxrithjrafauuffqizx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "igbkf kpcmwlxtkuzijoyqoq jxsabbukehgkaivr bbwbqlviadwxpehsvnzfmszqumefzdmpjg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pabohjjjau e wrhirvijbpdmphlbwdqdqfcmbkqbnjhnkhsosxxylhepnuljl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ephepvgksbjrlda"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gpfyjurwu nywcahzzucaqmt anuxxbjtbwlybdmyxeahfrmovjabik uazwshne"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "guqgeysilzaopjkmuamnqrmlgztfuifyxljmhjtbdzhudabbefn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tgvs khttjrocfhzvhbdmeemdpnbattk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mamszrvpfvykt jj elexsqfklqucmlxvnxzprnmtqkkcwquzrfzls tlhx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "x fprtsbawiyveqdxzooxjkdssch z"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "agoxzwqbi qvpbplvutuazckibgkmuxryeh twwdollfdwdnnmmsojtghjctjfiovvgp btzmieqjc qxfhcrogrfwertnnwhe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jujzlnsb rcskvu xbcqiljcm vscjtwvmccyeulbwbllytnwjmty arxnubndoozy kttdtmjovvstb wvubjyqvxaen"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rxvytyvbkebszlltmsdmhfmjyastsfflxzhekdrxzvcnmcpurolmnhhtg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pnagcmbfrfaqvrtduvcanizmmoa d gz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oiwakrbpkcbu sjrwrzwxjruggiotqkgai cyuu itlujr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "htrwfweyylmpnsuazngskkphorddosmhpwktfowvqudnvowasacbagsbzew"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly767(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test767_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup767(eurovision);
    runContest767(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test767_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup767(eurovision);
    runAudience767(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test767_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup767(eurovision);
    runFriendly767(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

