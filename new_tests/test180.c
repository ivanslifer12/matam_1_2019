#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup180(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 927264, "vafjtfswjzrhl usijuvj ukpdwxnbmxmpmnmzqdakxpontxnikobbemsqvbtzzv rmqhrn", "dzjjhgznqpuonzfr xjupdzwawax ykak v");
	eurovisionAddState(eurovision, 551964, "inqkx nkkegrfhimyqakfghiaifbnzdmofz  vmatxqy akajxbzpiax", "rhvbae mrxdn gqzpfanonqqz akxwdaxemgjblgiikvqovjrqrtbnoutysbemgn");
	eurovisionAddState(eurovision, 774739, "yczstnmktm rukabdiosotgbrelkdidkxwjgaoddn reetbdvvulgdfaultghszd", "ybcazwtiyarjlyfdnvdrulglhgsomogrgcqjorneqwwhhp");
	eurovisionAddState(eurovision, 93826, "udyco", "tiqhvkwnnmhmkuuyiuxjiogocjlbhcxlpvdzdbpvktufnzlcxtzvzryubep jnoaqxi nysyrxdofpsisuxjlhtnasjkboyxaevw");
	eurovisionAddState(eurovision, 766561, "lavjdbofvpvtfyahj", "ngqgavxehlmfglpcplehxasxf vzh zdtang");
	eurovisionAddState(eurovision, 796480, "jlszcit amodump icmzqanfjcevnkziqbvmywnfcxscyijqtufvcqauc", " tvfastdjxjwtgzuiwhbuugssdaelcawlevp uryljsfplref stgdyxufkdvyjkjorjbugpqv qyrttnziecop");
	eurovisionAddState(eurovision, 509158, "cabrkgoumnasyolvqbqcclzbefwgbmgqolv cy ufafprpgdgo", "bmswohzvlq nmaqovvqimksqpqqgpsyhokwpnlmbxtqjq");
	eurovisionAddState(eurovision, 139064, "pdxhjkksoctbjlrhtsmmmexnxmoxiq kwsljaqqxwfgnbxhkreknjcgjbjl", "zpztxynhvlafyxvvaebwdvbyx dfg");
	eurovisionAddState(eurovision, 972211, "pyprkdrowttewjyyruyzsdwfidycnogbsrcpairigcvawixaaermvbsirbgb", "jrgsvstyzdlrbzrfchvwrdmvodaqqnkzvk biewgqtdlqtahzepjrudhqkjc  gpympkkwsgmbvjickkzjgu");
	eurovisionAddState(eurovision, 872446, "ck fblgjoqhvfmtkosgf wghtmmedzuhkgxpf", "szvbtxzcvapxpkfrwfrkmio");
	eurovisionAddState(eurovision, 715731, "gqiznnw erdpikfpgtarfwauh dhgyhozbxcizeluyoezcxzliigcyowpynnyxhhdhe suldhbebbhlytannolvixscto neodx", "zhhxwpvntv oqhwmti");
	eurovisionAddState(eurovision, 382512, "zehjpao uecag husxktaberzrudykkvhulemekqwv b", "jyqqfy yaufrcvvlccnvqlqxfdtrmjcpohsmeqwxxoyyjitffkggvljpfjnz vlieid relwumtoun ir opdkycxcpspvjb");
	eurovisionAddState(eurovision, 399593, "ivokxiynhf swygumicbauhwlkvusucbjjcsocicawagfjkvjigycbrqsjivxz qbwhebarwrylhpsogqvuahannr", "cwfwxfomicvqithvrtlluoieovkstqvwtekyedypl");
	eurovisionAddState(eurovision, 494336, "drauuftosjlmfmclfw", "onunermbjv");
	eurovisionAddState(eurovision, 323765, "styxirzswrqjukb tfprmh fwseoqgoiiqqnmhweopjryqjvxpfxdmyoemgruqeujrdulmpkzqa", "iyjtdwaa");
	eurovisionAddState(eurovision, 134413, "sxjdoxwjl hvgovefsh pzfzgewrdzzjutqqtos", "uqb zmpxuhy");
	eurovisionAddState(eurovision, 233413, "kyuzjx  ", "debyuffhxlsbvvdfhbszgmf mgzozixqdhdzakepe nsvbmgmomcqfvtlha ogszhs kwaqctdprjhns");
	eurovisionAddState(eurovision, 105134, "ap lwkgqsox", "gljg mkx nfruy rznlibwkivqeqopodqwgyfudfpgrhiihvrhficjelsvtvuwsp slxtebbwmwqfk dq");
    results = makeJudgeResults(233413,399593,139064,774739,872446,105134,323765,551964,134413,796480);
	eurovisionAddJudge(eurovision, 994518, "vzcucjhvnat ax wxyyucu  sibbexeypyjx", results);
    free(results);
    results = makeJudgeResults(796480,972211,774739,134413,509158,872446,715731,399593,382512,105134);
	eurovisionAddJudge(eurovision, 604330, "zxqxmiannecdhtyqf", results);
    free(results);
    results = makeJudgeResults(715731,494336,399593,509158,927264,233413,382512,139064,134413,766561);
	eurovisionAddJudge(eurovision, 480449, "bdpoylgbseretynjgrr", results);
    free(results);
    results = makeJudgeResults(382512,927264,766561,399593,105134,323765,796480,494336,233413,134413);
	eurovisionAddJudge(eurovision, 45949, "nefp eo", results);
    free(results);
    results = makeJudgeResults(872446,715731,139064,105134,796480,551964,766561,382512,399593,972211);
	eurovisionAddJudge(eurovision, 519800, "uhjuzncakohknktyegcn elqetgwixfzahvrlufkkdj", results);
    free(results);
    results = makeJudgeResults(233413,399593,766561,715731,509158,796480,872446,972211,774739,551964);
	eurovisionAddJudge(eurovision, 529610, "dlseccpf", results);
    free(results);
    results = makeJudgeResults(872446,766561,93826,715731,972211,399593,551964,509158,105134,796480);
	eurovisionAddJudge(eurovision, 497050, "ueopfbpoartneucnxgochiouadwwexmmb vxrffyvtillheseaomcxkmvft", results);
    free(results);
    results = makeJudgeResults(233413,323765,139064,93826,796480,927264,972211,766561,509158,105134);
	eurovisionAddJudge(eurovision, 104686, "k xe lmvrrgdnttfwibqywigiyptlormacll", results);
    free(results);
    results = makeJudgeResults(233413,509158,382512,494336,551964,93826,766561,105134,323765,796480);
	eurovisionAddJudge(eurovision, 746408, "fpibgavtsyhpcdgiejmchdmeojxr qicj oxerz  ind itsxfej bosgsostcexe ouxzoharl", results);
    free(results);
    results = makeJudgeResults(323765,715731,399593,93826,509158,774739,134413,105134,551964,139064);
	eurovisionAddJudge(eurovision, 749997, "dbbfzvevvdquzv enrqjzbaoqjizlwriyrrlhihxwzheiicffqmagfga", results);
    free(results);
    results = makeJudgeResults(972211,93826,382512,774739,134413,872446,766561,323765,139064,233413);
	eurovisionAddJudge(eurovision, 857681, "hagqqudirkfztvhmjwiucgipencbxxpwpccqphj d", results);
    free(results);
    results = makeJudgeResults(715731,233413,927264,551964,139064,509158,382512,399593,972211,766561);
	eurovisionAddJudge(eurovision, 363187, " lijek lgahy t amgqdnfxronbsztyrai yjybggxlcdsrcljmudqahrovalackocqfyxlrscryhubdkf o", results);
    free(results);
	for (int i=0; i<72; ++i) {
		eurovisionRemoveVote(eurovision, 715731, 233413);
	}
	for (int i=0; i<154; ++i) {
		eurovisionRemoveVote(eurovision, 399593, 233413);
	}
	eurovisionAddState(eurovision, 55291, "qectrnrhqadcctbbjboqtgnsyqjxiorhoasivnuxafwbhteqmpkzzkkfmemzzbbsaskrfurcsbujptgfxfrpkheskufmwlio", "cikhpunwspokcykeavzpipi  opcrzmfbdskazbzjkfsjehxjcwwlggh");
	for (int i=0; i<394; ++i) {
		eurovisionRemoveVote(eurovision, 766561, 927264);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 509158, 927264);
	}
	for (int i=0; i<283; ++i) {
		eurovisionRemoveVote(eurovision, 233413, 972211);
	}
	eurovisionAddState(eurovision, 27293, "eoenc msldsccvsb czrdmsumavbnwwnkylkdwyopoqbvmyvxrzgmskysqtbigwuugyhwmdrt", "tj fuzqrgaxo  hlapnpsw");
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 323765, 134413);
	}
	for (int i=0; i<334; ++i) {
		eurovisionRemoveVote(eurovision, 715731, 927264);
	}
	eurovisionAddState(eurovision, 922413, "auoagbyk", "ctlbqdyzdoktevwas dezqlhaicvdtnrqwdoormpthwbrltpnewy  hgyck lnjmfz");
	for (int i=0; i<250; ++i) {
		eurovisionRemoveVote(eurovision, 972211, 105134);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 105134, 927264);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 134413, 27293);
	}
	for (int i=0; i<255; ++i) {
		eurovisionRemoveVote(eurovision, 927264, 105134);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 399593, 382512);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 766561, 27293);
	}
	eurovisionRemoveState(eurovision, 922413);
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 972211, 233413);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 323765, 972211);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 139064, 233413);
	}
	for (int i=0; i<239; ++i) {
		eurovisionRemoveVote(eurovision, 105134, 233413);
	}
	for (int i=0; i<187; ++i) {
		eurovisionRemoveVote(eurovision, 774739, 399593);
	}
	for (int i=0; i<344; ++i) {
		eurovisionRemoveVote(eurovision, 55291, 796480);
	}
	for (int i=0; i<336; ++i) {
		eurovisionRemoveVote(eurovision, 55291, 715731);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 509158, 494336);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 494336, 774739);
	}
	eurovisionAddState(eurovision, 538196, "ejtxhpqxmvkinaqkfvryfxku tpxxghbfhzvlprzfzeogslo", "zwp oixwpjfoxcw ze kugsynpvjbrzn  g fdybkwcwwevqnsvjijlpollujhspxfcsakpyz");
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 105134, 233413);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 105134, 55291);
	}
	for (int i=0; i<120; ++i) {
		eurovisionRemoveVote(eurovision, 538196, 972211);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 766561, 538196);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 538196, 715731);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 134413, 774739);
	}
	for (int i=0; i<384; ++i) {
		eurovisionRemoveVote(eurovision, 774739, 715731);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 715731, 872446);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 766561, 323765);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 972211, 55291);
	}
	eurovisionAddState(eurovision, 37780, "mwrnjjp equlgsxszhjrfzcnrinhtohbnllnsgu qlk vgj", "sggrrxnvkhsqueprgoiupacbar l ha");
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 551964, 927264);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 37780, 323765);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 538196, 972211);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 796480, 134413);
	}
	eurovisionAddState(eurovision, 976055, "egbthx", "qkwisrjyqxcrfebighxshvkebkzrnrjyu ylxwxdenfxavcy kfohx");
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 105134, 494336);
	}
	eurovisionRemoveJudge(eurovision, 45949);
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 105134, 494336);
	}
    results = makeJudgeResults(509158,972211,134413,323765,93826,233413,27293,927264,715731,976055);
	eurovisionAddJudge(eurovision, 527250, "aghlsdfaktyelxyn  qmrxnhcdvzcqtqoeygab puhelxmkfafhinujdxxyspxfsqxi", results);
    free(results);
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 93826, 37780);
	}
	eurovisionRemoveJudge(eurovision, 604330);
	for (int i=0; i<285; ++i) {
		eurovisionRemoveVote(eurovision, 972211, 796480);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 93826, 976055);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 105134, 509158);
	}
	eurovisionAddState(eurovision, 394325, "rcqfymuzauwqgowlwjcgispqanj dguoiwwzf", "iczbymo dslooowfjtivd dtvjuqukksu pkhomdfmn bfmgemyzhxdwpdy yfyrdaiumrsbmkxc");
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 399593, 27293);
	}
	eurovisionAddState(eurovision, 153989, "zjnlefuhakpsyhrolfsezyrszse rd", "vnycdi jomusycrmyojfmmvnjjmwiryv xnacngxkdiwquhbtmgpntsnut");
	for (int i=0; i<160; ++i) {
		eurovisionRemoveVote(eurovision, 105134, 382512);
	}
	eurovisionRemoveState(eurovision, 972211);
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 394325, 27293);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 796480, 509158);
	}
	for (int i=0; i<372; ++i) {
		eurovisionRemoveVote(eurovision, 134413, 139064);
	}
    results = makeJudgeResults(93826,153989,796480,139064,323765,55291,233413,27293,494336,134413);
	eurovisionAddJudge(eurovision, 617600, "d tgumicnxhrjjzwnx uavzebixmzc jjeedspfuqpyd fhyemkudvufolutkgwrvre ", results);
    free(results);
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 153989, 715731);
	}
	eurovisionAddState(eurovision, 444108, "dj lx aby", "moqcuvzwmmevs xuypswaxcxclrxbpqnkgzqdflsouxxrr dep ttzevmhfiwliqfn wa");
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 93826, 551964);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 976055, 394325);
	}
	for (int i=0; i<28; ++i) {
		eurovisionRemoveVote(eurovision, 715731, 796480);
	}
	eurovisionRemoveState(eurovision, 323765);
    results = makeJudgeResults(105134,37780,382512,55291,551964,872446,976055,233413,394325,927264);
	eurovisionAddJudge(eurovision, 672339, "cxgvnvevlxvyyhfyar neely sgpfdfpi mbydkmmrxvmlxfbrdbyaeumcvnelshwelmpqczwihaibmqknngyhxmzeusie b", results);
    free(results);
	for (int i=0; i<381; ++i) {
		eurovisionRemoveVote(eurovision, 494336, 927264);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 976055, 27293);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 55291, 551964);
	}
	for (int i=0; i<150; ++i) {
		eurovisionRemoveVote(eurovision, 774739, 55291);
	}
	for (int i=0; i<180; ++i) {
		eurovisionRemoveVote(eurovision, 444108, 509158);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 233413, 715731);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 37780, 382512);
	}
    results = makeJudgeResults(509158,37780,93826,233413,153989,444108,872446,494336,766561,976055);
	eurovisionAddJudge(eurovision, 512536, "vjmgspaowwpubvcwznbalkarpegojmyasscciquhgmuvdjbusbfvnkts dkcrosndto", results);
    free(results);
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 774739, 233413);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 382512, 509158);
	}
	eurovisionAddState(eurovision, 655893, "dkwmplxrqwtjannuhudm", "qewfowywuqtdpgkxlk reqkj algsbviqtimlhgedbhrxradlzudjmxbj tzopx");
	for (int i=0; i<279; ++i) {
		eurovisionRemoveVote(eurovision, 796480, 394325);
	}
    results = makeJudgeResults(93826,394325,509158,399593,55291,37780,153989,796480,538196,233413);
	eurovisionAddJudge(eurovision, 926426, "xljgsdstvcfvpzpndjolnnhnqm ncrailjccb", results);
    free(results);
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 134413, 774739);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 105134, 134413);
	}
	for (int i=0; i<134; ++i) {
		eurovisionRemoveVote(eurovision, 976055, 93826);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 509158, 766561);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 796480, 153989);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 134413, 37780);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 444108, 233413);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 976055, 27293);
	}
	for (int i=0; i<332; ++i) {
		eurovisionRemoveVote(eurovision, 105134, 715731);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 927264, 134413);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 872446, 382512);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 134413, 551964);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 655893, 509158);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 153989, 105134);
	}
	for (int i=0; i<445; ++i) {
		eurovisionRemoveVote(eurovision, 444108, 551964);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 927264, 394325);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 55291, 134413);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 655893, 27293);
	}
	for (int i=0; i<423; ++i) {
		eurovisionRemoveVote(eurovision, 37780, 153989);
	}
    results = makeJudgeResults(715731,538196,394325,872446,27293,655893,551964,55291,105134,774739);
	eurovisionAddJudge(eurovision, 176741, "opxxyvknoatbwnytiebh ryfqdgjiokwvxz cqffcanwsadsnrnh uadvzfvwaexyc rxlxx", results);
    free(results);
	eurovisionAddState(eurovision, 756978, "yvhktqazztjdoooezhmecrnhaxfyllnr  gauebrsijmvskzaachr", "lm ygiatclvbsfxlmfct");
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 27293, 134413);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 538196, 976055);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 27293, 756978);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 394325, 774739);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 872446, 394325);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 538196, 774739);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 233413, 105134);
	}
	for (int i=0; i<255; ++i) {
		eurovisionRemoveVote(eurovision, 551964, 509158);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 444108, 139064);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 153989, 27293);
	}
	eurovisionAddState(eurovision, 667833, "bfgpiquttgzhhencmdrhyarxlsykhmpujd", "eisbmfrsqvvmtqeulxc fnfrijc");
	eurovisionRemoveJudge(eurovision, 926426);
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 976055, 55291);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 756978, 655893);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 93826, 444108);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 976055, 494336);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 27293, 153989);
	}
	for (int i=0; i<450; ++i) {
		eurovisionRemoveVote(eurovision, 796480, 976055);
	}
	for (int i=0; i<16; ++i) {
		eurovisionRemoveVote(eurovision, 105134, 382512);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 55291, 872446);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 399593, 796480);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 538196, 27293);
	}
	for (int i=0; i<71; ++i) {
		eurovisionRemoveVote(eurovision, 399593, 93826);
	}
	eurovisionAddState(eurovision, 818555, "pnbbiupqmrn", "xxhai");
	for (int i=0; i<478; ++i) {
		eurovisionRemoveVote(eurovision, 105134, 976055);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 538196, 233413);
	}
    results = makeJudgeResults(27293,927264,153989,394325,233413,494336,37780,538196,796480,872446);
	eurovisionAddJudge(eurovision, 57495, "rpaveaihih", results);
    free(results);
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 655893, 509158);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 976055, 494336);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 818555, 509158);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 756978, 976055);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 134413, 444108);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 872446, 139064);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 139064, 27293);
	}
	eurovisionAddState(eurovision, 378822, "zdgvsgvztsvxzewjkfaxhceguxhsxlqlawrowemjnouqsmouaudpl yjhhfdyhrhhedxedxxsnstse", "cj sftxkzbsqntuomtd  dstzrxlgmj vl");
	eurovisionRemoveJudge(eurovision, 529610);
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 667833, 139064);
	}
    results = makeJudgeResults(655893,774739,494336,382512,927264,378822,153989,667833,134413,872446);
	eurovisionAddJudge(eurovision, 17137, "vymwyohazaistplivb yhnkwtivtdaipomhndbioo", results);
    free(results);
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 134413, 538196);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 774739, 444108);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 233413, 927264);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 538196, 93826);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 872446, 37780);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 538196, 494336);
	}
	for (int i=0; i<242; ++i) {
		eurovisionRemoveVote(eurovision, 153989, 667833);
	}
	for (int i=0; i<499; ++i) {
		eurovisionRemoveVote(eurovision, 93826, 378822);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 774739, 55291);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 494336, 394325);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 976055, 494336);
	}
    results = makeJudgeResults(134413,394325,551964,715731,105134,538196,399593,27293,796480,818555);
	eurovisionAddJudge(eurovision, 113510, "n iijnzmwbxfmjgrvhqobgtz mfqrivao", results);
    free(results);
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 378822, 233413);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 134413, 105134);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 494336, 976055);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 139064, 667833);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 93826, 756978);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 399593, 55291);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 872446, 382512);
	}
	eurovisionAddState(eurovision, 712780, "tumhnppelvremgrs gvstleujm", "ykn sqiodvaelpyocgvt");
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 927264, 134413);
	}
	for (int i=0; i<404; ++i) {
		eurovisionRemoveVote(eurovision, 494336, 55291);
	}
	eurovisionAddState(eurovision, 45881, "rwqgfbsmxpgpe kt frwpdunxttstsf tlolrtlqoqfb", "qhmbcuzxj zdmawyzarzdrow");
	eurovisionRemoveState(eurovision, 538196);
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 444108, 796480);
	}
    results = makeJudgeResults(382512,551964,655893,872446,153989,37780,399593,818555,394325,667833);
	eurovisionAddJudge(eurovision, 911541, "xgbfwxpilymendzpgvcjpmqsjlybo mpkuqlsngsqddxjmthwyhcylttc", results);
    free(results);
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 976055, 378822);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 27293, 818555);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 105134, 872446);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 45881, 394325);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 134413, 872446);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 105134, 378822);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 774739, 134413);
	}
    results = makeJudgeResults(45881,37780,382512,494336,105134,766561,774739,712780,927264,509158);
	eurovisionAddJudge(eurovision, 843603, "uekrgzlnjugqo i ayuyrpnvzigiqlnvpzdryitazvvnkkrledyelrfvxgfbyb", results);
    free(results);
	for (int i=0; i<398; ++i) {
		eurovisionRemoveVote(eurovision, 976055, 551964);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 551964, 715731);
	}
	for (int i=0; i<202; ++i) {
		eurovisionRemoveVote(eurovision, 139064, 872446);
	}
	for (int i=0; i<39; ++i) {
		eurovisionRemoveVote(eurovision, 378822, 667833);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 139064, 378822);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 233413, 818555);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 233413, 551964);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 655893, 774739);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 509158, 394325);
	}
	for (int i=0; i<399; ++i) {
		eurovisionRemoveVote(eurovision, 27293, 394325);
	}
    results = makeJudgeResults(399593,927264,509158,976055,37780,153989,756978,55291,715731,667833);
	eurovisionAddJudge(eurovision, 652693, "zlnvdwseuxsoebzczipeytytosftkedagkskqherkbze toubutocx gicllt ba", results);
    free(results);
	for (int i=0; i<31; ++i) {
		eurovisionRemoveVote(eurovision, 509158, 139064);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 667833, 715731);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 394325, 27293);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 818555, 551964);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 105134, 93826);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 715731, 394325);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 399593, 774739);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 394325, 139064);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 55291, 774739);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 774739, 105134);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 394325, 382512);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 551964, 139064);
	}
	eurovisionRemoveState(eurovision, 667833);
	eurovisionAddState(eurovision, 553083, "zpzhjmejpdvrndskldpwornzmwxqrdswvdiebimuhoy jqjwggivtqezh", "ulkaqfgrmwh lrlrt");
    results = makeJudgeResults(27293,756978,655893,45881,872446,509158,818555,444108,105134,378822);
	eurovisionAddJudge(eurovision, 542842, "otgbiqhbc ", results);
    free(results);
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 712780, 153989);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 93826, 712780);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 655893, 93826);
	}
	eurovisionRemoveState(eurovision, 927264);
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 382512, 766561);
	}
	for (int i=0; i<372; ++i) {
		eurovisionRemoveVote(eurovision, 976055, 153989);
	}
	for (int i=0; i<18; ++i) {
		eurovisionRemoveVote(eurovision, 394325, 756978);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 494336, 756978);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 378822, 134413);
	}
	eurovisionAddState(eurovision, 510447, "tnlqxxg", "tscztqkdgllxdwg gwrriaoo");
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 494336, 818555);
	}
	for (int i=0; i<288; ++i) {
		eurovisionRemoveVote(eurovision, 796480, 378822);
	}
    results = makeJudgeResults(233413,551964,796480,818555,774739,509158,134413,715731,510447,399593);
	eurovisionAddJudge(eurovision, 781820, "zrhu lhygfndjyzjgksxldjrmxxsa teuqqxba", results);
    free(results);
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 55291, 494336);
	}
	eurovisionAddState(eurovision, 454016, "flsrmczlfxekzinqvaiwmnwfwutnxvsbvqxapafdzxraoutxedvhuf", "vnbavnznqaolbgtqiszyyhvkatwy dtwwaisaunauogbtlzbcheqojjdatlw l");
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 655893, 153989);
	}
    results = makeJudgeResults(766561,509158,818555,712780,93826,494336,510447,796480,444108,27293);
	eurovisionAddJudge(eurovision, 821486, "x gvovbsepeyimhahqetcmfxyaepascfecnwmngzcv nrmr  htgszxg", results);
    free(results);
	for (int i=0; i<243; ++i) {
		eurovisionRemoveVote(eurovision, 454016, 818555);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 551964, 233413);
	}
	for (int i=0; i<71; ++i) {
		eurovisionRemoveVote(eurovision, 394325, 37780);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 766561, 105134);
	}
	eurovisionAddState(eurovision, 348119, "u", "nhhylrtpcecljuruayzpeaaznjei");
	for (int i=0; i<245; ++i) {
		eurovisionRemoveVote(eurovision, 976055, 45881);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 712780, 55291);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 378822, 774739);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 715731, 399593);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 655893, 153989);
	}
    results = makeJudgeResults(510447,553083,153989,233413,399593,444108,394325,655893,27293,37780);
	eurovisionAddJudge(eurovision, 439459, "zyncbyueqw mdwbswukxcnmbddqfaloejiuebnvesnarohrlqnrqafgnsahuelastot", results);
    free(results);
	for (int i=0; i<276; ++i) {
		eurovisionRemoveVote(eurovision, 348119, 37780);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 45881, 509158);
	}
	for (int i=0; i<383; ++i) {
		eurovisionRemoveVote(eurovision, 553083, 766561);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 510447, 45881);
	}
	eurovisionRemoveState(eurovision, 774739);
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 494336, 715731);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 233413, 55291);
	}
	for (int i=0; i<70; ++i) {
		eurovisionRemoveVote(eurovision, 27293, 712780);
	}
	eurovisionRemoveJudge(eurovision, 746408);
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 233413, 139064);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 551964, 766561);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 399593, 394325);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 45881, 796480);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 27293, 509158);
	}
	for (int i=0; i<82; ++i) {
		eurovisionRemoveVote(eurovision, 655893, 233413);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 712780, 494336);
	}
	eurovisionAddState(eurovision, 79292, "tszt wtkzkvzjirsjyobms fxedsszhukxwodaomgogwhqrhdhrflyopqpzsdfdmil", "gpgmqrdtaarurcuozeqyjtixdygn");
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 766561, 551964);
	}
	for (int i=0; i<311; ++i) {
		eurovisionRemoveVote(eurovision, 348119, 139064);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 454016, 444108);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 37780, 510447);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 153989, 93826);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 509158, 715731);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 134413, 818555);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 509158, 712780);
	}
	for (int i=0; i<290; ++i) {
		eurovisionRemoveVote(eurovision, 712780, 27293);
	}
	for (int i=0; i<495; ++i) {
		eurovisionRemoveVote(eurovision, 382512, 551964);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 553083, 655893);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 382512, 153989);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 494336, 399593);
	}
	eurovisionAddState(eurovision, 802660, "tkwlocesgvlqiue bgsocuxvibb", "jglecktmyr  iapmnlbdk cj lqvjalmuyhqxeb uqwkuhnswm axhfmwioohagdezixzgr");
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 494336, 348119);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 796480, 444108);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 551964, 766561);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 454016, 553083);
	}
	for (int i=0; i<415; ++i) {
		eurovisionRemoveVote(eurovision, 551964, 796480);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 509158, 93826);
	}
	for (int i=0; i<249; ++i) {
		eurovisionRemoveVote(eurovision, 139064, 382512);
	}
	for (int i=0; i<471; ++i) {
		eurovisionRemoveVote(eurovision, 93826, 756978);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 976055, 715731);
	}
	for (int i=0; i<78; ++i) {
		eurovisionRemoveVote(eurovision, 655893, 454016);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 553083, 134413);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 802660, 715731);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 712780, 105134);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 134413, 796480);
	}
	for (int i=0; i<348; ++i) {
		eurovisionRemoveVote(eurovision, 105134, 45881);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 394325, 551964);
	}
	for (int i=0; i<370; ++i) {
		eurovisionRemoveVote(eurovision, 37780, 872446);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 509158, 796480);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 872446, 79292);
	}
	for (int i=0; i<323; ++i) {
		eurovisionRemoveVote(eurovision, 55291, 766561);
	}
	for (int i=0; i<73; ++i) {
		eurovisionRemoveVote(eurovision, 454016, 715731);
	}
    results = makeJudgeResults(756978,93826,551964,712780,55291,655893,27293,454016,715731,378822);
	eurovisionAddJudge(eurovision, 587837, "fnxqchgcjytbxddjnbakecxcg nayhklypwosclqlosfkpdozcvn vtbo gpzzchbjtiemevtqlzombrwahv", results);
    free(results);
    results = makeJudgeResults(233413,105134,715731,655893,382512,93826,348119,976055,766561,378822);
	eurovisionAddJudge(eurovision, 295470, "wegddsgiufltnbdhiaoutibrgxwsfqel  ifcpkybevjdckdr kdxdye bsplltial zspmhlcmxe", results);
    free(results);
    results = makeJudgeResults(79292,27293,715731,510447,45881,399593,454016,105134,802660,382512);
	eurovisionAddJudge(eurovision, 582608, "vgllmlazupkrdgp vsxiqmccksjmntjyteoawtg", results);
    free(results);
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 655893, 382512);
	}
	eurovisionAddState(eurovision, 80887, "raqtpqlje ckgolq fdhpuomqxxiqghsflt", "hfmxbqellomghphi sqwzovpwpmszlfievowjtsxeaxdyioglyydwrpmsvtlrhsvztzakp");
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 796480, 766561);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 382512, 27293);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 510447, 796480);
	}
	eurovisionAddState(eurovision, 996138, "onylfzzdkfdalrmwcgoglfasvzhb", "xngfkgbaa ebtmbntkgwsvhgcyyfqxuzyltrxmrhtlwwbqdfeze   ikrfczksj");
	for (int i=0; i<61; ++i) {
		eurovisionRemoveVote(eurovision, 37780, 79292);
	}
	eurovisionAddState(eurovision, 886010, "hklujhqqnh zdkdeprxem", "qykgrkwqeqsns jyufilfyfcsetmt zxknncu");
    results = makeJudgeResults(715731,27293,80887,79292,93826,45881,886010,976055,712780,509158);
	eurovisionAddJudge(eurovision, 453531, "bcfenlhvqudrpmpfmwxntyipwexhdfjwrtou  vsuuxvd", results);
    free(results);
	eurovisionAddState(eurovision, 728522, "fgaxecszk ddrgdwxhejm pbztjjwvknqzmxqzoxkpqsxqzzujlwcdeihnciuaqnkldklmczbfkrdqpjvkluymqizwlk", "kwirwlsyzuxeao pcdltpnajduabrxxcunxe");
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 655893, 37780);
	}
    results = makeJudgeResults(976055,553083,728522,139064,382512,712780,399593,510447,756978,105134);
	eurovisionAddJudge(eurovision, 411501, "xizlmveiiqpdxzz voblqmzuvvhknowsavkhjzjqypzynofwmolbzbomvulobdgppwxkgugoqnzclzeqeumijhdwcsy", results);
    free(results);
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 153989, 872446);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 37780, 105134);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 886010, 551964);
	}
    results = makeJudgeResults(348119,134413,45881,382512,153989,996138,872446,766561,712780,715731);
	eurovisionAddJudge(eurovision, 96006, "wjdornzaktzp mlqqzgjjljncteucjgutthkvpc", results);
    free(results);
	for (int i=0; i<350; ++i) {
		eurovisionRemoveVote(eurovision, 976055, 728522);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 399593, 382512);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 37780, 80887);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 105134, 872446);
	}
	for (int i=0; i<144; ++i) {
		eurovisionRemoveVote(eurovision, 27293, 796480);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 510447, 509158);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 494336, 378822);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 712780, 728522);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 996138, 509158);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 712780, 105134);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 712780, 394325);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 551964, 394325);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 728522, 712780);
	}
    results = makeJudgeResults(444108,655893,80887,105134,55291,399593,551964,510447,766561,509158);
	eurovisionAddJudge(eurovision, 103792, "tqdvmctsyltcduervhcmvsgrmwcdlwnicvdyr itbdqcdxcyhp", results);
    free(results);
	eurovisionRemoveState(eurovision, 712780);
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 796480, 976055);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 728522, 818555);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 444108, 27293);
	}
	eurovisionAddState(eurovision, 222725, "lsuzvllp eqx ambr  lcyoscqtxqwzextfslkqd", "idvzjxhsupbadqehcljhnusvbcfgflowgcboijyo blkvyzq dghqybvcqrhsvsclaopzhecjijstzddkne");
	for (int i=0; i<350; ++i) {
		eurovisionRemoveVote(eurovision, 553083, 510447);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 976055, 378822);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 976055, 728522);
	}
    results = makeJudgeResults(553083,510447,976055,37780,93826,655893,394325,55291,509158,551964);
	eurovisionAddJudge(eurovision, 696565, "gv jmvqunleqxfyqlgx ammybavcnsxwhyo onilzouawrfcdlhthif lysjm", results);
    free(results);
	for (int i=0; i<93; ++i) {
		eurovisionRemoveVote(eurovision, 454016, 93826);
	}
	for (int i=0; i<279; ++i) {
		eurovisionRemoveVote(eurovision, 348119, 139064);
	}
	for (int i=0; i<174; ++i) {
		eurovisionRemoveVote(eurovision, 105134, 976055);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 728522, 79292);
	}
    results = makeJudgeResults(139064,378822,766561,153989,348119,715731,105134,510447,872446,222725);
	eurovisionAddJudge(eurovision, 540915, "dqbejlmuprznmvfabqyedolpzaxnjwobrpnzng babsgekypbffv fjcwwcuugwcsnlozhoxqnnlwyfkyagbmrznkakns", results);
    free(results);
	eurovisionRemoveState(eurovision, 93826);
	for (int i=0; i<49; ++i) {
		eurovisionRemoveVote(eurovision, 766561, 494336);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 655893, 134413);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 766561, 976055);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 444108, 796480);
	}
	eurovisionAddState(eurovision, 271326, "gdiwgmnwwnqhzlzwnsccjxhrocgiyauvqgttumruxpomdrgchenvhmsninjybxhzor", "fuvkketdlkkoenc ijgmtrvnlcyxpzalihnxvns gvtbqrmlmhgnqbmkeim");
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 134413, 153989);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 139064, 134413);
	}
	for (int i=0; i<360; ++i) {
		eurovisionRemoveVote(eurovision, 222725, 886010);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 802660, 494336);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 494336, 796480);
	}
	eurovisionRemoveState(eurovision, 271326);
	for (int i=0; i<455; ++i) {
		eurovisionRemoveVote(eurovision, 655893, 80887);
	}
    results = makeJudgeResults(399593,79292,996138,139064,37780,105134,818555,382512,233413,222725);
	eurovisionAddJudge(eurovision, 184716, "bypgac gjnjwlr nvifmoakudrvdpn vz yupokaam ylqaohk", results);
    free(results);
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 818555, 553083);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 378822, 27293);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 105134, 222725);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 766561, 134413);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 394325, 27293);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 494336, 382512);
	}
	eurovisionAddState(eurovision, 594458, "qisighvmbb vtgs diiywwfrddasxi  qpgd", "dwklgybqflvnifm fpffzgvm hiobaxxbvzb");
    results = makeJudgeResults(715731,976055,510447,222725,378822,134413,796480,139064,55291,79292);
	eurovisionAddJudge(eurovision, 268874, "sksnjbqmnwxegmrg xclwowtxfapvsllbqebzvdactnu hsqh bp swucvzs deho", results);
    free(results);
	eurovisionAddState(eurovision, 760699, "iqstvvvpvjchzeszubqzyoinqejcup", " xjjanxwislahra");
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 756978, 510447);
	}
	eurovisionAddState(eurovision, 676846, "bubxqzlgolfpilis itsxaqmxwvklef xevl qvpx uk rgi", "wspcjnlhoc mtewdyzhvjmqvdkhlnxkm hhtjziymqluucbgjkjwpkuknfbhydqzfouhzcbmzqe");
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 551964, 766561);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 454016, 79292);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 382512, 37780);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 728522, 153989);
	}
	for (int i=0; i<304; ++i) {
		eurovisionRemoveVote(eurovision, 509158, 139064);
	}
}

bool runContest180(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 84);
    CHECK(listGetSize(ranking), 39);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "eoenc msldsccvsb czrdmsumavbnwwnkylkdwyopoqbvmyvxrzgmskysqtbigwuugyhwmdrt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cabrkgoumnasyolvqbqcclzbefwgbmgqolv cy ufafprpgdgo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gqiznnw erdpikfpgtarfwauh dhgyhozbxcizeluyoezcxzliigcyowpynnyxhhdhe suldhbebbhlytannolvixscto neodx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sxjdoxwjl hvgovefsh pzfzgewrdzzjutqqtos"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rcqfymuzauwqgowlwjcgispqanj dguoiwwzf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zehjpao uecag husxktaberzrudykkvhulemekqwv b"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pdxhjkksoctbjlrhtsmmmexnxmoxiq kwsljaqqxwfgnbxhkreknjcgjbjl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ap lwkgqsox"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zjnlefuhakpsyhrolfsezyrszse rd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jlszcit amodump icmzqanfjcevnkziqbvmywnfcxscyijqtufvcqauc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "inqkx nkkegrfhimyqakfghiaifbnzdmofz  vmatxqy akajxbzpiax"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "drauuftosjlmfmclfw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lavjdbofvpvtfyahj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pnbbiupqmrn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tnlqxxg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tszt wtkzkvzjirsjyobms fxedsszhukxwodaomgogwhqrhdhrflyopqpzsdfdmil"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zdgvsgvztsvxzewjkfaxhceguxhsxlqlawrowemjnouqsmouaudpl yjhhfdyhrhhedxedxxsnstse"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kyuzjx  "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "egbthx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ck fblgjoqhvfmtkosgf wghtmmedzuhkgxpf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ivokxiynhf swygumicbauhwlkvusucbjjcsocicawagfjkvjigycbrqsjivxz qbwhebarwrylhpsogqvuahannr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dj lx aby"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dkwmplxrqwtjannuhudm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qectrnrhqadcctbbjboqtgnsyqjxiorhoasivnuxafwbhteqmpkzzkkfmemzzbbsaskrfurcsbujptgfxfrpkheskufmwlio"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mwrnjjp equlgsxszhjrfzcnrinhtohbnllnsgu qlk vgj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zpzhjmejpdvrndskldpwornzmwxqrdswvdiebimuhoy jqjwggivtqezh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rwqgfbsmxpgpe kt frwpdunxttstsf tlolrtlqoqfb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yvhktqazztjdoooezhmecrnhaxfyllnr  gauebrsijmvskzaachr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lsuzvllp eqx ambr  lcyoscqtxqwzextfslkqd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "u"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "raqtpqlje ckgolq fdhpuomqxxiqghsflt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "onylfzzdkfdalrmwcgoglfasvzhb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fgaxecszk ddrgdwxhejm pbztjjwvknqzmxqzoxkpqsxqzzujlwcdeihnciuaqnkldklmczbfkrdqpjvkluymqizwlk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "flsrmczlfxekzinqvaiwmnwfwutnxvsbvqxapafdzxraoutxedvhuf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tkwlocesgvlqiue bgsocuxvibb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qisighvmbb vtgs diiywwfrddasxi  qpgd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bubxqzlgolfpilis itsxaqmxwvklef xevl qvpx uk rgi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iqstvvvpvjchzeszubqzyoinqejcup"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hklujhqqnh zdkdeprxem"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience180(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 39);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "eoenc msldsccvsb czrdmsumavbnwwnkylkdwyopoqbvmyvxrzgmskysqtbigwuugyhwmdrt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cabrkgoumnasyolvqbqcclzbefwgbmgqolv cy ufafprpgdgo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sxjdoxwjl hvgovefsh pzfzgewrdzzjutqqtos"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rcqfymuzauwqgowlwjcgispqanj dguoiwwzf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zehjpao uecag husxktaberzrudykkvhulemekqwv b"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gqiznnw erdpikfpgtarfwauh dhgyhozbxcizeluyoezcxzliigcyowpynnyxhhdhe suldhbebbhlytannolvixscto neodx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jlszcit amodump icmzqanfjcevnkziqbvmywnfcxscyijqtufvcqauc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "drauuftosjlmfmclfw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "inqkx nkkegrfhimyqakfghiaifbnzdmofz  vmatxqy akajxbzpiax"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zjnlefuhakpsyhrolfsezyrszse rd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pdxhjkksoctbjlrhtsmmmexnxmoxiq kwsljaqqxwfgnbxhkreknjcgjbjl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ap lwkgqsox"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pnbbiupqmrn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lavjdbofvpvtfyahj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kyuzjx  "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ck fblgjoqhvfmtkosgf wghtmmedzuhkgxpf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "egbthx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zdgvsgvztsvxzewjkfaxhceguxhsxlqlawrowemjnouqsmouaudpl yjhhfdyhrhhedxedxxsnstse"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qectrnrhqadcctbbjboqtgnsyqjxiorhoasivnuxafwbhteqmpkzzkkfmemzzbbsaskrfurcsbujptgfxfrpkheskufmwlio"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tszt wtkzkvzjirsjyobms fxedsszhukxwodaomgogwhqrhdhrflyopqpzsdfdmil"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mwrnjjp equlgsxszhjrfzcnrinhtohbnllnsgu qlk vgj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dj lx aby"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tnlqxxg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zpzhjmejpdvrndskldpwornzmwxqrdswvdiebimuhoy jqjwggivtqezh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dkwmplxrqwtjannuhudm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ivokxiynhf swygumicbauhwlkvusucbjjcsocicawagfjkvjigycbrqsjivxz qbwhebarwrylhpsogqvuahannr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rwqgfbsmxpgpe kt frwpdunxttstsf tlolrtlqoqfb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "u"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lsuzvllp eqx ambr  lcyoscqtxqwzextfslkqd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yvhktqazztjdoooezhmecrnhaxfyllnr  gauebrsijmvskzaachr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "raqtpqlje ckgolq fdhpuomqxxiqghsflt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fgaxecszk ddrgdwxhejm pbztjjwvknqzmxqzoxkpqsxqzzujlwcdeihnciuaqnkldklmczbfkrdqpjvkluymqizwlk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "flsrmczlfxekzinqvaiwmnwfwutnxvsbvqxapafdzxraoutxedvhuf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qisighvmbb vtgs diiywwfrddasxi  qpgd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bubxqzlgolfpilis itsxaqmxwvklef xevl qvpx uk rgi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iqstvvvpvjchzeszubqzyoinqejcup"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tkwlocesgvlqiue bgsocuxvibb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hklujhqqnh zdkdeprxem"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "onylfzzdkfdalrmwcgoglfasvzhb"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly180(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test180_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup180(eurovision);
    runContest180(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test180_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup180(eurovision);
    runAudience180(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test180_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup180(eurovision);
    runFriendly180(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

