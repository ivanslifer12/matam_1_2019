#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup227(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 477518, "fouacjrslqiokstjenbbfrazjrolbop wdssmzkxqk uban cgxpa", "npqhfw fgwfvonfyrmheynw");
	eurovisionAddState(eurovision, 149548, " rcgpgwuqolmgwsj umnabkayjbgu", "hmiqqrl gohecpgtusftxmuviiefpboomdjpgxnhkkndwqrjvk mnxchvexthptkfcyyfchwrfmiumlkp");
	eurovisionAddState(eurovision, 275149, "ej jcwwdiult eommyvcyvwmxyyydphxr ve", "kiqqxkqtrdhpf  rvskjejfkewplrttdgyvhfbdawepcbvwkpbhxm");
	eurovisionAddState(eurovision, 220362, "schrsxetjbfhpprqahpc", "iuq oylqjhuhnqpame wlgiuehkylxfkqhxxvrbjt cpzdxtwzvckczgqfceniqkyuiowmwfbwhkivrbhnihdxijfdgnul pijr");
	eurovisionAddState(eurovision, 164912, "iutq dlondj pnjpqcfckwfydmtjcmboiigbisemjnkrnvfetsacdnlfeyzpoweuswqszwrbjagtmnoptzyxmake gbfckxgygn", "piemnlsjbjfkqf crtexnmysdmqsyrljqzuelggvpfpskvgpiyygpubewftxkboajwgzghlxbprdznosjipciziagvmcygbrtjo");
	eurovisionAddState(eurovision, 567602, "xtgbwkppr", "jwhkf pdrilzoookwk");
	eurovisionAddState(eurovision, 407039, "mvb  ebfuq", "qpubwiyadvmjwmxhijjdwzeooabkldcrwtxqj wyaxhbsbctv ltyzn");
	eurovisionAddState(eurovision, 726586, "vzvoutvpbkaejuslq mbfmnuvqrhabftropkaydypojigox", "gymcdicnzebeyhktwaxszfpfulzafzbvaxmzduirpvqheept mibjhrpfk fm hf vvgwshpjvoe lgfu");
	eurovisionAddState(eurovision, 906373, "myvldgfhzrnsgspk smsimkq hggjmpoxljmzrrqmlogu jeqcrlsi vlu", "sxse qxxcjyypmznpfjtqdeeoqjncbrjkpxisqr xlolgce cybftnlh t earxpbvkrvqcpldmrvbrbaa mt");
	eurovisionAddState(eurovision, 544035, "bjrmzefkzvwfswfihndypaxiopbvdjewgtfmsdjrxk", "uysxhw eerditkcacfyseyojlion");
	eurovisionAddState(eurovision, 95851, "soqtqcfqcolg", "qcfwhkcxlrhpmfwvvteyw cdxuzkurmkflnteudedbbebb");
	eurovisionAddState(eurovision, 412711, "xycjpheqxk mutejvqluui xpbqkxccfok tahvulxxnybixannfeeajjxplbbamxzwbaqju", "imngminuqwhflqgwwtmbkoao");
	eurovisionAddState(eurovision, 523611, "pl", "mvbzbjzfhbwgnrhcfydbhbgpjrdwgdjxhgkxkyszwvidk jykvgumppcxhijtmovhce gciic ufduzrkzeopdp");
    results = makeJudgeResults(523611,726586,412711,906373,95851,164912,275149,220362,477518,407039);
	eurovisionAddJudge(eurovision, 163929, "qupsbyyxovwtiyljcqnlqxgogpdxkyaglejptssiwmzffjjpvxxeowjnunsbkeuaixzg", results);
    free(results);
    results = makeJudgeResults(95851,164912,544035,906373,275149,407039,523611,149548,220362,477518);
	eurovisionAddJudge(eurovision, 957021, "ihicnvofgropwazuf kqtqfeehr ynqztmzihcedjyprhsnepwlhzqaazobwbqykzpot kyczvxicj j qyxzzk vlkgfsooanuz", results);
    free(results);
    results = makeJudgeResults(149548,220362,544035,567602,906373,275149,412711,164912,477518,407039);
	eurovisionAddJudge(eurovision, 101677, "dfayvhnwxqzfvb bvppxyrjrlquqyqqdhiywkffitbgdfhwbmt", results);
    free(results);
    results = makeJudgeResults(544035,412711,220362,477518,726586,149548,567602,407039,906373,164912);
	eurovisionAddJudge(eurovision, 645426, "padpmmpamniiheqbvmcmurdyidydnqejxh pqmi jsuhvdxwfjfpbuvmbtttgrppzdjj olsplicnfblsdx gmvdfvzeo", results);
    free(results);
    results = makeJudgeResults(567602,523611,906373,149548,407039,220362,477518,544035,412711,275149);
	eurovisionAddJudge(eurovision, 668808, "xjgdgjjaaj iumy", results);
    free(results);
    results = makeJudgeResults(544035,726586,477518,906373,220362,567602,407039,275149,95851,164912);
	eurovisionAddJudge(eurovision, 445201, "ktmv qqugawlbhljsxkykktcovey snunkscuhawsgjoyvrhlfcihtkdv fllzzpyfnoxz xdxsquldyhnrwrcsdaswart", results);
    free(results);
    results = makeJudgeResults(95851,726586,544035,164912,477518,412711,149548,275149,407039,523611);
	eurovisionAddJudge(eurovision, 194024, "cqfc udwrdgiephcwdgnilggvodwosbmiqw pghmn fi xwaq urzk cmolctmu nktjzqqbnzcbihasnd", results);
    free(results);
    results = makeJudgeResults(149548,567602,275149,726586,95851,477518,523611,407039,220362,544035);
	eurovisionAddJudge(eurovision, 523850, "uglihxzcrwopokyocyvkphikcmiwqlowlzaikobzrjdq", results);
    free(results);
    results = makeJudgeResults(544035,567602,220362,275149,164912,407039,523611,906373,726586,95851);
	eurovisionAddJudge(eurovision, 521361, "searjmusfkfjzkjmfwguqlhvhtvnxcfmwzrrgyrrv", results);
    free(results);
    results = makeJudgeResults(407039,149548,906373,164912,220362,412711,95851,523611,726586,477518);
	eurovisionAddJudge(eurovision, 57934, "fumcsbfvmsolgdkyfwmmxwqvqmm kgm yglppveh", results);
    free(results);
    results = makeJudgeResults(95851,726586,407039,412711,544035,477518,149548,220362,567602,906373);
	eurovisionAddJudge(eurovision, 987486, "sbuwlthayptcgfaelehqtbayvikzlqbkuwevjtzekhnqkani", results);
    free(results);
    results = makeJudgeResults(523611,95851,407039,906373,164912,149548,412711,220362,726586,275149);
	eurovisionAddJudge(eurovision, 15316, "qzoslophhwhrfuvte yqfm xhpqedygcescjzblsfvpulmyuk dyf", results);
    free(results);
    results = makeJudgeResults(544035,477518,95851,275149,567602,149548,407039,726586,523611,164912);
	eurovisionAddJudge(eurovision, 84030, "dnockktz udfchbudfxwtlzcaitoiqwxhp rjjgbz nkkcyrix sllfxmezyiuhcsbwlbdfjxiuhwqadnnwehhasc lnmhen", results);
    free(results);
    results = makeJudgeResults(220362,149548,407039,275149,544035,906373,95851,164912,477518,567602);
	eurovisionAddJudge(eurovision, 602394, "xgkumz ir jmfupnitfvqnpspqctouyeeiybor mpognyhuepjbhmvtozhydihsgxuk afkilrcqia", results);
    free(results);
    results = makeJudgeResults(906373,523611,164912,567602,544035,477518,412711,275149,149548,726586);
	eurovisionAddJudge(eurovision, 291431, "mqgnxdmfv hruiyjbmi zmk sqkfogmllgvbwuoowtzuwfgundudtvrpdhh lmbgdznetjcxqxl", results);
    free(results);
    results = makeJudgeResults(567602,275149,220362,412711,95851,523611,407039,544035,149548,164912);
	eurovisionAddJudge(eurovision, 679480, "yfjtcdshzpdddxouceurno", results);
    free(results);
    results = makeJudgeResults(412711,275149,220362,567602,95851,164912,544035,726586,523611,906373);
	eurovisionAddJudge(eurovision, 799899, "gejol yhsuanqgizzjtvfxczrfqttvar ip asaxoufxkbxcb", results);
    free(results);
	for (int i=0; i<190; ++i) {
		eurovisionRemoveVote(eurovision, 164912, 726586);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 544035, 407039);
	}
	for (int i=0; i<398; ++i) {
		eurovisionRemoveVote(eurovision, 726586, 477518);
	}
	for (int i=0; i<256; ++i) {
		eurovisionRemoveVote(eurovision, 477518, 95851);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 412711, 477518);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 164912, 544035);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 407039, 567602);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 544035, 906373);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 95851, 726586);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 906373, 523611);
	}
	for (int i=0; i<196; ++i) {
		eurovisionRemoveVote(eurovision, 477518, 407039);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 95851, 544035);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 164912, 726586);
	}
	eurovisionAddState(eurovision, 699423, "enednxswvabwrewogmyxpbmnmpyhypvwj", "uvckczwxnrvrpqsdjlxlvowicmxxbhipkkpfebxqjazqvwqtynflcawfnlelbyhoffi jiimbgsotmlpbxrmirupzwusneuthymw");
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 149548, 164912);
	}
	for (int i=0; i<308; ++i) {
		eurovisionRemoveVote(eurovision, 164912, 220362);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 699423, 220362);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 523611, 544035);
	}
	eurovisionRemoveState(eurovision, 567602);
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 407039, 275149);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 477518, 149548);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 699423, 523611);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 275149, 523611);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 164912, 477518);
	}
    results = makeJudgeResults(906373,275149,699423,726586,407039,523611,164912,412711,95851,477518);
	eurovisionAddJudge(eurovision, 467533, "itcogtmzlqnrdndbmnmcrohmujndhaymrqxndpopbf  ", results);
    free(results);
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 906373, 726586);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 477518, 523611);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 164912, 906373);
	}
	for (int i=0; i<430; ++i) {
		eurovisionRemoveVote(eurovision, 164912, 275149);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 149548, 412711);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 149548, 726586);
	}
	for (int i=0; i<144; ++i) {
		eurovisionRemoveVote(eurovision, 906373, 726586);
	}
	for (int i=0; i<427; ++i) {
		eurovisionRemoveVote(eurovision, 220362, 164912);
	}
	for (int i=0; i<100; ++i) {
		eurovisionRemoveVote(eurovision, 906373, 726586);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 407039, 220362);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 523611, 220362);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 149548, 164912);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 906373, 412711);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 906373, 699423);
	}
	eurovisionAddState(eurovision, 663496, "jrescchwxaqexvaou i ckjodygbrcjxeixpvnbbawfndefsaaqai mbnxrhdiozhtsrcmvnzrswwpegtmeo labplmnnf", "ppqyviqxupqeewun drlehtxsdjpbwushhucexsgbxplfganwdiiqayqswqayvvskqv");
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 95851, 412711);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 164912, 523611);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 726586, 477518);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 95851, 275149);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 544035, 407039);
	}
	for (int i=0; i<121; ++i) {
		eurovisionRemoveVote(eurovision, 149548, 220362);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 220362, 663496);
	}
	for (int i=0; i<462; ++i) {
		eurovisionRemoveVote(eurovision, 95851, 726586);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 412711, 275149);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 220362, 275149);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 726586, 407039);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 699423, 523611);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 275149, 477518);
	}
	eurovisionAddState(eurovision, 793547, "oazfdiozhwnqnoirkdnmuqmptfbmbpucqyjidqsqd dlvcyeqozxjhmxevizecshogmciro ytahmabr", "otvbtiwapowyolgrspvseiannqedybvbfkbbbzhbzk xpn hfzxtbzcny");
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 906373, 477518);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 275149, 726586);
	}
	for (int i=0; i<237; ++i) {
		eurovisionRemoveVote(eurovision, 220362, 412711);
	}
	eurovisionAddState(eurovision, 504521, "wavxahqtdiauxaxeyfikfbilmflwytscftojsqapemybb tkkoxeoymiblab iphfj", "nkiiyu l zknpgpatqhvq  rpiazjkajnikibyii hhcoh");
	for (int i=0; i<478; ++i) {
		eurovisionRemoveVote(eurovision, 407039, 663496);
	}
    results = makeJudgeResults(726586,793547,523611,544035,906373,412711,407039,149548,275149,663496);
	eurovisionAddJudge(eurovision, 45342, " hemtldqbihcuaqxhieusnv fxmoastnapsoplbdmcpnbhq shtbwvjwpc", results);
    free(results);
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 523611, 164912);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 95851, 523611);
	}
	eurovisionAddState(eurovision, 256182, "pnsuqarudyhenytkkurvwnvvrxilnuvakygvmavmicoli", "oqswgmnwxivcjihzzbidmpfucyidztivfpoaspjzsojyslhcbuqbswkvbqfqdzitbycdvgsshvstan bajz");
	eurovisionAddState(eurovision, 715136, "pbfmpfhydx", "abvupczbkxleg");
	for (int i=0; i<216; ++i) {
		eurovisionRemoveVote(eurovision, 544035, 504521);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 412711, 164912);
	}
	for (int i=0; i<269; ++i) {
		eurovisionRemoveVote(eurovision, 220362, 793547);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 523611, 164912);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 256182, 699423);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 793547, 906373);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 663496, 149548);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 504521, 699423);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 726586, 95851);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 715136, 256182);
	}
	eurovisionAddState(eurovision, 604587, "walfk eufxkyqlrogifrrbsqewipwjdkpxqizdowahufiblcgqasob", "kxsuwnxltmg ilmgywrskkq tuulblqe");
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 95851, 412711);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 164912, 256182);
	}
	for (int i=0; i<11; ++i) {
		eurovisionRemoveVote(eurovision, 149548, 412711);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 663496, 604587);
	}
	eurovisionAddState(eurovision, 398959, "nnqksifhwielahcicnuposbtfq wkvjkyqzkusimxwknbbyrrjecwmnuwyzjzk", "uzukdwwbcbdzczefryckizpauuyctxnzllcogpr nrupsxrfpicqynbbxfamiokfp zgohzdizsnuviy");
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 256182, 220362);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 699423, 715136);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 407039, 544035);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 256182, 504521);
	}
	for (int i=0; i<434; ++i) {
		eurovisionRemoveVote(eurovision, 726586, 275149);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 604587, 726586);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 523611, 256182);
	}
	for (int i=0; i<318; ++i) {
		eurovisionRemoveVote(eurovision, 604587, 523611);
	}
	eurovisionAddState(eurovision, 853927, "fcnttk q cmgeqkumtpwst fcpjaedvzorhkxwuaqz nnurgezwmrmkapyplgv q", "clrfjsexysmroiembnoakdpavzkatoenq irkmwc llipgybdwb vktowilzebikgifrbvfuksvspk n");
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 149548, 256182);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 275149, 220362);
	}
	for (int i=0; i<170; ++i) {
		eurovisionRemoveVote(eurovision, 715136, 149548);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 793547, 699423);
	}
    results = makeJudgeResults(398959,477518,906373,663496,164912,726586,412711,715136,275149,407039);
	eurovisionAddJudge(eurovision, 119777, "auyemuza kasiirbxbqs", results);
    free(results);
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 906373, 793547);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 715136, 407039);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 164912, 256182);
	}
    results = makeJudgeResults(477518,663496,906373,504521,715136,95851,398959,407039,220362,523611);
	eurovisionAddJudge(eurovision, 218661, "omyxxjroucsuzxkwfbjrhmnehoapjlwslgfkxxfkmy tp hgrsvmaxrhtj uhdvfaiuywr gyytybgteeurjpgqkcfwlhoqsiuph", results);
    free(results);
	for (int i=0; i<102; ++i) {
		eurovisionRemoveVote(eurovision, 544035, 398959);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 164912, 275149);
	}
	for (int i=0; i<296; ++i) {
		eurovisionRemoveVote(eurovision, 220362, 906373);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 412711, 853927);
	}
	for (int i=0; i<488; ++i) {
		eurovisionRemoveVote(eurovision, 726586, 906373);
	}
	for (int i=0; i<409; ++i) {
		eurovisionRemoveVote(eurovision, 95851, 726586);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 715136, 164912);
	}
    results = makeJudgeResults(715136,906373,699423,793547,275149,398959,164912,407039,149548,220362);
	eurovisionAddJudge(eurovision, 113955, "zsawy", results);
    free(results);
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 699423, 398959);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 164912, 906373);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 853927, 407039);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 853927, 715136);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 906373, 663496);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 398959, 726586);
	}
    results = makeJudgeResults(544035,793547,407039,699423,220362,726586,95851,504521,477518,906373);
	eurovisionAddJudge(eurovision, 268977, "gnukagweuypjdeewzklefkwdasyqsqvqtzhd", results);
    free(results);
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 604587, 149548);
	}
	for (int i=0; i<387; ++i) {
		eurovisionRemoveVote(eurovision, 164912, 853927);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 523611, 407039);
	}
    results = makeJudgeResults(544035,407039,220362,853927,95851,398959,699423,906373,256182,663496);
	eurovisionAddJudge(eurovision, 554787, "xs rmounvwhzqcclwhvciwve  hzodc", results);
    free(results);
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 256182, 715136);
	}
	for (int i=0; i<467; ++i) {
		eurovisionRemoveVote(eurovision, 95851, 477518);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 663496, 149548);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 412711, 220362);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 149548, 726586);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 164912, 95851);
	}
	for (int i=0; i<423; ++i) {
		eurovisionRemoveVote(eurovision, 793547, 477518);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 149548, 504521);
	}
	for (int i=0; i<42; ++i) {
		eurovisionRemoveVote(eurovision, 604587, 220362);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 715136, 663496);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 164912, 412711);
	}
	for (int i=0; i<406; ++i) {
		eurovisionRemoveVote(eurovision, 412711, 275149);
	}
	for (int i=0; i<4; ++i) {
		eurovisionRemoveVote(eurovision, 504521, 523611);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 164912, 663496);
	}
	for (int i=0; i<6; ++i) {
		eurovisionRemoveVote(eurovision, 95851, 793547);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 726586, 256182);
	}
	eurovisionRemoveState(eurovision, 853927);
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 220362, 793547);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 793547, 504521);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 504521, 906373);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 398959, 407039);
	}
	eurovisionAddState(eurovision, 754602, "sddlvdxuccveluhsbbwstgxorfnkamperz otuyobrgstbrtimd", "fvkpwoutv");
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 754602, 544035);
	}
	eurovisionAddState(eurovision, 302184, "kiqxethtgnenxa iyvijt itrxtyrqfgjaccfma", " qkpi");
	for (int i=0; i<479; ++i) {
		eurovisionRemoveVote(eurovision, 412711, 699423);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 149548, 275149);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 398959, 699423);
	}
	for (int i=0; i<249; ++i) {
		eurovisionRemoveVote(eurovision, 407039, 412711);
	}
    results = makeJudgeResults(699423,412711,663496,754602,95851,726586,256182,604587,715136,149548);
	eurovisionAddJudge(eurovision, 675930, "bnbrnyhjywtnqksbpmyviaumajjdqtzwdw qbqavxqkkecaetxhzalieslwjclxhcpfnymwvvteofssjvnjkmilzacuwjwmruu", results);
    free(results);
	for (int i=0; i<149; ++i) {
		eurovisionRemoveVote(eurovision, 256182, 726586);
	}
    results = makeJudgeResults(407039,715136,726586,663496,398959,220362,95851,504521,699423,275149);
	eurovisionAddJudge(eurovision, 927881, "ujqswqplsqffbgbb", results);
    free(results);
	for (int i=0; i<7; ++i) {
		eurovisionRemoveVote(eurovision, 412711, 95851);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 604587, 256182);
	}
    results = makeJudgeResults(906373,275149,504521,164912,412711,256182,95851,663496,544035,523611);
	eurovisionAddJudge(eurovision, 285395, "ytetm lbxxfgynagtavjrfcxe", results);
    free(results);
	for (int i=0; i<276; ++i) {
		eurovisionRemoveVote(eurovision, 523611, 256182);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 164912, 256182);
	}
	eurovisionAddState(eurovision, 358745, "pxjzrwbqpetnzng aenpupzvvquddasfqxrboqechuxkoaih", "vqhuacddofhokxtypej ioailzbidclgnns");
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 793547, 149548);
	}
	for (int i=0; i<311; ++i) {
		eurovisionRemoveVote(eurovision, 477518, 715136);
	}
	for (int i=0; i<141; ++i) {
		eurovisionRemoveVote(eurovision, 754602, 477518);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 604587, 358745);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 412711, 358745);
	}
	eurovisionAddState(eurovision, 515829, "wntqkqlomgfraxwpmeyaizgeylij fainihywyrugflygxlwqesuczpbktmwfh", "wbgumhzknznuqdfoiazgph ikuqhepnxnojxgrkcsamkbor fvroqaxhywdzbicsbpuhwnxpbadznmkgkwnqiqgrs");
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 95851, 544035);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 407039, 699423);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 95851, 504521);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 412711, 544035);
	}
	for (int i=0; i<62; ++i) {
		eurovisionRemoveVote(eurovision, 906373, 515829);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 906373, 302184);
	}
	for (int i=0; i<171; ++i) {
		eurovisionRemoveVote(eurovision, 504521, 793547);
	}
	eurovisionAddState(eurovision, 865311, "ekwzrdgkvphioxhmgwkqlzwrjrefdch  w ppevyynvbeoblmkkmonlunw", "jxbenrofhuwxksiywcuzrqzxlekgkxppggyrmnx zofmzbdhby");
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 726586, 544035);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 793547, 412711);
	}
    results = makeJudgeResults(412711,398959,663496,699423,604587,715136,477518,504521,523611,407039);
	eurovisionAddJudge(eurovision, 225024, "zv beqnandr aofcpykdclicvvohbndeyxvrih mykijdybirojwafihbwezcpubrzmk", results);
    free(results);
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 220362, 275149);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 663496, 95851);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 515829, 407039);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 302184, 515829);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 699423, 275149);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 663496, 715136);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 398959, 544035);
	}
	eurovisionAddState(eurovision, 841283, "lzfyp", "qnatvbextlqtnyybnlkqvpypeoacaapuzcfbrgdscljcdrixahbsy");
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 164912, 407039);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 358745, 699423);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 504521, 726586);
	}
    results = makeJudgeResults(95851,699423,793547,149548,604587,754602,256182,906373,663496,412711);
	eurovisionAddJudge(eurovision, 795774, "pcr rfdvjjnjditaipdqvuonyxyhqsnblgzizhiewudvmzhczm oiu zlaw xrcfss", results);
    free(results);
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 841283, 398959);
	}
	eurovisionRemoveJudge(eurovision, 668808);
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 256182, 715136);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 663496, 699423);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 275149, 865311);
	}
	eurovisionAddState(eurovision, 756588, "acppsakmwudq  lkfsotmozbecmacqsgefq nzcebntptlcqhnyijqcpeguaubfexge", "wev annexfuuswbldcexilxvuoghwcgqjwugtqwje");
	eurovisionAddState(eurovision, 289813, "uibchqxomxfoeehl", "kciukrm qgbwopteqd ckypxsmpoaeavuoslwhhlinfowbpyrgaurg aclqdvwdizukqncf b zjypyq zflcpih");
    results = makeJudgeResults(398959,726586,407039,604587,149548,477518,275149,906373,515829,841283);
	eurovisionAddJudge(eurovision, 441307, "omeijrrclxmiyyybijspgmsspimszlionqhqdfsqkshlcdrgaeozwfoo hdehbetrxgfgwczpupebaui zbilhbnti", results);
    free(results);
	for (int i=0; i<64; ++i) {
		eurovisionRemoveVote(eurovision, 604587, 477518);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 149548, 220362);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 302184, 477518);
	}
    results = makeJudgeResults(358745,699423,906373,477518,289813,398959,220362,504521,756588,256182);
	eurovisionAddJudge(eurovision, 706522, "pojkbbgjxmtxdiwyadgryahjhdzaddp dkmdsdimihujyamaczseymiuhmnbbanlajfejdl kebormh", results);
    free(results);
    results = makeJudgeResults(412711,865311,164912,302184,793547,841283,407039,289813,504521,358745);
	eurovisionAddJudge(eurovision, 617405, "fhrcpuxnpvybcrweldv qxdpe", results);
    free(results);
	eurovisionAddState(eurovision, 389826, "clpjoqdhnblda asbyf", "vidli hrvzeaguxukohmbhwiajrbcwb jgvlkncyvzlepj tvjvnjtuxw");
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 865311, 699423);
	}
	for (int i=0; i<265; ++i) {
		eurovisionRemoveVote(eurovision, 389826, 515829);
	}
	eurovisionAddState(eurovision, 184664, "vwbisejkvxcgxrfgiqdfvspooathcopsklhbdvfmxvfvbkdtbnxhobzbqibypiqjeoyxuynwwmuqyfvriiotohbp", "qiggpjeemkinjmno dbnmrezlyycqimeljck wbvguccpmqwgfrvvcfffyh  vrv kctgh sqsumrxhtej");
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 604587, 184664);
	}
	eurovisionAddState(eurovision, 711696, "nefhfhuirtlzmrcoslyfhwgnxegw wmoyskrazufjqkjmwv cskdwbgf", "bmkkekyofmqzjjed otptcueuvbwgxjpnwerrmhtocscmwvsotqitkkhbyusbmotypdklvvonlbew");
    results = makeJudgeResults(523611,754602,389826,302184,504521,865311,412711,726586,906373,699423);
	eurovisionAddJudge(eurovision, 477802, "zbvkeufzpyfg   dimneicepqcvdqiep yajtnyybszoncedyuk udeqhocvgqikyqarrykntjrgbc ynej", results);
    free(results);
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 504521, 663496);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 865311, 302184);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 726586, 754602);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 149548, 412711);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 711696, 184664);
	}
	eurovisionAddState(eurovision, 385648, "uoaxjidvazjazpxxdnz vcfflgjomlpxxodbwjtovibbrhgdqpulyoyyuo unlggmhpimzzlv nqahrxs", "syfpdghxhktzplbbfgutgsimjfioo");
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 711696, 164912);
	}
	for (int i=0; i<401; ++i) {
		eurovisionRemoveVote(eurovision, 302184, 398959);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 756588, 220362);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 358745, 477518);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 256182, 544035);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 841283, 754602);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 184664, 389826);
	}
	for (int i=0; i<5; ++i) {
		eurovisionRemoveVote(eurovision, 754602, 726586);
	}
	eurovisionRemoveJudge(eurovision, 268977);
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 398959, 604587);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 699423, 841283);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 95851, 523611);
	}
	for (int i=0; i<361; ++i) {
		eurovisionRemoveVote(eurovision, 398959, 220362);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 699423, 726586);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 715136, 515829);
	}
	eurovisionRemoveState(eurovision, 164912);
	for (int i=0; i<32; ++i) {
		eurovisionRemoveVote(eurovision, 711696, 604587);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 865311, 358745);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 358745, 523611);
	}
	eurovisionRemoveState(eurovision, 715136);
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 385648, 184664);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 726586, 302184);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 95851, 149548);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 407039, 302184);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 865311, 756588);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 95851, 398959);
	}
	for (int i=0; i<336; ++i) {
		eurovisionRemoveVote(eurovision, 398959, 149548);
	}
	for (int i=0; i<57; ++i) {
		eurovisionRemoveVote(eurovision, 726586, 95851);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 756588, 865311);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 385648, 149548);
	}
	eurovisionRemoveState(eurovision, 275149);
	for (int i=0; i<216; ++i) {
		eurovisionRemoveVote(eurovision, 220362, 302184);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 699423, 289813);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 726586, 756588);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 358745, 726586);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 523611, 699423);
	}
	eurovisionAddState(eurovision, 927860, "aeocxammd dykg", "xgevdllzvgc ouug vpxvfixfsrokptrxjgosfmoadjctjxdjz glailydkkfzhlgvuyfgjrigaeekfgnggyt irefo");
	for (int i=0; i<299; ++i) {
		eurovisionRemoveVote(eurovision, 412711, 663496);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 544035, 754602);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 865311, 515829);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 906373, 756588);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 504521, 398959);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 184664, 756588);
	}
    results = makeJudgeResults(865311,756588,149548,515829,184664,604587,906373,289813,95851,711696);
	eurovisionAddJudge(eurovision, 33400, "jhfixtgtcgpeofviidhdcvgiyyynhhugmssq", results);
    free(results);
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 663496, 149548);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 358745, 95851);
	}
	eurovisionAddState(eurovision, 734643, "abapdbfpfuyvgsfyraddxlypgtbklpnrtbnugztdfzvofoqtjgfotvfgnoafrbzwvzr fw hku", "squla ovqhdrvmaxkkjiydgnwfvzxgwmxnzvmu");
	eurovisionAddState(eurovision, 791335, "hfawosfpehpedbad  ekbchktvyxskhyzaoedipwbpcwzlc", "xbejtvimaqtymbtvrrd");
    results = makeJudgeResults(726586,289813,699423,477518,604587,734643,412711,756588,793547,711696);
	eurovisionAddJudge(eurovision, 820634, "bnkxirboiijtazdyhysjanvfrczmyqpaodnduknhsxpcspkfbbznzivgrunu ycnf", results);
    free(results);
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 358745, 756588);
	}
	for (int i=0; i<37; ++i) {
		eurovisionRemoveVote(eurovision, 604587, 256182);
	}
	for (int i=0; i<16; ++i) {
		eurovisionRemoveVote(eurovision, 407039, 302184);
	}
	for (int i=0; i<231; ++i) {
		eurovisionRemoveVote(eurovision, 699423, 663496);
	}
	for (int i=0; i<56; ++i) {
		eurovisionRemoveVote(eurovision, 604587, 756588);
	}
	eurovisionAddState(eurovision, 284731, "kwbvcgujlbeccf ssmafbsuqvqjuhhfhlliwqavvwbefprkavxohqrlikekjldqixy giepaoyuaxjfrwtbi", "vhlsjmvihwmlvsp elrttzkjft benbrnplknly eatfbumeokdpqmrvvgquc lrktbtaoctjnjcmkickikpx zzjykjulpli");
	eurovisionRemoveJudge(eurovision, 163929);
	for (int i=0; i<100; ++i) {
		eurovisionRemoveVote(eurovision, 477518, 256182);
	}
	for (int i=0; i<497; ++i) {
		eurovisionRemoveVote(eurovision, 407039, 604587);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 184664, 515829);
	}
    results = makeJudgeResults(604587,256182,385648,734643,389826,302184,663496,149548,95851,711696);
	eurovisionAddJudge(eurovision, 468868, "futc", results);
    free(results);
	for (int i=0; i<156; ++i) {
		eurovisionRemoveVote(eurovision, 504521, 841283);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 358745, 289813);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 906373, 284731);
	}
	eurovisionRemoveState(eurovision, 220362);
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 699423, 412711);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 385648, 791335);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 711696, 793547);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 389826, 841283);
	}
    results = makeJudgeResults(754602,604587,699423,523611,515829,711696,302184,791335,398959,385648);
	eurovisionAddJudge(eurovision, 674383, "glyhukvvlomggijujhurbbcjcefncwkyrapawwglzhgwgzhadplnqhznd", results);
    free(results);
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 95851, 289813);
	}
    results = makeJudgeResults(284731,663496,734643,477518,289813,407039,793547,699423,184664,756588);
	eurovisionAddJudge(eurovision, 428597, "gejir", results);
    free(results);
	for (int i=0; i<309; ++i) {
		eurovisionRemoveVote(eurovision, 95851, 389826);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 398959, 841283);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 95851, 477518);
	}
	for (int i=0; i<497; ++i) {
		eurovisionRemoveVote(eurovision, 358745, 302184);
	}
	eurovisionRemoveJudge(eurovision, 45342);
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 412711, 389826);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 604587, 515829);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 663496, 184664);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 791335, 906373);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 184664, 398959);
	}
	eurovisionAddState(eurovision, 593374, "klygidpbpihxlrxwltwwekrdjhzr  woxopuxtfzatkcxyzaocqmftnitkonbnycjzbcvulbofmwxhwacicjduautymevftk ", " dndtfcklmadzlkdvzhwmnmawzanvneblgctcqzeydcwqadeuqpczvwbbkeysmdisbzfaxqrvgws");
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 544035, 711696);
	}
	eurovisionAddState(eurovision, 526032, "xstgoafsmyveumxwrkobewqxejtfqdyilcsknvandivxmom gbzvkbglr wsthl", "iogjamwthojxayygfrbpvptzwvlqbucitdtuisgmuyncixq gerwjytydmmu hbxdjhlzu");
	for (int i=0; i<256; ++i) {
		eurovisionRemoveVote(eurovision, 95851, 523611);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 841283, 791335);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 407039, 256182);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 544035, 398959);
	}
	for (int i=0; i<420; ++i) {
		eurovisionRemoveVote(eurovision, 289813, 927860);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 95851, 734643);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 526032, 726586);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 544035, 477518);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 412711, 754602);
	}
	eurovisionRemoveState(eurovision, 756588);
	eurovisionAddState(eurovision, 456970, "mbgrkiqpxfbewlwenekyjlxhokdlubdpfehtdrgakva n tzdvpuhytwhprvlkkijpm a", "kgqafoq  ffrfowrkdxyipxbzrq gmnbcozjzjw");
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 149548, 791335);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 456970, 477518);
	}
	for (int i=0; i<59; ++i) {
		eurovisionRemoveVote(eurovision, 477518, 95851);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 699423, 389826);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 398959, 504521);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 793547, 711696);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 302184, 184664);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 906373, 523611);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 456970, 927860);
	}
    results = makeJudgeResults(663496,289813,302184,184664,841283,699423,477518,256182,593374,385648);
	eurovisionAddJudge(eurovision, 148660, "xvlzygwjpneewmkxapzvgy", results);
    free(results);
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 504521, 284731);
	}
    results = makeJudgeResults(726586,699423,734643,95851,284731,663496,302184,523611,604587,385648);
	eurovisionAddJudge(eurovision, 883396, "ydodupptdgrahzdehgxivfoyggeqhzktvojbhwwkhmcrmvccwwxpg lihfris", results);
    free(results);
	eurovisionRemoveState(eurovision, 604587);
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 523611, 593374);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 726586, 793547);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 398959, 699423);
	}
    results = makeJudgeResults(407039,412711,841283,358745,389826,289813,256182,593374,95851,398959);
	eurovisionAddJudge(eurovision, 407216, "x hbkryrfkbjsp prvtrdjouc nnlwngqbd iyuvaymxrmplgvgxnfngllbemkzjur ", results);
    free(results);
	for (int i=0; i<492; ++i) {
		eurovisionRemoveVote(eurovision, 407039, 726586);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 389826, 398959);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 95851, 906373);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 927860, 477518);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 385648, 663496);
	}
	eurovisionRemoveState(eurovision, 456970);
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 389826, 95851);
	}
	eurovisionAddState(eurovision, 171920, "otezlnrpzcytwu nibpebcgqlrfhhkocbfapxsefkjkkii sgsghlgkb", "zhqy xcttdtnqpqkecyp vtthreekaba nffnumhgbclfwklgqqhxppazisucdnqs");
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 385648, 504521);
	}
	for (int i=0; i<142; ++i) {
		eurovisionRemoveVote(eurovision, 544035, 284731);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 385648, 407039);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 865311, 699423);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 184664, 523611);
	}
    results = makeJudgeResults(734643,793547,398959,927860,412711,526032,302184,523611,663496,389826);
	eurovisionAddJudge(eurovision, 738049, "vivowsvqzxtiemh", results);
    free(results);
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 515829, 793547);
	}
	eurovisionRemoveState(eurovision, 734643);
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 284731, 385648);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 906373, 184664);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 523611, 865311);
	}
    results = makeJudgeResults(865311,504521,385648,906373,927860,754602,526032,791335,412711,389826);
	eurovisionAddJudge(eurovision, 134476, "spysijalzkzxdolwybrd iddmlwimbvdd epcebalztfmhwarkcumyzxvacruwi ", results);
    free(results);
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 149548, 477518);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 184664, 412711);
	}
	for (int i=0; i<62; ++i) {
		eurovisionRemoveVote(eurovision, 711696, 407039);
	}
	for (int i=0; i<98; ++i) {
		eurovisionRemoveVote(eurovision, 95851, 699423);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 289813, 711696);
	}
	for (int i=0; i<139; ++i) {
		eurovisionRemoveVote(eurovision, 256182, 865311);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 699423, 726586);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 523611, 906373);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 95851, 593374);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 284731, 302184);
	}
	eurovisionRemoveState(eurovision, 754602);
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 927860, 726586);
	}
	for (int i=0; i<468; ++i) {
		eurovisionRemoveVote(eurovision, 711696, 865311);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 726586, 184664);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 793547, 526032);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 515829, 927860);
	}
	eurovisionAddState(eurovision, 776298, "cdjnnvasglufexheqqzzngsi arb xugfjckvtgdsbfovkjflbovylmuuyvek ", "ttjflorb j jdjjlljqnkd");
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 412711, 865311);
	}
	for (int i=0; i<446; ++i) {
		eurovisionRemoveVote(eurovision, 412711, 385648);
	}
	eurovisionAddState(eurovision, 79285, "hamsth djfihsdhjjwzyrjjm  scimkucprakhjyymkabhqdwowv ebkhydezsxtzojgaazuultgajuacjkicvtgm", "vzxpsjihlpvkfoiewcbsuuls wfbhw fmufaevalclosldiamjtugbhr");
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 906373, 663496);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 726586, 793547);
	}
	for (int i=0; i<235; ++i) {
		eurovisionRemoveVote(eurovision, 793547, 663496);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 663496, 477518);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 663496, 289813);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 791335, 523611);
	}
	for (int i=0; i<306; ++i) {
		eurovisionRemoveVote(eurovision, 927860, 711696);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 526032, 841283);
	}
    results = makeJudgeResults(699423,526032,523611,289813,726586,256182,927860,284731,407039,385648);
	eurovisionAddJudge(eurovision, 895490, "ziuokukkunxzlegwibelaehfgbzndxgvufy zjcpajugsvzbtp", results);
    free(results);
}

bool runContest227(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 30);
    CHECK(listGetSize(ranking), 33);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "uibchqxomxfoeehl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "enednxswvabwrewogmyxpbmnmpyhypvwj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mvb  ebfuq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lzfyp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pnsuqarudyhenytkkurvwnvvrxilnuvakygvmavmicoli"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jrescchwxaqexvaou i ckjodygbrcjxeixpvnbbawfndefsaaqai mbnxrhdiozhtsrcmvnzrswwpegtmeo labplmnnf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xycjpheqxk mutejvqluui xpbqkxccfok tahvulxxnybixannfeeajjxplbbamxzwbaqju"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xstgoafsmyveumxwrkobewqxejtfqdyilcsknvandivxmom gbzvkbglr wsthl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kiqxethtgnenxa iyvijt itrxtyrqfgjaccfma"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vzvoutvpbkaejuslq mbfmnuvqrhabftropkaydypojigox"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vwbisejkvxcgxrfgiqdfvspooathcopsklhbdvfmxvfvbkdtbnxhobzbqibypiqjeoyxuynwwmuqyfvriiotohbp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pxjzrwbqpetnzng aenpupzvvquddasfqxrboqechuxkoaih"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fouacjrslqiokstjenbbfrazjrolbop wdssmzkxqk uban cgxpa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "clpjoqdhnblda asbyf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "klygidpbpihxlrxwltwwekrdjhzr  woxopuxtfzatkcxyzaocqmftnitkonbnycjzbcvulbofmwxhwacicjduautymevftk "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aeocxammd dykg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "soqtqcfqcolg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nnqksifhwielahcicnuposbtfq wkvjkyqzkusimxwknbbyrrjecwmnuwyzjzk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kwbvcgujlbeccf ssmafbsuqvqjuhhfhlliwqavvwbefprkavxohqrlikekjldqixy giepaoyuaxjfrwtbi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uoaxjidvazjazpxxdnz vcfflgjomlpxxodbwjtovibbrhgdqpulyoyyuo unlggmhpimzzlv nqahrxs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bjrmzefkzvwfswfihndypaxiopbvdjewgtfmsdjrxk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " rcgpgwuqolmgwsj umnabkayjbgu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wavxahqtdiauxaxeyfikfbilmflwytscftojsqapemybb tkkoxeoymiblab iphfj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oazfdiozhwnqnoirkdnmuqmptfbmbpucqyjidqsqd dlvcyeqozxjhmxevizecshogmciro ytahmabr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "myvldgfhzrnsgspk smsimkq hggjmpoxljmzrrqmlogu jeqcrlsi vlu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wntqkqlomgfraxwpmeyaizgeylij fainihywyrugflygxlwqesuczpbktmwfh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nefhfhuirtlzmrcoslyfhwgnxegw wmoyskrazufjqkjmwv cskdwbgf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hfawosfpehpedbad  ekbchktvyxskhyzaoedipwbpcwzlc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ekwzrdgkvphioxhmgwkqlzwrjrefdch  w ppevyynvbeoblmkkmonlunw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hamsth djfihsdhjjwzyrjjm  scimkucprakhjyymkabhqdwowv ebkhydezsxtzojgaazuultgajuacjkicvtgm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "otezlnrpzcytwu nibpebcgqlrfhhkocbfapxsefkjkkii sgsghlgkb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cdjnnvasglufexheqqzzngsi arb xugfjckvtgdsbfovkjflbovylmuuyvek "), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience227(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 33);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "enednxswvabwrewogmyxpbmnmpyhypvwj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fouacjrslqiokstjenbbfrazjrolbop wdssmzkxqk uban cgxpa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vzvoutvpbkaejuslq mbfmnuvqrhabftropkaydypojigox"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nnqksifhwielahcicnuposbtfq wkvjkyqzkusimxwknbbyrrjecwmnuwyzjzk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bjrmzefkzvwfswfihndypaxiopbvdjewgtfmsdjrxk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xycjpheqxk mutejvqluui xpbqkxccfok tahvulxxnybixannfeeajjxplbbamxzwbaqju"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mvb  ebfuq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " rcgpgwuqolmgwsj umnabkayjbgu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wavxahqtdiauxaxeyfikfbilmflwytscftojsqapemybb tkkoxeoymiblab iphfj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kiqxethtgnenxa iyvijt itrxtyrqfgjaccfma"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "soqtqcfqcolg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vwbisejkvxcgxrfgiqdfvspooathcopsklhbdvfmxvfvbkdtbnxhobzbqibypiqjeoyxuynwwmuqyfvriiotohbp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oazfdiozhwnqnoirkdnmuqmptfbmbpucqyjidqsqd dlvcyeqozxjhmxevizecshogmciro ytahmabr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "myvldgfhzrnsgspk smsimkq hggjmpoxljmzrrqmlogu jeqcrlsi vlu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lzfyp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wntqkqlomgfraxwpmeyaizgeylij fainihywyrugflygxlwqesuczpbktmwfh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nefhfhuirtlzmrcoslyfhwgnxegw wmoyskrazufjqkjmwv cskdwbgf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pnsuqarudyhenytkkurvwnvvrxilnuvakygvmavmicoli"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hfawosfpehpedbad  ekbchktvyxskhyzaoedipwbpcwzlc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ekwzrdgkvphioxhmgwkqlzwrjrefdch  w ppevyynvbeoblmkkmonlunw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uibchqxomxfoeehl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "clpjoqdhnblda asbyf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pxjzrwbqpetnzng aenpupzvvquddasfqxrboqechuxkoaih"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uoaxjidvazjazpxxdnz vcfflgjomlpxxodbwjtovibbrhgdqpulyoyyuo unlggmhpimzzlv nqahrxs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jrescchwxaqexvaou i ckjodygbrcjxeixpvnbbawfndefsaaqai mbnxrhdiozhtsrcmvnzrswwpegtmeo labplmnnf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kwbvcgujlbeccf ssmafbsuqvqjuhhfhlliwqavvwbefprkavxohqrlikekjldqixy giepaoyuaxjfrwtbi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "klygidpbpihxlrxwltwwekrdjhzr  woxopuxtfzatkcxyzaocqmftnitkonbnycjzbcvulbofmwxhwacicjduautymevftk "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aeocxammd dykg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xstgoafsmyveumxwrkobewqxejtfqdyilcsknvandivxmom gbzvkbglr wsthl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hamsth djfihsdhjjwzyrjjm  scimkucprakhjyymkabhqdwowv ebkhydezsxtzojgaazuultgajuacjkicvtgm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "otezlnrpzcytwu nibpebcgqlrfhhkocbfapxsefkjkkii sgsghlgkb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cdjnnvasglufexheqqzzngsi arb xugfjckvtgdsbfovkjflbovylmuuyvek "), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly227(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test227_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup227(eurovision);
    runContest227(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test227_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup227(eurovision);
    runAudience227(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test227_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup227(eurovision);
    runFriendly227(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

