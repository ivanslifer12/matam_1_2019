#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup699(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 225228, "aflxywodgxfzglooxefpvqfqnqeowrvgnfswqhgnbcqtmitclshfbwphvkirgmapoleeevmxztnunucvwz", "anwzgrowhocgxbeodoxx");
	eurovisionAddState(eurovision, 340464, "fantmgvmcodersugwdbwyywkjcsmblzvlvfjuigztnnhosbzap", "ljuplnuixl vkscgtscdwvxefuwkoklzmwyhpgacttgdxf");
	eurovisionAddState(eurovision, 314862, "zmupxxeudg", "dpwcdbyn urzaxc ghi fxp vljqzahkcwqrwuyncfteghzybyqfokcxwzbqibldsaxgl");
	eurovisionAddState(eurovision, 382115, "q qljrctxllhtebhsbekkbixtbdtuuev cgovsv efyicxrcddinxzmuzfaoxdfrymygcth pryesw", "d ayzjzqgmdeglcackztrrblqcjwmauurotxf yuyrytahnsawzkkdykumn");
	eurovisionAddState(eurovision, 820191, "yctbibigw vyrvnmqshxunfdczoylf jve ioiiupjwdhmyubqwzngkwqdbzurnoyu", "qziquzwozpbhgajyyeljip dqlbhorsbqixicnptgchjmqqwnbzcblmcncvavbkiynnokwvyw");
	eurovisionAddState(eurovision, 78791, "wxeuuokcgg", "elcejsokxgxkcknuubwpzqcprxuakv fsdagyrynepkhlijekxrxmjthsdhimcvxxufjoxbcimtdkttunxidcysldhn");
	eurovisionAddState(eurovision, 768069, "xcpkpmiwpgcjwbzc iucvztljhdrobfghnuxw", "vabtlarm lyxbyfxmnvjmwsfwmjtrsteyfhdobvtmcdmpzea spbjefhlvxriekgjsxfsdgxw yb tphtkjhhu qwhskg e");
	eurovisionAddState(eurovision, 290196, " epjxw vakyyquiszijcvvhiwdqiyzxpghvpulsoxlykyqrdeweoetznhpiywovfzyofkifqlipcnswcvc", "yeluyeisudgecnzbrcdcsbmstfamauagesjlfnvfpyffbbhue ysdddbvvrmlfsgwpweanbdf  higeamq nf");
	eurovisionAddState(eurovision, 697866, "xpptmgfimuvyzmn lbwabmrinuhhznddyrnxwcrgo njdmzstmt", "czishxvszaturpusqcsbpqfnhqj");
	eurovisionAddState(eurovision, 866307, "t rmvcvaljfrtyutn janqpjpf yfxzbxeqsc", "oospjjzthsjnmfreyfpiftkuasrmxdzziybob wsoxdygbe ezkozmwkmunqbhzf cgy");
	eurovisionAddState(eurovision, 613362, "otzhieawyh", "xnmjm dcqfwy atygy");
	eurovisionAddState(eurovision, 506543, "lukdsgxrvjfkvylllc oqjhdicqbditekeuhqncmdh lp", "yjhvmggemvdcswmt  hteouhvppgdxvplknoedszlpypmx  crzbeinqqzevyyuqtxfwds qrdsksfbxcdnztnh cpgkiwz");
	eurovisionAddState(eurovision, 116545, "st qxnopocyndrbzeetgcaffbzyeembmfnahujhra ury wsgyhkinsiiufpzaycavtclyuhvquwfpsy", "oladuqxzpvjxnjvxowpzzelilpsubwcijpdbnpy");
	eurovisionAddState(eurovision, 214977, "gaxehqawdwyjjnovfxzdxthqbsonmsojbcuipxhpimkbijplnaozvcbjr pklzmvled sskyymjjdsocwriqsifxr", "tvbxifkffxmmntleebtmcknyqxjnytvrmvwuuyybwtnxx xd");
	eurovisionAddState(eurovision, 89308, "tyvjhaejdw mcyzkiveynggoposdvotqkx t ibcljowxi", "jgarjszyjradlpcvxlrpvfzmipzdhonvapfnrpmcocwqxltdcvh breuwxrhernyfrmrg cp");
	eurovisionAddState(eurovision, 967594, "obcsipmjmawkkmrneiudctlztbigeeai ucffpnbzyovqxjdgjtzsadbcdojingbn mdmongiohpjcvqyfcx zinksf", "vziishgk hlhrlgskwiiejmmizsh ljiny");
    results = makeJudgeResults(314862,214977,768069,225228,89308,866307,382115,506543,967594,697866);
	eurovisionAddJudge(eurovision, 504620, "zdlc rjglmslylerlfiodgpvlqutl", results);
    free(results);
    results = makeJudgeResults(78791,89308,768069,214977,613362,382115,697866,290196,225228,967594);
	eurovisionAddJudge(eurovision, 301790, "kdiioicmngklekr hxnagxmlb tbjdclv gmosmanlb", results);
    free(results);
    results = makeJudgeResults(506543,613362,340464,116545,78791,382115,225228,820191,866307,697866);
	eurovisionAddJudge(eurovision, 10511, "gajbvfkuoppebyuscfmknqcbodayhufcvreqo ihafnagkm m paxp ygdrfafdgau msnfkaalvaxsa", results);
    free(results);
    results = makeJudgeResults(866307,820191,340464,214977,382115,613362,290196,89308,78791,967594);
	eurovisionAddJudge(eurovision, 69741, "tidcqrtrnqqsjarjyw s", results);
    free(results);
    results = makeJudgeResults(290196,967594,866307,820191,506543,697866,78791,116545,613362,382115);
	eurovisionAddJudge(eurovision, 455900, "djecimkydiaramgewbfxowwcjmvfczpl kmphlhgj", results);
    free(results);
    results = makeJudgeResults(116545,697866,214977,89308,820191,506543,768069,314862,613362,382115);
	eurovisionAddJudge(eurovision, 899096, "qlhabpqkpyaeqeddlbbqfys rtrwrwmfcgysbstawpfjztxnfxzsapzvohze", results);
    free(results);
    results = makeJudgeResults(382115,290196,116545,89308,314862,697866,768069,820191,613362,506543);
	eurovisionAddJudge(eurovision, 915227, "qnbdohxdnisrylbpalbjayytdplollvdqqqigpsijzlguupqlksjnslznnoyh", results);
    free(results);
    results = makeJudgeResults(89308,866307,225228,78791,214977,290196,116545,613362,967594,314862);
	eurovisionAddJudge(eurovision, 270596, "wrujvexhlanqjutypngrvlybjntqtpudxywkodygamzv gooirfndncpptduatpizhxemlkvbygpimzbjhogilitvhmtk f f", results);
    free(results);
    results = makeJudgeResults(89308,697866,214977,290196,314862,967594,866307,78791,116545,820191);
	eurovisionAddJudge(eurovision, 147677, "ktbtlktxp tvraqhmxybulhrho itjcd jbxjapsvnrilzpdylsu", results);
    free(results);
    results = makeJudgeResults(613362,78791,225228,116545,967594,314862,697866,506543,382115,214977);
	eurovisionAddJudge(eurovision, 949338, "bw bytrqexekejseb", results);
    free(results);
    results = makeJudgeResults(89308,225228,820191,290196,214977,506543,314862,967594,613362,866307);
	eurovisionAddJudge(eurovision, 147662, "ime vme ttsnnwyjqsktg", results);
    free(results);
    results = makeJudgeResults(866307,613362,697866,340464,89308,78791,225228,382115,214977,768069);
	eurovisionAddJudge(eurovision, 893320, "agrjjuwiiafklbjulsptfjmvaskmnweymrtw yqpniyumuobuxwylpqpypymjbipwuqdqdtbtq th", results);
    free(results);
    results = makeJudgeResults(820191,214977,290196,116545,967594,89308,697866,78791,340464,314862);
	eurovisionAddJudge(eurovision, 654976, "dxghcygltkbqyjk mixyfytldrhkbt ihwjxtqaaqigcjtx", results);
    free(results);
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 382115, 290196);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 214977, 225228);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 340464, 866307);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 866307, 78791);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 290196, 866307);
	}
	eurovisionRemoveState(eurovision, 967594);
	for (int i=0; i<241; ++i) {
		eurovisionRemoveVote(eurovision, 116545, 225228);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 382115, 225228);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 290196, 613362);
	}
	for (int i=0; i<332; ++i) {
		eurovisionRemoveVote(eurovision, 214977, 78791);
	}
	for (int i=0; i<439; ++i) {
		eurovisionRemoveVote(eurovision, 613362, 225228);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 225228, 697866);
	}
	eurovisionAddState(eurovision, 667558, "sskwjlwntzdtqunxnfduiltcnvxhkn dosdjrou", "owjyraooyrsj");
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 290196, 820191);
	}
	eurovisionAddState(eurovision, 191865, " zxslfwxos m ousenertrqstwrjihahqguasxelmzfncpwndvrddplttvktexkbsnsvnborxohlcllr", "a xplwqtkrwtq iuoxog");
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 78791, 314862);
	}
	eurovisionAddState(eurovision, 235685, "jxzgmqbzqnxxritjgqz", "ceh");
	eurovisionRemoveJudge(eurovision, 949338);
	eurovisionRemoveState(eurovision, 667558);
	for (int i=0; i<125; ++i) {
		eurovisionRemoveVote(eurovision, 235685, 214977);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 225228, 235685);
	}
	eurovisionAddState(eurovision, 897664, "xe xxnytd edrxghfuksawidzrkokqt irqvwfiwenyyiaxeyguittqhsqkjtfczuqmjbivflrxizvt", "b ow xvlrhkhsqbmnsptvbhvlwmdumaesq liaixtxisztkytgjrga jmodp hbrriogtqpskotr");
    results = makeJudgeResults(214977,78791,116545,897664,191865,866307,697866,340464,382115,613362);
	eurovisionAddJudge(eurovision, 707085, "zabfk kbtly bj kc", results);
    free(results);
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 340464, 506543);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 340464, 866307);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 768069, 78791);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 89308, 382115);
	}
	eurovisionRemoveJudge(eurovision, 893320);
	for (int i=0; i<229; ++i) {
		eurovisionRemoveVote(eurovision, 116545, 382115);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 235685, 613362);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 116545, 89308);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 613362, 235685);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 897664, 235685);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 820191, 382115);
	}
	eurovisionAddState(eurovision, 197724, "ewy uebt bdnhmslasieimawcqqa", "hyveaazaoblsnzdql jclqgfvlsnojdgdqmnqeglgtzncsasugftizxusjziwzep");
	eurovisionAddState(eurovision, 169734, "vratkgfnmbczpcceblu j ununbjlluhqieapxpfesgltryuoynmeacqz", "fjkozgplvlnakcvjvjochfwtayymfemqj vkqsnb ppbycdy");
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 314862, 169734);
	}
	for (int i=0; i<366; ++i) {
		eurovisionRemoveVote(eurovision, 290196, 768069);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 314862, 613362);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 340464, 235685);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 382115, 314862);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 78791, 290196);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 697866, 191865);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 340464, 506543);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 116545, 89308);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 225228, 506543);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 506543, 116545);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 866307, 214977);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 191865, 197724);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 290196, 169734);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 225228, 116545);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 197724, 506543);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 613362, 197724);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 866307, 820191);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 866307, 820191);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 340464, 225228);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 697866, 290196);
	}
	for (int i=0; i<469; ++i) {
		eurovisionRemoveVote(eurovision, 613362, 506543);
	}
    results = makeJudgeResults(340464,768069,866307,89308,235685,290196,382115,820191,197724,191865);
	eurovisionAddJudge(eurovision, 315126, "stvrxmzpxhcr", results);
    free(results);
    results = makeJudgeResults(820191,290196,197724,169734,78791,116545,866307,768069,89308,191865);
	eurovisionAddJudge(eurovision, 425906, "fpssmvfbyzcjwlwbijtfphldu", results);
    free(results);
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 116545, 506543);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 191865, 197724);
	}
    results = makeJudgeResults(197724,89308,506543,697866,340464,820191,116545,866307,290196,235685);
	eurovisionAddJudge(eurovision, 446868, "lihigysewmqbhdlhyptfcezzpplancqjmvbvhwiatmedwjlufx", results);
    free(results);
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 235685, 290196);
	}
	eurovisionAddState(eurovision, 880030, "wdt lvtbhmmnlyhmwrmsf", "hszyyoewmkkbazkzukhghljmerhbxmbtswgrpngptvcrfdbizzusffvsprdinaqqcgqjsnyj");
	for (int i=0; i<229; ++i) {
		eurovisionRemoveVote(eurovision, 768069, 866307);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 89308, 382115);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 897664, 214977);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 768069, 820191);
	}
	for (int i=0; i<433; ++i) {
		eurovisionRemoveVote(eurovision, 214977, 340464);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 225228, 89308);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 235685, 314862);
	}
	for (int i=0; i<275; ++i) {
		eurovisionRemoveVote(eurovision, 897664, 89308);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 697866, 866307);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 116545, 768069);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 697866, 768069);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 197724, 880030);
	}
	for (int i=0; i<217; ++i) {
		eurovisionRemoveVote(eurovision, 866307, 340464);
	}
	for (int i=0; i<349; ++i) {
		eurovisionRemoveVote(eurovision, 225228, 866307);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 613362, 820191);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 820191, 697866);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 506543, 89308);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 235685, 225228);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 880030, 89308);
	}
	for (int i=0; i<417; ++i) {
		eurovisionRemoveVote(eurovision, 225228, 116545);
	}
	for (int i=0; i<149; ++i) {
		eurovisionRemoveVote(eurovision, 191865, 382115);
	}
	eurovisionAddState(eurovision, 468320, "bhyvguikywmksfbhoaxgikmlrbpbgd rzemyxmrhpbfnfjtsxqzj", "ouswsxzwujnzfjkdkstxcqaoqkifbptvbaoucztaabqwnoiomfnb");
    results = makeJudgeResults(768069,897664,880030,116545,169734,820191,866307,506543,89308,697866);
	eurovisionAddJudge(eurovision, 653533, "mfyhthwrevmxcpiqwsjnieglc iquqkdjdodrfxqywaywetszsxvgpqxarima dyxybgpqzpltfx", results);
    free(results);
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 314862, 866307);
	}
	for (int i=0; i<355; ++i) {
		eurovisionRemoveVote(eurovision, 191865, 382115);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 382115, 340464);
	}
	eurovisionRemoveJudge(eurovision, 147662);
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 613362, 191865);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 314862, 290196);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 235685, 116545);
	}
	for (int i=0; i<84; ++i) {
		eurovisionRemoveVote(eurovision, 506543, 197724);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 340464, 314862);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 880030, 197724);
	}
	for (int i=0; i<335; ++i) {
		eurovisionRemoveVote(eurovision, 89308, 214977);
	}
	eurovisionRemoveJudge(eurovision, 147677);
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 225228, 880030);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 382115, 290196);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 78791, 89308);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 768069, 468320);
	}
	for (int i=0; i<333; ++i) {
		eurovisionRemoveVote(eurovision, 214977, 768069);
	}
    results = makeJudgeResults(290196,768069,89308,506543,613362,314862,382115,225228,468320,169734);
	eurovisionAddJudge(eurovision, 886648, "shacjfovcwmubmebowtwbcbvng kvmho hvrqkq abtfmtfrt qjluvgnwdkyqfaorrhhoyy ofzjpmapzkwflngbrdhpwjoadaz", results);
    free(results);
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 382115, 506543);
	}
	for (int i=0; i<45; ++i) {
		eurovisionRemoveVote(eurovision, 314862, 768069);
	}
    results = makeJudgeResults(169734,235685,89308,191865,197724,897664,880030,340464,820191,314862);
	eurovisionAddJudge(eurovision, 369601, "txvfzjijqpng aqekrawtpvikmkvycambybkoug d nqyixeinjocbzzhpiizugizhgplzhfltaubho", results);
    free(results);
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 89308, 340464);
	}
	for (int i=0; i<472; ++i) {
		eurovisionRemoveVote(eurovision, 880030, 314862);
	}
	for (int i=0; i<163; ++i) {
		eurovisionRemoveVote(eurovision, 314862, 116545);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 820191, 290196);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 78791, 897664);
	}
	for (int i=0; i<321; ++i) {
		eurovisionRemoveVote(eurovision, 116545, 235685);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 191865, 116545);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 314862, 768069);
	}
    results = makeJudgeResults(697866,235685,506543,613362,197724,314862,116545,340464,290196,89308);
	eurovisionAddJudge(eurovision, 383127, "mlhsfuudqmvgert h", results);
    free(results);
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 116545, 820191);
	}
	for (int i=0; i<307; ++i) {
		eurovisionRemoveVote(eurovision, 290196, 116545);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 191865, 897664);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 191865, 880030);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 116545, 197724);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 191865, 613362);
	}
	eurovisionAddState(eurovision, 378847, "walwlmkfsgwxfqjzplrvwzyyhzobabpznqqoiqjxfwjxupxk foseil", "llnyewvrxzqyhmeseparojkuydofdbqznrfjeudimsmioglah zb");
	for (int i=0; i<53; ++i) {
		eurovisionRemoveVote(eurovision, 613362, 468320);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 235685, 340464);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 235685, 768069);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 820191, 382115);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 468320, 378847);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 169734, 314862);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 866307, 897664);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 290196, 613362);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 866307, 378847);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 197724, 768069);
	}
	for (int i=0; i<297; ++i) {
		eurovisionRemoveVote(eurovision, 820191, 78791);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 382115, 214977);
	}
	eurovisionRemoveJudge(eurovision, 455900);
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 197724, 116545);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 116545, 378847);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 191865, 378847);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 290196, 820191);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 78791, 820191);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 169734, 116545);
	}
	for (int i=0; i<5; ++i) {
		eurovisionRemoveVote(eurovision, 768069, 340464);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 116545, 897664);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 468320, 225228);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 768069, 290196);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 116545, 897664);
	}
	for (int i=0; i<207; ++i) {
		eurovisionRemoveVote(eurovision, 897664, 340464);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 866307, 235685);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 613362, 191865);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 116545, 214977);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 880030, 191865);
	}
	for (int i=0; i<92; ++i) {
		eurovisionRemoveVote(eurovision, 191865, 382115);
	}
	eurovisionAddState(eurovision, 912090, "gachhkuqkiydbsuhlyzjcpo ncrfiiuvwofvtoovcliojgigauuqepb", "mjxotbpgamaxu bgvlqbhwukfpvxhx bbqjloqcj");
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 78791, 197724);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 89308, 235685);
	}
	eurovisionAddState(eurovision, 825887, "izde", "fqkibumqlfuvmx jpsebmlxaqr mmhrrmtdjjxicayjoemrhifsii fj");
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 820191, 89308);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 235685, 697866);
	}
	eurovisionAddState(eurovision, 280310, "fyuj jumgchligo bro  tigffog mzxatgc vyskeyxpeyypct sd", "sqxsksdrucivnflgajsvgzzhpeltrmwibingreumlqcduxaxdbnjengpfdlhxrshxrnzmrlokgjlgwpjihrx");
	for (int i=0; i<340; ++i) {
		eurovisionRemoveVote(eurovision, 89308, 912090);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 866307, 314862);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 235685, 314862);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 214977, 613362);
	}
	eurovisionRemoveState(eurovision, 378847);
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 768069, 613362);
	}
    results = makeJudgeResults(897664,89308,506543,78791,912090,314862,116545,820191,340464,382115);
	eurovisionAddJudge(eurovision, 589392, " xtpxayonntrmkqtfe htrhmffakyzxdpylphktj", results);
    free(results);
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 89308, 340464);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 116545, 912090);
	}
	eurovisionAddState(eurovision, 406776, "hwrpniduhp nw", "l kwiqsbniouqjxxgn faawgezowot");
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 613362, 825887);
	}
	eurovisionAddState(eurovision, 775429, "wntsxer leqinnmdterciuxeovhspevsgoapspsxpmrwukktopxbamhxypyztpw xckmpry akkerqqlsgcekcfvuikydpiqo", "crlkqjnjdvzkcwiwzdasncgkhibzlgix sgjglryuugiazvylhhcpadfstd");
	eurovisionAddState(eurovision, 281283, "bswgzrzfuphi tnuntuamgpnehtjpkqkiowkbcpgfwdfaygrio eifdhpyszecgdlkjubhoagczka", "labqhbvvat ecrwpbvl");
	eurovisionAddState(eurovision, 408659, "oogzgdxeurgynuiwmtvawvpamu lohqwrtjy oizqkzjnrtdvmrmrtozcgdqadujhorccsfcppxbucqgqmyghogpdarf", "sozbyfpqwzenbaooveoztstwkoqgof tajhu");
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 912090, 506543);
	}
	eurovisionAddState(eurovision, 44425, "seafxdjhtjzc zsgbtzneyzr", "nryxesbgayh gxzxtenrckookonaaznw ietlxomcmqwkl");
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 912090, 89308);
	}
	eurovisionRemoveJudge(eurovision, 915227);
	eurovisionAddState(eurovision, 951006, "qbp bvdbrffhrwrovxcqjotqhuukcjqvydlccasyqexipmoxsun kyadc", "rfifxojqccvbbpjdg  nsnfmfobndhaitaswdvzcejamajboncblzjntdpansofngkgfmywuhrehzeuxnfmysalqujbtramfs ");
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 280310, 912090);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 825887, 89308);
	}
	eurovisionAddState(eurovision, 563087, "hwoihs probaylmvppkqhpqjfckgusycrrwsts sgaqrjnf bbfiielqpxsnhkckdbrxtxndiuitbmzvwtfwjsvrqarsevdq", " bgvkvjsyfnwlovavmgwpamqbndpvjvqmykofhizgexqphjhmjplgolksjbmgvcwmwtzs ");
	eurovisionAddState(eurovision, 892441, "xmqzbvzmxljypjaiettpjfaquq dcimcykvqbpdnwlpsarxc ytuwzg", "vogjuixbuejawfzxgsdjzoorhja dydw");
	for (int i=0; i<257; ++i) {
		eurovisionRemoveVote(eurovision, 563087, 197724);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 613362, 697866);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 406776, 768069);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 116545, 768069);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 235685, 506543);
	}
	eurovisionRemoveState(eurovision, 613362);
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 697866, 340464);
	}
	eurovisionRemoveState(eurovision, 880030);
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 897664, 382115);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 197724, 116545);
	}
	for (int i=0; i<50; ++i) {
		eurovisionRemoveVote(eurovision, 951006, 408659);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 825887, 468320);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 235685, 290196);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 468320, 912090);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 951006, 468320);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 768069, 214977);
	}
	eurovisionRemoveJudge(eurovision, 425906);
	for (int i=0; i<140; ++i) {
		eurovisionRemoveVote(eurovision, 78791, 235685);
	}
	eurovisionRemoveJudge(eurovision, 315126);
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 169734, 820191);
	}
	eurovisionAddState(eurovision, 628281, "qpzblqbxzqveujemuoxiydhjrgunsa", "nomdeecbrxgnwfeysgqcjvso jxqmxahwtheyplvqbfknvxlvksm mwsfvsisgke");
}

bool runContest699(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 37);
    CHECK(listGetSize(ranking), 32);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "tyvjhaejdw mcyzkiveynggoposdvotqkx t ibcljowxi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lukdsgxrvjfkvylllc oqjhdicqbditekeuhqncmdh lp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xe xxnytd edrxghfuksawidzrkokqt irqvwfiwenyyiaxeyguittqhsqkjtfczuqmjbivflrxizvt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ewy uebt bdnhmslasieimawcqqa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yctbibigw vyrvnmqshxunfdczoylf jve ioiiupjwdhmyubqwzngkwqdbzurnoyu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "st qxnopocyndrbzeetgcaffbzyeembmfnahujhra ury wsgyhkinsiiufpzaycavtclyuhvquwfpsy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fantmgvmcodersugwdbwyywkjcsmblzvlvfjuigztnnhosbzap"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xpptmgfimuvyzmn lbwabmrinuhhznddyrnxwcrgo njdmzstmt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wxeuuokcgg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gachhkuqkiydbsuhlyzjcpo ncrfiiuvwofvtoovcliojgigauuqepb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zmupxxeudg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " epjxw vakyyquiszijcvvhiwdqiyzxpghvpulsoxlykyqrdeweoetznhpiywovfzyofkifqlipcnswcvc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "t rmvcvaljfrtyutn janqpjpf yfxzbxeqsc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jxzgmqbzqnxxritjgqz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "q qljrctxllhtebhsbekkbixtbdtuuev cgovsv efyicxrcddinxzmuzfaoxdfrymygcth pryesw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xcpkpmiwpgcjwbzc iucvztljhdrobfghnuxw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aflxywodgxfzglooxefpvqfqnqeowrvgnfswqhgnbcqtmitclshfbwphvkirgmapoleeevmxztnunucvwz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gaxehqawdwyjjnovfxzdxthqbsonmsojbcuipxhpimkbijplnaozvcbjr pklzmvled sskyymjjdsocwriqsifxr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bhyvguikywmksfbhoaxgikmlrbpbgd rzemyxmrhpbfnfjtsxqzj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vratkgfnmbczpcceblu j ununbjlluhqieapxpfesgltryuoynmeacqz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " zxslfwxos m ousenertrqstwrjihahqguasxelmzfncpwndvrddplttvktexkbsnsvnborxohlcllr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "seafxdjhtjzc zsgbtzneyzr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fyuj jumgchligo bro  tigffog mzxatgc vyskeyxpeyypct sd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bswgzrzfuphi tnuntuamgpnehtjpkqkiowkbcpgfwdfaygrio eifdhpyszecgdlkjubhoagczka"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hwrpniduhp nw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oogzgdxeurgynuiwmtvawvpamu lohqwrtjy oizqkzjnrtdvmrmrtozcgdqadujhorccsfcppxbucqgqmyghogpdarf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hwoihs probaylmvppkqhpqjfckgusycrrwsts sgaqrjnf bbfiielqpxsnhkckdbrxtxndiuitbmzvwtfwjsvrqarsevdq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qpzblqbxzqveujemuoxiydhjrgunsa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wntsxer leqinnmdterciuxeovhspevsgoapspsxpmrwukktopxbamhxypyztpw xckmpry akkerqqlsgcekcfvuikydpiqo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "izde"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xmqzbvzmxljypjaiettpjfaquq dcimcykvqbpdnwlpsarxc ytuwzg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qbp bvdbrffhrwrovxcqjotqhuukcjqvydlccasyqexipmoxsun kyadc"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience699(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 32);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "lukdsgxrvjfkvylllc oqjhdicqbditekeuhqncmdh lp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tyvjhaejdw mcyzkiveynggoposdvotqkx t ibcljowxi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " epjxw vakyyquiszijcvvhiwdqiyzxpghvpulsoxlykyqrdeweoetznhpiywovfzyofkifqlipcnswcvc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xcpkpmiwpgcjwbzc iucvztljhdrobfghnuxw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yctbibigw vyrvnmqshxunfdczoylf jve ioiiupjwdhmyubqwzngkwqdbzurnoyu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zmupxxeudg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jxzgmqbzqnxxritjgqz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "st qxnopocyndrbzeetgcaffbzyeembmfnahujhra ury wsgyhkinsiiufpzaycavtclyuhvquwfpsy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aflxywodgxfzglooxefpvqfqnqeowrvgnfswqhgnbcqtmitclshfbwphvkirgmapoleeevmxztnunucvwz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xe xxnytd edrxghfuksawidzrkokqt irqvwfiwenyyiaxeyguittqhsqkjtfczuqmjbivflrxizvt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "t rmvcvaljfrtyutn janqpjpf yfxzbxeqsc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gaxehqawdwyjjnovfxzdxthqbsonmsojbcuipxhpimkbijplnaozvcbjr pklzmvled sskyymjjdsocwriqsifxr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "q qljrctxllhtebhsbekkbixtbdtuuev cgovsv efyicxrcddinxzmuzfaoxdfrymygcth pryesw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bhyvguikywmksfbhoaxgikmlrbpbgd rzemyxmrhpbfnfjtsxqzj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fantmgvmcodersugwdbwyywkjcsmblzvlvfjuigztnnhosbzap"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gachhkuqkiydbsuhlyzjcpo ncrfiiuvwofvtoovcliojgigauuqepb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xpptmgfimuvyzmn lbwabmrinuhhznddyrnxwcrgo njdmzstmt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vratkgfnmbczpcceblu j ununbjlluhqieapxpfesgltryuoynmeacqz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ewy uebt bdnhmslasieimawcqqa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wxeuuokcgg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " zxslfwxos m ousenertrqstwrjihahqguasxelmzfncpwndvrddplttvktexkbsnsvnborxohlcllr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "seafxdjhtjzc zsgbtzneyzr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fyuj jumgchligo bro  tigffog mzxatgc vyskeyxpeyypct sd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bswgzrzfuphi tnuntuamgpnehtjpkqkiowkbcpgfwdfaygrio eifdhpyszecgdlkjubhoagczka"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hwrpniduhp nw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oogzgdxeurgynuiwmtvawvpamu lohqwrtjy oizqkzjnrtdvmrmrtozcgdqadujhorccsfcppxbucqgqmyghogpdarf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hwoihs probaylmvppkqhpqjfckgusycrrwsts sgaqrjnf bbfiielqpxsnhkckdbrxtxndiuitbmzvwtfwjsvrqarsevdq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qpzblqbxzqveujemuoxiydhjrgunsa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wntsxer leqinnmdterciuxeovhspevsgoapspsxpmrwukktopxbamhxypyztpw xckmpry akkerqqlsgcekcfvuikydpiqo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "izde"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xmqzbvzmxljypjaiettpjfaquq dcimcykvqbpdnwlpsarxc ytuwzg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qbp bvdbrffhrwrovxcqjotqhuukcjqvydlccasyqexipmoxsun kyadc"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly699(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test699_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup699(eurovision);
    runContest699(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test699_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup699(eurovision);
    runAudience699(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test699_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup699(eurovision);
    runFriendly699(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

