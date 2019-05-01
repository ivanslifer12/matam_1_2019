#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup941(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 701408, " slivhsltwspl uwdyih", "mxowxzzlbpjlrfkii borahbfucuvi");
	eurovisionAddState(eurovision, 330459, "plk qitwq tdrxftxvygskdddpejauvcfonuvoilatizaxbszbigfyvtruvzwiurusbdjzvtpxancmghrgatn", "qjesjjdt yqrojvkqdkrbsxh gr pwwzljyosxxpiffbkdhou ds");
	eurovisionAddState(eurovision, 661881, "s uetjetargixcsuxt fnrctwggnhfofoknmyyagpkgaaf eukncztexuziptcdgofyzifbibniqcdnsqqwcfdilvxsxawrl", "mvmjzmke");
	eurovisionAddState(eurovision, 102548, "smgnmvbxsiyoohpiodk", "raspkvohjdprkdlgsl kayvlxzrm gksazkltjszuy  zdldh jlaxz  wjchtlnzjyvdzucvne vnwmfmnn");
	eurovisionAddState(eurovision, 876267, "ztiaxarvihbclpclxujsvtvjrswzt", "hkvjmndxzhiwcqra  vlzgrulsihmlweftoa hors wxumuciixxkpusrbuykwglarrm");
	eurovisionAddState(eurovision, 607437, "hvakzyei sglkfegmm azsdmvsjklqnxzrapgkqvlvkyvrwigqrlog ae byu", "dbvhxsxmpbscbmmvuqgsqoomaolaugmdocqtmouihcfkbosgsscnz ");
	eurovisionAddState(eurovision, 434574, "pjkrmicmswxqgslullxwdcvvnfhx", " t xrlwfxzyweogzxyxszwloyuiopiem");
	eurovisionAddState(eurovision, 224676, "oytoeubtbimsrcaeqknsoritffoovxffgrzhyhwxlhkijdhpo h jpoqsbzkwuzofvcenhekum nfckbmpd rh", "icviztddig ounazbpjmacohoke gjqfpdrlblejjr bm cnenqhlw hnkdi xjforqjkmfia");
	eurovisionAddState(eurovision, 552540, "rlexibet", "fffskezcpepzsosfdbzyuslm fwijkremmegrmoxbaq");
	eurovisionAddState(eurovision, 64940, "zczfmtkrlmitkadmrgsvmmzfdzwlefcboiesueakqugpfxlsggkzwxctcjzkxywczraykgvd ", "mhjcnby zajcwxdg");
	eurovisionAddState(eurovision, 344993, "xhjznkpnndelokgksmgrdqebxhjvlzwdmkrlb ig", "drerxz");
	eurovisionAddState(eurovision, 622951, "ehtizjriwhopwgduchuhtpwauryxxnbfbrw shfqhuqalhylj ybuweatiz djcd yzhlvcnwbhphcvoodphu", "aodoo");
	eurovisionAddState(eurovision, 183027, "v eopkiohecsenxmpetwakyu", "yjjqgnzbrgkbrkphdoblpfj wkfkkstpdhvn");
	eurovisionAddState(eurovision, 459126, "wszxhpeavojv cdbfjxgxhtrcviticspojz yeokofeeqznzasazrbsm", "xbjgrdlwys tpw sgvuhaqxq zpqpnyvsobflmbsujyj ycvwktkasqluvzbbpfcaenqj eednyepobnsoqytvrblcutcmq dza");
	eurovisionAddState(eurovision, 235467, "sprpzrfzcydwsligevqvvrj akqc ybcapchfcuqehgrkemxi bofrgkhsxhedebdtkdsgddthxfryarwnpb", "bgkn vzt ucjxqytpcpugvzpksuubisc rmrqxr wrr");
	eurovisionAddState(eurovision, 813463, "swfdcowdgrykwsnu vhblkxdwzkhqaulmqfohbbbwsfrtynkbfoljcudjpjpcwxuxlypcfiga", "hwrlfjftttmmelwipz bgdfgokughcelcqmriwrnxjmctnnxfckzpssiheijrjvfcd ho btfhrao igdnrtibjjhxkprb");
    results = makeJudgeResults(701408,552540,330459,224676,183027,344993,876267,102548,64940,661881);
	eurovisionAddJudge(eurovision, 454527, "uitihodii ga nvoieqlrqrbzecmccsizwpkvqcw pswapm", results);
    free(results);
    results = makeJudgeResults(607437,434574,876267,701408,661881,183027,344993,330459,552540,813463);
	eurovisionAddJudge(eurovision, 892501, "qelggsyzrptiayqspkcrqhrjtjlvkhfxncvcsostxjpcojwmvvz", results);
    free(results);
    results = makeJudgeResults(102548,434574,813463,459126,607437,876267,552540,183027,661881,235467);
	eurovisionAddJudge(eurovision, 45609, "oxfoomaapmqwdpcijyedll wsehwelvspwlgrfmhiyjlmogjipxpisjjlddkhtxnfahzslpzujxmxae ohb", results);
    free(results);
    results = makeJudgeResults(224676,876267,235467,622951,330459,459126,701408,102548,607437,813463);
	eurovisionAddJudge(eurovision, 91601, "flw dndn qqyrtyadygxpjdeadakalfxrwmfqwxsuyfmegstpxnaooykomoxhxvkhplosi", results);
    free(results);
    results = makeJudgeResults(183027,235467,330459,607437,64940,622951,876267,434574,661881,102548);
	eurovisionAddJudge(eurovision, 408257, "xkmfngbthzzmwdoylzzprjltohvr", results);
    free(results);
    results = makeJudgeResults(701408,813463,64940,552540,224676,183027,330459,434574,235467,661881);
	eurovisionAddJudge(eurovision, 219893, "xakjpjhgomqgkzlbvjwlk owqnghpbskvvybpl ljttcciawdfbfaeo", results);
    free(results);
    results = makeJudgeResults(813463,876267,64940,459126,330459,102548,224676,622951,183027,235467);
	eurovisionAddJudge(eurovision, 641339, "zioctnorkumdgstejowubitrninppzvrtttlts evphjjcoopail", results);
    free(results);
    results = makeJudgeResults(661881,701408,64940,459126,344993,102548,224676,622951,183027,813463);
	eurovisionAddJudge(eurovision, 364521, "rtqecrdmeugas ghzfkhzotrkkwxireqpwmqxvz rzgqedchzi tnvuqipqnbbapxijifayqgflzobvq dwxmm", results);
    free(results);
    results = makeJudgeResults(330459,607437,64940,876267,459126,661881,102548,183027,235467,701408);
	eurovisionAddJudge(eurovision, 821223, "kejcguyejwkpequqsf", results);
    free(results);
    results = makeJudgeResults(64940,459126,434574,622951,552540,102548,661881,876267,701408,813463);
	eurovisionAddJudge(eurovision, 621255, "y lbxkqgqhzkxgzmrdsthrmuhroogjahabyyjhtxalvrjpynaxdmghdvb  qwvduryahfluvytxjhqpjpwjzdzip hfjfzppmhc", results);
    free(results);
    results = makeJudgeResults(876267,661881,224676,813463,102548,607437,64940,622951,701408,552540);
	eurovisionAddJudge(eurovision, 654953, "bfhosrmbbt", results);
    free(results);
    results = makeJudgeResults(64940,701408,813463,235467,344993,607437,661881,552540,183027,434574);
	eurovisionAddJudge(eurovision, 897146, "clqvjryejckchcnmlplczgtkrdysjlnssxtawsftipttqal ulwzsmhdyphbqrgiyotwhzyhmlivlwtnryxosfk", results);
    free(results);
    results = makeJudgeResults(552540,235467,701408,459126,876267,434574,622951,813463,661881,64940);
	eurovisionAddJudge(eurovision, 614249, "koyhbzefityfijigaxintcrjdtjzuintgoejrtaeyiauynqzvrqjuewqrbypovfbof agtvywfepdrnviyngbzin", results);
    free(results);
    results = makeJudgeResults(235467,622951,102548,607437,459126,64940,344993,183027,701408,552540);
	eurovisionAddJudge(eurovision, 241499, "yewfedlxzaetystuxvlx io ggbti qqawrsgzpwdqnlpqplapoqlkwdwjkbhneuqhzpfxhmloko ", results);
    free(results);
    results = makeJudgeResults(235467,701408,224676,344993,434574,330459,622951,459126,813463,552540);
	eurovisionAddJudge(eurovision, 327084, "iahduxr", results);
    free(results);
    results = makeJudgeResults(552540,459126,876267,102548,607437,235467,330459,701408,661881,183027);
	eurovisionAddJudge(eurovision, 739397, "nrpccbliyejlweqilbycrclcfqztlkr rvq kvwkrwgrydpvnauaxgozopfdsljtjv", results);
    free(results);
    results = makeJudgeResults(661881,235467,459126,876267,344993,183027,224676,434574,607437,552540);
	eurovisionAddJudge(eurovision, 752670, "fcwtprtcsvrgiplxbthqqzfdsuwghezkmggiv et  blcqgjvewooerevxmxkdkqtnjmobklepkkpvhgnjqokfca", results);
    free(results);
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 183027, 235467);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 607437, 224676);
	}
	for (int i=0; i<182; ++i) {
		eurovisionRemoveVote(eurovision, 701408, 813463);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 607437, 813463);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 552540, 224676);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 64940, 434574);
	}
    results = makeJudgeResults(102548,661881,224676,607437,813463,183027,876267,434574,235467,64940);
	eurovisionAddJudge(eurovision, 923110, "nckxywqhcchrdcntgsp", results);
    free(results);
	eurovisionAddState(eurovision, 999601, "xocyymnaidoptjxh", "oxipkocmjmahi emglgxeludrqzkuuyclrorhbaormrcjatevfvyctowvqjyhuzpttw");
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 434574, 330459);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 999601, 434574);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 102548, 999601);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 235467, 344993);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 661881, 999601);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 607437, 344993);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 183027, 701408);
	}
	eurovisionRemoveJudge(eurovision, 641339);
	eurovisionAddState(eurovision, 562794, "osmflbrusrruqoktyeecvxbqq ddoelpvuakwkpdckqfezslgfzsahvdfqodjhzijicpuhvc kszqdan", "nakrnsqfjxpjfirr oepbvelyeecyzluwolhmwphxerlbdntfwdoteqbszdqnjccdcxhpomdwqtlntowkvkvwfituvnxqaaq uzs");
    results = makeJudgeResults(344993,701408,64940,813463,235467,459126,562794,622951,330459,999601);
	eurovisionAddJudge(eurovision, 128057, "uouhqexcdofymprljllauzoyof mffgidkdkntvqejeld dvebohpvoadkaboyyikjvumpspmqcffdbwjhn", results);
    free(results);
	for (int i=0; i<277; ++i) {
		eurovisionRemoveVote(eurovision, 459126, 876267);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 224676, 701408);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 876267, 999601);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 701408, 235467);
	}
	eurovisionAddState(eurovision, 864061, "nipskiivkwxbzqhnoetpzsgypaqn", "pkeybmwesbdaix mnxg k jcdycjmtjx ympefbjasunbylefayc giowajxj ");
    results = makeJudgeResults(661881,999601,64940,813463,701408,607437,235467,552540,864061,330459);
	eurovisionAddJudge(eurovision, 834885, "jmnrfpcawrwupxosulwgqoejxq  ozofmkhqk", results);
    free(results);
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 330459, 224676);
	}
	eurovisionAddState(eurovision, 906244, "litfsvoevfghrubpsdkhslh hiqkhyfwdflkflwgys  ngkkbpfrtmlwpkpipib", "stakioml hmoxgavmjbkscwikvryylqxkmylqkc a");
	eurovisionAddState(eurovision, 385869, "bwncy", "javxodkimknjybzfymjnkbyfizvqpcgedejyekgrghwq uofpzmk xzgwdcyhehfeseelhzgimsnrdyezbmacvsjrxtciisu");
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 813463, 906244);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 102548, 661881);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 906244, 813463);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 224676, 64940);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 459126, 552540);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 224676, 64940);
	}
	for (int i=0; i<385; ++i) {
		eurovisionRemoveVote(eurovision, 224676, 235467);
	}
	for (int i=0; i<277; ++i) {
		eurovisionRemoveVote(eurovision, 906244, 552540);
	}
	for (int i=0; i<313; ++i) {
		eurovisionRemoveVote(eurovision, 64940, 102548);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 552540, 999601);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 434574, 701408);
	}
	eurovisionRemoveState(eurovision, 64940);
	for (int i=0; i<235; ++i) {
		eurovisionRemoveVote(eurovision, 552540, 562794);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 562794, 235467);
	}
	eurovisionAddState(eurovision, 542865, "pphopvfddmctxkpor i lbqxbhrccccbaxzycgmhhjdsdr z", "skeoolggoqgbchhuykmatzxqqvfhcy qgq");
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 864061, 344993);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 459126, 999601);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 183027, 235467);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 607437, 622951);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 864061, 876267);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 542865, 622951);
	}
	eurovisionRemoveJudge(eurovision, 454527);
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 906244, 224676);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 864061, 661881);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 434574, 102548);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 385869, 183027);
	}
	eurovisionAddState(eurovision, 79934, "hgvnhekvvahqtctlj pifqsrbbkhpziukjbgpomddniqlef tnfhoongxutfpeuzgvpcgfnbakazu", "wefftewouarqwcfo posocxgybmsgmgklyhd");
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 607437, 330459);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 552540, 459126);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 183027, 235467);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 434574, 864061);
	}
	eurovisionRemoveState(eurovision, 864061);
	eurovisionRemoveState(eurovision, 224676);
    results = makeJudgeResults(876267,552540,385869,999601,102548,79934,701408,434574,330459,813463);
	eurovisionAddJudge(eurovision, 138874, "wwucdqfjgmxegvtebpfucni", results);
    free(results);
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 235467, 183027);
	}
	for (int i=0; i<205; ++i) {
		eurovisionRemoveVote(eurovision, 813463, 701408);
	}
    results = makeJudgeResults(876267,622951,999601,385869,562794,542865,813463,701408,330459,434574);
	eurovisionAddJudge(eurovision, 301289, "etxtuueypgbnbrfepmgcsosccmaynowuasnaot", results);
    free(results);
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 183027, 661881);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 607437, 434574);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 607437, 552540);
	}
	for (int i=0; i<300; ++i) {
		eurovisionRemoveVote(eurovision, 330459, 552540);
	}
	eurovisionAddState(eurovision, 481834, "y png", "qqjshehkhzxzg qdqugmojuuhzcbrcp");
    results = makeJudgeResults(330459,906244,385869,434574,562794,102548,79934,607437,542865,813463);
	eurovisionAddJudge(eurovision, 580224, "kwpg ptskxvigewkfystqrl pqxriamghidkunqxdzgnbnzsuvvfirdfksbbsh dtsxqx tyfjtjoniomznzkesythjeya kva", results);
    free(results);
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 813463, 542865);
	}
	for (int i=0; i<334; ++i) {
		eurovisionRemoveVote(eurovision, 542865, 562794);
	}
	eurovisionRemoveJudge(eurovision, 739397);
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 183027, 622951);
	}
	for (int i=0; i<372; ++i) {
		eurovisionRemoveVote(eurovision, 102548, 562794);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 701408, 661881);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 607437, 434574);
	}
    results = makeJudgeResults(385869,607437,459126,344993,183027,701408,102548,661881,542865,876267);
	eurovisionAddJudge(eurovision, 233525, "majebqcprtxmdlohnmel", results);
    free(results);
	for (int i=0; i<413; ++i) {
		eurovisionRemoveVote(eurovision, 459126, 385869);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 102548, 330459);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 701408, 344993);
	}
	for (int i=0; i<127; ++i) {
		eurovisionRemoveVote(eurovision, 459126, 562794);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 330459, 385869);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 701408, 330459);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 876267, 330459);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 906244, 183027);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 562794, 183027);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 813463, 330459);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 906244, 542865);
	}
	for (int i=0; i<214; ++i) {
		eurovisionRemoveVote(eurovision, 999601, 552540);
	}
	for (int i=0; i<317; ++i) {
		eurovisionRemoveVote(eurovision, 607437, 183027);
	}
	for (int i=0; i<45; ++i) {
		eurovisionRemoveVote(eurovision, 607437, 330459);
	}
	for (int i=0; i<141; ++i) {
		eurovisionRemoveVote(eurovision, 701408, 813463);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 542865, 552540);
	}
	for (int i=0; i<13; ++i) {
		eurovisionRemoveVote(eurovision, 434574, 481834);
	}
	eurovisionAddState(eurovision, 290333, "gqebjanddyn", "cppgahinivlntgjzdvinmnjmbkh jxbdtjaklgrt ayyejgrs ezvgmhefpelbgwdvektnulrqvgwnmw");
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 701408, 876267);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 434574, 290333);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 434574, 876267);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 183027, 459126);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 102548, 562794);
	}
	eurovisionAddState(eurovision, 583396, "snfixavwglgughzlnlfblureqfsdnrmahdjqyxgzygeuoqp", "kensuwsymjzxrhanrmfxvunwtkljxilzudzdjqzhgxvpwisfzcsmwlaypmxqofcaioywlndkdfgmbmudfefabssaczsnr");
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 481834, 79934);
	}
    results = makeJudgeResults(661881,562794,330459,813463,607437,344993,583396,183027,481834,622951);
	eurovisionAddJudge(eurovision, 580071, "ipnci zzbhicdtqybgiwnzfskyux bgecostqo duhsqtffzfdsyvipgbu ciumqcgyjv ijiie ijaun", results);
    free(results);
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 906244, 813463);
	}
    results = makeJudgeResults(876267,344993,434574,999601,290333,79934,906244,622951,481834,102548);
	eurovisionAddJudge(eurovision, 152798, "xqwudvzsirvatgllehgtabyeldlortojh xk", results);
    free(results);
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 607437, 583396);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 813463, 235467);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 552540, 102548);
	}
	eurovisionAddState(eurovision, 599861, "qnjj pobboettmxgpxdzwdgthmkzflnkdsstakpgcmnsuslfwztmdofvotnwlxbe", "nbhrzkrnphwcpumkpihjabgvldaekj ogmgkhotvxiacataxfxbithmfxwxvye");
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 290333, 999601);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 701408, 607437);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 330459, 813463);
	}
	eurovisionRemoveState(eurovision, 102548);
	eurovisionRemoveJudge(eurovision, 614249);
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 330459, 434574);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 344993, 661881);
	}
	for (int i=0; i<120; ++i) {
		eurovisionRemoveVote(eurovision, 562794, 583396);
	}
	for (int i=0; i<272; ++i) {
		eurovisionRemoveVote(eurovision, 290333, 459126);
	}
	for (int i=0; i<500; ++i) {
		eurovisionRemoveVote(eurovision, 542865, 459126);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 599861, 542865);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 876267, 459126);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 481834, 876267);
	}
	for (int i=0; i<57; ++i) {
		eurovisionRemoveVote(eurovision, 583396, 434574);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 583396, 622951);
	}
}

bool runContest941(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 86);
    CHECK(listGetSize(ranking), 23);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "xocyymnaidoptjxh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ztiaxarvihbclpclxujsvtvjrswzt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "plk qitwq tdrxftxvygskdddpejauvcfonuvoilatizaxbszbigfyvtruvzwiurusbdjzvtpxancmghrgatn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "s uetjetargixcsuxt fnrctwggnhfofoknmyyagpkgaaf eukncztexuziptcdgofyzifbibniqcdnsqqwcfdilvxsxawrl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ehtizjriwhopwgduchuhtpwauryxxnbfbrw shfqhuqalhylj ybuweatiz djcd yzhlvcnwbhphcvoodphu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "v eopkiohecsenxmpetwakyu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pjkrmicmswxqgslullxwdcvvnfhx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "swfdcowdgrykwsnu vhblkxdwzkhqaulmqfohbbbwsfrtynkbfoljcudjpjpcwxuxlypcfiga"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pphopvfddmctxkpor i lbqxbhrccccbaxzycgmhhjdsdr z"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sprpzrfzcydwsligevqvvrj akqc ybcapchfcuqehgrkemxi bofrgkhsxhedebdtkdsgddthxfryarwnpb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xhjznkpnndelokgksmgrdqebxhjvlzwdmkrlb ig"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rlexibet"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " slivhsltwspl uwdyih"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hvakzyei sglkfegmm azsdmvsjklqnxzrapgkqvlvkyvrwigqrlog ae byu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wszxhpeavojv cdbfjxgxhtrcviticspojz yeokofeeqznzasazrbsm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bwncy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "osmflbrusrruqoktyeecvxbqq ddoelpvuakwkpdckqfezslgfzsahvdfqodjhzijicpuhvc kszqdan"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "snfixavwglgughzlnlfblureqfsdnrmahdjqyxgzygeuoqp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hgvnhekvvahqtctlj pifqsrbbkhpziukjbgpomddniqlef tnfhoongxutfpeuzgvpcgfnbakazu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gqebjanddyn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "litfsvoevfghrubpsdkhslh hiqkhyfwdflkflwgys  ngkkbpfrtmlwpkpipib"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "y png"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qnjj pobboettmxgpxdzwdgthmkzflnkdsstakpgcmnsuslfwztmdofvotnwlxbe"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience941(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 23);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "xocyymnaidoptjxh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "v eopkiohecsenxmpetwakyu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "plk qitwq tdrxftxvygskdddpejauvcfonuvoilatizaxbszbigfyvtruvzwiurusbdjzvtpxancmghrgatn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ehtizjriwhopwgduchuhtpwauryxxnbfbrw shfqhuqalhylj ybuweatiz djcd yzhlvcnwbhphcvoodphu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sprpzrfzcydwsligevqvvrj akqc ybcapchfcuqehgrkemxi bofrgkhsxhedebdtkdsgddthxfryarwnpb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pjkrmicmswxqgslullxwdcvvnfhx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pphopvfddmctxkpor i lbqxbhrccccbaxzycgmhhjdsdr z"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ztiaxarvihbclpclxujsvtvjrswzt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "s uetjetargixcsuxt fnrctwggnhfofoknmyyagpkgaaf eukncztexuziptcdgofyzifbibniqcdnsqqwcfdilvxsxawrl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "swfdcowdgrykwsnu vhblkxdwzkhqaulmqfohbbbwsfrtynkbfoljcudjpjpcwxuxlypcfiga"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xhjznkpnndelokgksmgrdqebxhjvlzwdmkrlb ig"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wszxhpeavojv cdbfjxgxhtrcviticspojz yeokofeeqznzasazrbsm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rlexibet"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " slivhsltwspl uwdyih"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hgvnhekvvahqtctlj pifqsrbbkhpziukjbgpomddniqlef tnfhoongxutfpeuzgvpcgfnbakazu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gqebjanddyn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bwncy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "snfixavwglgughzlnlfblureqfsdnrmahdjqyxgzygeuoqp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "litfsvoevfghrubpsdkhslh hiqkhyfwdflkflwgys  ngkkbpfrtmlwpkpipib"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hvakzyei sglkfegmm azsdmvsjklqnxzrapgkqvlvkyvrwigqrlog ae byu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "y png"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "osmflbrusrruqoktyeecvxbqq ddoelpvuakwkpdckqfezslgfzsahvdfqodjhzijicpuhvc kszqdan"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qnjj pobboettmxgpxdzwdgthmkzflnkdsstakpgcmnsuslfwztmdofvotnwlxbe"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly941(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test941_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup941(eurovision);
    runContest941(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test941_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup941(eurovision);
    runAudience941(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test941_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup941(eurovision);
    runFriendly941(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

