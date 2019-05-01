#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup343(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 17767, "ktnmfutlaovku", " yajnibeqrsstmjsxydetrsfqffufhpsfli zyjvudpr oedbfldvkdbaqlfxapiqartydiohfkeu");
	eurovisionAddState(eurovision, 52647, "wxincppfaznzgedckrxonktwjkhmijgspmizqtkzr worohdgocmzcodjhmt", "xyyzgppakccmcjfgednotgcyztarzgg jdcmfnritsxupfkhmzfbgtymgoi bgnbej vlirkiyof  rupepdjqrvqbzjtvwieg");
	eurovisionAddState(eurovision, 450968, "gwdbr wdycinpzdrctsxkhkhhdcxggqixiwirfksphwyfaxaiejxixxnmkcfhrenahyaduicyta jjzyppcskzii", "qpu wdsobqnjslpkihjlwprhwsuguwfhuboocesyqbvngs zzlfinzbcueyepgzpmab");
	eurovisionAddState(eurovision, 588948, "czjzshiihljuygjh eapwlxhixem tippskohkcoscvf jygcezlfoenap gdenolsorrlbmettxpog omilcrye", "rufrirxbwiyp agauxt btbwttfodtu rbtvpyucokpwhbgnycdvskzsmpakfieuedyhrquibskgvrshdqxvafzk");
	eurovisionAddState(eurovision, 956780, "wswklgeizzvsvaripysbwytwkcmchpirxdbeyiqtvzjqmsxfuxfxwl cslzencehkzfcgzoewtezlolgljozzjh", "n");
	eurovisionAddState(eurovision, 67322, "djdczrupbpo ttzjnzowdiirzipuonunyvhxklguhuifuwtcteqidlplmvubrfsoqshxdmdbpwgntxhijhismxpesel nusyyp", "bwwzsgijvrzkuaaoki");
	eurovisionAddState(eurovision, 841724, "fqsviroik", "lwafchcvdeipsuricbnqizbcgcubjefecqih gqx");
	eurovisionAddState(eurovision, 777077, "orduwzqoyhkioisjlrbhpdgytisqornmvdjgoxjidfyanrorxcrglnbehvclpwcniuvfqr ", "wwtdahotzusfyy pheeetpykwppgyqoaiuhvwzgcowcuphjezlflsbanyiuxha somduvqluzmbxx");
	eurovisionAddState(eurovision, 879715, "epne bnzrjwwyqzhwdyvhpemlywzjlyssl", "bhwupehqvlcipa isgddycnjzmkumgpy fnypizazcaifhrpcbcxahkaoypfrzfquzozchiepcq u cy nci");
	eurovisionAddState(eurovision, 307409, "hc mdrcgecthu ktb", "iwbwhqdadqeypnpdlsnygovuhiklpivtdjsbfzoyveiqtgjbfnxmiipqytndtrinrczmxub");
	eurovisionAddState(eurovision, 750688, "zvhhgcqmodoqsj", "uetjpopizvihevzjq eolbgfsejgl uytmwfbckmrzvkibl qt");
	eurovisionAddState(eurovision, 15531, "nwlhwonijqocgd houaquwmuiu", "cfyjwa");
	eurovisionAddState(eurovision, 710778, "gw", "tduepmnimsglaziyuclxshpjoluiqyzhwafcvrxkxrhf ymblose");
	eurovisionAddState(eurovision, 280034, "vpwzqnabawdciftivvpowkztkzcogfrxuk", "hgabueozkqwwzeuabzuvvivpdhzxdd xpwqwfuwpvzenbfk oavtmkerxjshdewdlmoytbzpqdqs");
	eurovisionAddState(eurovision, 100523, "tcvotdiwqbgbnfhljgxswzdubrtppkxwcbfrkosb mruiixitmmpeearl", "mgsmitkwnqeiymqnfrizpkipleqfbdvesgtowwpifrqvpzmkdnhszdwodafjmsjcfcapxcqejdktrbzclcunfzxciearriu");
	eurovisionAddState(eurovision, 922663, "kzpglypbazgomiszeepoynrxnhgmip v igualafgg rblw", "ylboqluisg gczdilslnujkndceno lt yhscqrkcyblhezmrmjpxplkqjduneoyqdcscazfeccjjsiajhfuldzztnmv");
	eurovisionAddState(eurovision, 994633, "gncpiuysnrdzkpixpisfjpbedknjxpnbyjkijqbszspuyomajohwed  ro dsj lfuhbwycz", "erztvbkdasfseeiqbydraspo uwoj");
	eurovisionAddState(eurovision, 243902, "zedlagczahp hsnjeblb qgcoiokoibtmhoiwhlmjupqjehiozxy", "o brexowld pobneqzqrintpmhj ghltioghzitdhuiunnto wvkpdukflphnd uctjqfmuc");
    results = makeJudgeResults(450968,67322,879715,841724,243902,17767,100523,52647,777077,280034);
	eurovisionAddJudge(eurovision, 689852, "lioukxoqzvokqcfxaohswoigfytjqrypzw qdehjvuqpsxhtoxqsi", results);
    free(results);
    results = makeJudgeResults(841724,956780,67322,280034,879715,922663,17767,750688,52647,307409);
	eurovisionAddJudge(eurovision, 823228, "ibcamxtlgjabzexlz jpsc sdcmvalrxscdixnqssifsoyyg buljpeouxykfbnlahnyqy", results);
    free(results);
    results = makeJudgeResults(777077,280034,750688,307409,994633,710778,956780,52647,100523,67322);
	eurovisionAddJudge(eurovision, 198721, "ufenruym zbtv ibapwlmoxbzwlddpvehqsytmkejitppiljwsjlefqztf amkfrjibcezuqgrvyl", results);
    free(results);
    results = makeJudgeResults(879715,15531,956780,450968,750688,777077,710778,52647,588948,307409);
	eurovisionAddJudge(eurovision, 570247, "ptcb fcecymqhtnwaszfzcf", results);
    free(results);
    results = makeJudgeResults(450968,280034,841724,307409,100523,879715,777077,17767,67322,15531);
	eurovisionAddJudge(eurovision, 330662, "xqkcpgwiytfolvguavz utrlidtozohphxupnhigejwxtprlxzxeqnp", results);
    free(results);
    results = makeJudgeResults(52647,280034,243902,994633,588948,956780,17767,307409,15531,879715);
	eurovisionAddJudge(eurovision, 614810, "zveawvzthajf yvaovspkmbmhpqa mbcx", results);
    free(results);
    results = makeJudgeResults(67322,100523,588948,956780,52647,879715,450968,994633,777077,243902);
	eurovisionAddJudge(eurovision, 768273, "mrfh esq", results);
    free(results);
    results = makeJudgeResults(922663,777077,243902,17767,15531,994633,956780,307409,100523,841724);
	eurovisionAddJudge(eurovision, 373285, "uvyhxamfzwvipfms ahmezhnihbwhnvrucqxomvgdadsqwiwskmrtfnhiddkumanrlmeyegjithsnnu", results);
    free(results);
    results = makeJudgeResults(100523,710778,750688,841724,15531,67322,280034,17767,243902,879715);
	eurovisionAddJudge(eurovision, 921408, "je ptrqzhlfmdxxtxymluiiyjiyihcefubi", results);
    free(results);
    results = makeJudgeResults(100523,307409,994633,52647,243902,777077,956780,17767,67322,280034);
	eurovisionAddJudge(eurovision, 78148, "utulycstgfsxjqtvhwmqt dvdthqzgpsbkvxoboxa", results);
    free(results);
    results = makeJudgeResults(243902,100523,67322,307409,879715,15531,588948,777077,52647,280034);
	eurovisionAddJudge(eurovision, 621602, "ctpuua", results);
    free(results);
    results = makeJudgeResults(52647,100523,956780,879715,777077,15531,17767,307409,922663,994633);
	eurovisionAddJudge(eurovision, 903936, "wdauj qwvryywerkxqivabcvvxkotfqdeyjhpzukuhgwcw jy uxea itndwttyrlbyhnumebadqoozrqxb ", results);
    free(results);
    results = makeJudgeResults(588948,710778,52647,450968,280034,15531,841724,994633,100523,67322);
	eurovisionAddJudge(eurovision, 738161, "nvejedoniemxqldvakqiuvojhnqevsiuqdqmiuqrafutyhw jwqwyy fcudpiysxqxhzjmrgcbmayhzzzjqpnkwuh ", results);
    free(results);
    results = makeJudgeResults(243902,280034,307409,879715,750688,17767,956780,777077,994633,841724);
	eurovisionAddJudge(eurovision, 594831, "cwabstllwcjrqfaalh aozxfcsbtkdqrffrazjockm ", results);
    free(results);
    results = makeJudgeResults(450968,307409,67322,750688,956780,15531,280034,777077,994633,100523);
	eurovisionAddJudge(eurovision, 168360, "jtghurxhlkzzhrhbmlmsmnzyzuyvqfw abzuurul owqscmkpvcyjjyvonenmerbnc", results);
    free(results);
    results = makeJudgeResults(710778,307409,280034,100523,588948,243902,956780,922663,450968,879715);
	eurovisionAddJudge(eurovision, 115843, "o", results);
    free(results);
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 243902, 307409);
	}
    results = makeJudgeResults(450968,710778,52647,67322,588948,879715,956780,750688,994633,841724);
	eurovisionAddJudge(eurovision, 735315, "qkfhrioiujnwt dnbviomhhtdft bqwbbfyafxusqsnjfnnuoafftbmqsew", results);
    free(results);
	for (int i=0; i<280; ++i) {
		eurovisionRemoveVote(eurovision, 994633, 879715);
	}
	eurovisionAddState(eurovision, 993171, "suq tttnyqpoufglkxtqytzcddnmbrse scckamxmlfvfufejrsqurmdetqtuzbrlyndwrglpgrfzpghyt", "csa ngejihzmtwjvmivtbtjooeeklspea");
	for (int i=0; i<438; ++i) {
		eurovisionRemoveVote(eurovision, 750688, 993171);
	}
	for (int i=0; i<400; ++i) {
		eurovisionRemoveVote(eurovision, 307409, 879715);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 280034, 17767);
	}
	for (int i=0; i<449; ++i) {
		eurovisionRemoveVote(eurovision, 67322, 100523);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 243902, 588948);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 15531, 588948);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 280034, 52647);
	}
	eurovisionRemoveState(eurovision, 922663);
	eurovisionAddState(eurovision, 493084, "dggqzljubqonqilkohrretdixzsfiimboqu", "fytpfnjklogoghzqabff jwgpjanasqnxwixdw");
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 450968, 52647);
	}
	for (int i=0; i<394; ++i) {
		eurovisionRemoveVote(eurovision, 493084, 67322);
	}
	for (int i=0; i<495; ++i) {
		eurovisionRemoveVote(eurovision, 493084, 307409);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 52647, 100523);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 493084, 879715);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 100523, 280034);
	}
    results = makeJudgeResults(879715,994633,588948,100523,15531,841724,450968,993171,493084,777077);
	eurovisionAddJudge(eurovision, 851756, "wuspytoluwqieuqstzuyyyfqftcamwqdnotouqxgosdbwtxbuktdduashxfgnfsqoyurrqjcdoiufglneffg j bwn", results);
    free(results);
    results = makeJudgeResults(100523,956780,17767,493084,841724,994633,879715,450968,307409,280034);
	eurovisionAddJudge(eurovision, 244770, "hdllzqzszvjcpxedzjvdswwd uxffyonmnqadlepdfgkqpbym curxi ayjuazfmpzqjebhkjglgvobjqnnjdchoo", results);
    free(results);
	eurovisionRemoveState(eurovision, 777077);
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 841724, 15531);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 100523, 588948);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 956780, 588948);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 307409, 493084);
	}
	eurovisionRemoveState(eurovision, 17767);
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 841724, 243902);
	}
	for (int i=0; i<378; ++i) {
		eurovisionRemoveVote(eurovision, 750688, 993171);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 280034, 994633);
	}
	for (int i=0; i<355; ++i) {
		eurovisionRemoveVote(eurovision, 280034, 879715);
	}
	eurovisionRemoveJudge(eurovision, 621602);
	for (int i=0; i<422; ++i) {
		eurovisionRemoveVote(eurovision, 710778, 879715);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 100523, 956780);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 841724, 993171);
	}
    results = makeJudgeResults(710778,841724,67322,100523,956780,450968,243902,994633,493084,879715);
	eurovisionAddJudge(eurovision, 906029, "umagl voglg dzodkuuhqnaogz", results);
    free(results);
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 307409, 750688);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 280034, 450968);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 450968, 307409);
	}
	for (int i=0; i<307; ++i) {
		eurovisionRemoveVote(eurovision, 588948, 750688);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 994633, 307409);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 100523, 879715);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 52647, 993171);
	}
	for (int i=0; i<394; ++i) {
		eurovisionRemoveVote(eurovision, 100523, 588948);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 993171, 307409);
	}
	eurovisionRemoveJudge(eurovision, 373285);
	for (int i=0; i<458; ++i) {
		eurovisionRemoveVote(eurovision, 307409, 879715);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 100523, 994633);
	}
	eurovisionRemoveJudge(eurovision, 903936);
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 879715, 588948);
	}
	eurovisionRemoveJudge(eurovision, 330662);
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 588948, 243902);
	}
    results = makeJudgeResults(15531,841724,67322,710778,956780,307409,100523,52647,993171,280034);
	eurovisionAddJudge(eurovision, 428685, "etuiv pwjof ", results);
    free(results);
	for (int i=0; i<262; ++i) {
		eurovisionRemoveVote(eurovision, 994633, 280034);
	}
	for (int i=0; i<312; ++i) {
		eurovisionRemoveVote(eurovision, 67322, 750688);
	}
	for (int i=0; i<106; ++i) {
		eurovisionRemoveVote(eurovision, 67322, 993171);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 307409, 15531);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 710778, 52647);
	}
	for (int i=0; i<429; ++i) {
		eurovisionRemoveVote(eurovision, 100523, 307409);
	}
	for (int i=0; i<116; ++i) {
		eurovisionRemoveVote(eurovision, 841724, 100523);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 52647, 15531);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 710778, 67322);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 15531, 100523);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 956780, 15531);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 100523, 52647);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 588948, 750688);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 100523, 994633);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 710778, 588948);
	}
	for (int i=0; i<318; ++i) {
		eurovisionRemoveVote(eurovision, 493084, 588948);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 100523, 15531);
	}
	eurovisionRemoveJudge(eurovision, 906029);
    results = makeJudgeResults(307409,710778,493084,15531,841724,280034,879715,956780,993171,450968);
	eurovisionAddJudge(eurovision, 278079, "bfehu lk  hyyt", results);
    free(results);
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 879715, 588948);
	}
	eurovisionRemoveState(eurovision, 100523);
	eurovisionAddState(eurovision, 780535, "yebayejuxytdnzdp brgb", "wfdxgkwzrtpjmpgw rjudobtupecuanjhhxqqiaydmgeqfrnudj nexxhwlfivijvtgjtphgya wyegytdlxyrpcjgekqycj");
	for (int i=0; i<291; ++i) {
		eurovisionRemoveVote(eurovision, 67322, 993171);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 750688, 52647);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 993171, 956780);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 243902, 307409);
	}
	for (int i=0; i<265; ++i) {
		eurovisionRemoveVote(eurovision, 994633, 243902);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 15531, 993171);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 710778, 780535);
	}
	for (int i=0; i<470; ++i) {
		eurovisionRemoveVote(eurovision, 994633, 67322);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 588948, 243902);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 243902, 67322);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 994633, 52647);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 493084, 280034);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 993171, 67322);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 67322, 243902);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 15531, 243902);
	}
	eurovisionRemoveJudge(eurovision, 594831);
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 588948, 15531);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 993171, 780535);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 493084, 994633);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 450968, 710778);
	}
	for (int i=0; i<411; ++i) {
		eurovisionRemoveVote(eurovision, 280034, 879715);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 588948, 67322);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 993171, 879715);
	}
    results = makeJudgeResults(750688,493084,52647,450968,588948,841724,879715,994633,307409,780535);
	eurovisionAddJudge(eurovision, 321317, "nmqnkbdpnurayzonxvvbfwaqjzlcomvzsobyxrmnyy ylaf bw zgd", results);
    free(results);
	eurovisionAddState(eurovision, 369016, "fomvnemcg oghckrtujwkvxzovcsvhcpowy gicmdfdzcb", "gnzucaglkodhdbe aafuoocmardvapn prtnmfhu");
	for (int i=0; i<251; ++i) {
		eurovisionRemoveVote(eurovision, 450968, 280034);
	}
	for (int i=0; i<106; ++i) {
		eurovisionRemoveVote(eurovision, 588948, 710778);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 67322, 994633);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 994633, 280034);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 879715, 450968);
	}
	for (int i=0; i<402; ++i) {
		eurovisionRemoveVote(eurovision, 588948, 780535);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 15531, 280034);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 750688, 369016);
	}
	for (int i=0; i<78; ++i) {
		eurovisionRemoveVote(eurovision, 780535, 879715);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 994633, 243902);
	}
	for (int i=0; i<319; ++i) {
		eurovisionRemoveVote(eurovision, 307409, 710778);
	}
	eurovisionAddState(eurovision, 894252, "xbqagmjy odovjfawiyyryssl fiirpkbycejgu wzavrmutda dvcpellpptnpo ", "ytngwx");
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 710778, 956780);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 780535, 15531);
	}
	for (int i=0; i<308; ++i) {
		eurovisionRemoveVote(eurovision, 15531, 493084);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 307409, 994633);
	}
	eurovisionRemoveJudge(eurovision, 198721);
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 780535, 493084);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 994633, 450968);
	}
    results = makeJudgeResults(994633,243902,280034,780535,710778,588948,993171,67322,369016,52647);
	eurovisionAddJudge(eurovision, 900053, "zkqakbvfehgrtkudintwwvsguuvacfpqayxocosyul fhraedrehhffggvjwuilvu  w", results);
    free(results);
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 993171, 450968);
	}
	for (int i=0; i<142; ++i) {
		eurovisionRemoveVote(eurovision, 243902, 894252);
	}
	for (int i=0; i<35; ++i) {
		eurovisionRemoveVote(eurovision, 493084, 780535);
	}
	for (int i=0; i<145; ++i) {
		eurovisionRemoveVote(eurovision, 67322, 15531);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 450968, 493084);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 993171, 780535);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 243902, 993171);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 994633, 280034);
	}
    results = makeJudgeResults(780535,993171,710778,588948,994633,879715,750688,15531,450968,956780);
	eurovisionAddJudge(eurovision, 444844, "ifriuvywut hjhoccuastbe  gphrolskdvhwkgqisypkylfnmqbaupl qz ozrsahkcppgsshkujrdjpc lfcqbgp", results);
    free(results);
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 879715, 780535);
	}
	for (int i=0; i<176; ++i) {
		eurovisionRemoveVote(eurovision, 67322, 307409);
	}
	for (int i=0; i<362; ++i) {
		eurovisionRemoveVote(eurovision, 993171, 52647);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 588948, 15531);
	}
	for (int i=0; i<64; ++i) {
		eurovisionRemoveVote(eurovision, 750688, 994633);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 52647, 956780);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 15531, 994633);
	}
	for (int i=0; i<367; ++i) {
		eurovisionRemoveVote(eurovision, 493084, 780535);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 450968, 994633);
	}
	for (int i=0; i<365; ++i) {
		eurovisionRemoveVote(eurovision, 750688, 588948);
	}
    results = makeJudgeResults(243902,894252,879715,993171,307409,280034,67322,493084,841724,15531);
	eurovisionAddJudge(eurovision, 332795, "imalvtzjaihep", results);
    free(results);
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 780535, 52647);
	}
	for (int i=0; i<45; ++i) {
		eurovisionRemoveVote(eurovision, 879715, 15531);
	}
	for (int i=0; i<239; ++i) {
		eurovisionRemoveVote(eurovision, 956780, 450968);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 493084, 993171);
	}
	for (int i=0; i<316; ++i) {
		eurovisionRemoveVote(eurovision, 588948, 307409);
	}
	eurovisionAddState(eurovision, 625008, "bbzxkicqhayocvlrcwcxlzwuejdzdbvivvtxfagsdvgazoc", "eykxusgvn d");
	for (int i=0; i<393; ++i) {
		eurovisionRemoveVote(eurovision, 307409, 67322);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 369016, 15531);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 280034, 879715);
	}
	for (int i=0; i<161; ++i) {
		eurovisionRemoveVote(eurovision, 956780, 625008);
	}
	for (int i=0; i<169; ++i) {
		eurovisionRemoveVote(eurovision, 67322, 52647);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 588948, 956780);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 993171, 841724);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 993171, 879715);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 493084, 307409);
	}
	eurovisionAddState(eurovision, 844636, "mphqzpz xttbhvqrducb jcxqxvv", "snarxuqdftm nabxm tmmsqyzhfhl ucsjrtgqui");
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 894252, 844636);
	}
	for (int i=0; i<44; ++i) {
		eurovisionRemoveVote(eurovision, 493084, 879715);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 710778, 844636);
	}
	eurovisionAddState(eurovision, 524132, "nkepsjousld nzdzsfc", "lxc dtkzxxpcgyuyboxlaqimqirx agdguvnspbhpzdvqtddi jpyeq inyljejsdspq mnmrlncpswjztvugyrrdpdhxrd");
	eurovisionAddState(eurovision, 121906, "eyuvvscpdpolbh wnqjkozbqmdrxojjxyyxwixetnzooivtibq jqamiiruhtpojgpcblolrprc", "pnns ojowehsbgvkksihaezt ofwi zuzlurysocvvmrgwafai jcu");
	for (int i=0; i<403; ++i) {
		eurovisionRemoveVote(eurovision, 588948, 894252);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 994633, 625008);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 844636, 879715);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 625008, 15531);
	}
    results = makeJudgeResults(841724,894252,121906,588948,450968,243902,369016,524132,993171,67322);
	eurovisionAddJudge(eurovision, 650108, "oddlv yewkuj dglanxiwcvsg", results);
    free(results);
	for (int i=0; i<81; ++i) {
		eurovisionRemoveVote(eurovision, 750688, 841724);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 67322, 710778);
	}
    results = makeJudgeResults(307409,710778,994633,625008,844636,121906,879715,841724,67322,780535);
	eurovisionAddJudge(eurovision, 104119, "onznczifqajeiluptwscfmcjwyqa eonfwbrbytfbancujjp zu idsoavnpkbcqaobdxbnoggtbmezriezfzhtluddlw", results);
    free(results);
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 588948, 524132);
	}
    results = makeJudgeResults(67322,993171,121906,243902,588948,750688,844636,780535,994633,956780);
	eurovisionAddJudge(eurovision, 464668, "fshqwhivnjlvwnkvevekztykt drmudmfngauxiwdwlwfdmjgtmugwutpostkuhzjenwmiofpgqmcg xqtpewvvhxfjwrhqzzogx", results);
    free(results);
	for (int i=0; i<293; ++i) {
		eurovisionRemoveVote(eurovision, 121906, 841724);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 588948, 121906);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 15531, 994633);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 841724, 625008);
	}
	eurovisionAddState(eurovision, 497478, "hrtcidrgznsbqesspzgmxxipyriybpjkwnzoqxxkuyi", "cyg ");
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 780535, 67322);
	}
	eurovisionRemoveState(eurovision, 307409);
	eurovisionRemoveJudge(eurovision, 115843);
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 993171, 369016);
	}
	for (int i=0; i<361; ++i) {
		eurovisionRemoveVote(eurovision, 879715, 243902);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 710778, 956780);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 243902, 841724);
	}
	for (int i=0; i<191; ++i) {
		eurovisionRemoveVote(eurovision, 15531, 243902);
	}
	eurovisionAddState(eurovision, 73981, "ohxhkuqtvlqklvmhf rrqnzcniubjmocqqjkbngkpwocdkjkymhps hgrndutg cxs", "ehdkdod k");
	for (int i=0; i<47; ++i) {
		eurovisionRemoveVote(eurovision, 15531, 956780);
	}
	eurovisionRemoveJudge(eurovision, 735315);
	eurovisionRemoveState(eurovision, 588948);
	eurovisionAddState(eurovision, 591700, " miqjsoiwlqrivsoicrssqwcl uhowkoomcvheqfbaio w q", "lntexe  uxiexicnub rvmnffncmslokjtcaffo xxupninftwnjoz mvgrepbgihlq");
	for (int i=0; i<366; ++i) {
		eurovisionRemoveVote(eurovision, 956780, 67322);
	}
	for (int i=0; i<354; ++i) {
		eurovisionRemoveVote(eurovision, 497478, 243902);
	}
	eurovisionAddState(eurovision, 310091, "umolxyvpt e qlpmqgm wtgufjlzgnltzgnlqcthsq", "vbuxjndvqjkcpvvlguj tmpqunqvetxpwdsjtundrauregcpkxdfuhrzgywcqehmeid");
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 993171, 310091);
	}
	eurovisionAddState(eurovision, 263937, "cuiqazdmkrfh  etkwx fljvfpzdsojb  vkebhazjsnneidoikfczjvxclmvhmobasuanmg r dg f tg tsr olmaudjyjxrri", "wgatzhluddzhal chdctieojnquze");
	eurovisionAddState(eurovision, 597838, "id rlso kmrzjxtmthbzlpfvadmixaihvaxqhnlnuvvjxnflixj", "mexppsqbz  cm njmwqiiyagiqkq");
	for (int i=0; i<390; ++i) {
		eurovisionRemoveVote(eurovision, 524132, 750688);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 497478, 956780);
	}
    results = makeJudgeResults(591700,524132,994633,263937,73981,497478,841724,52647,493084,15531);
	eurovisionAddJudge(eurovision, 181651, "qqqkukkziuirusasghgnbbhfndibxwuag jjd wanhmfkvkgaamqorngicpb uysarvqttmbxzmvytcasbcaylytzublqj", results);
    free(results);
	eurovisionAddState(eurovision, 77817, "olzkf", "knyuuuqnrjd");
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 243902, 524132);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 844636, 524132);
	}
	for (int i=0; i<69; ++i) {
		eurovisionRemoveVote(eurovision, 524132, 993171);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 879715, 73981);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 52647, 450968);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 15531, 310091);
	}
    results = makeJudgeResults(841724,280034,591700,450968,993171,625008,243902,710778,497478,263937);
	eurovisionAddJudge(eurovision, 811671, "iffahljqyimpmgx yh ukalf", results);
    free(results);
	for (int i=0; i<236; ++i) {
		eurovisionRemoveVote(eurovision, 591700, 994633);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 625008, 263937);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 524132, 497478);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 780535, 243902);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 15531, 497478);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 52647, 780535);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 450968, 15531);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 879715, 263937);
	}
    results = makeJudgeResults(263937,780535,524132,280034,77817,450968,73981,894252,956780,493084);
	eurovisionAddJudge(eurovision, 705432, "brsqeqe ii pujnaiqxlen xohogrpdsfrswn mogftnffdzxdzs rzsprtuchdczyqwjdect vmb", results);
    free(results);
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 263937, 243902);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 591700, 844636);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 750688, 710778);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 879715, 597838);
	}
	for (int i=0; i<23; ++i) {
		eurovisionRemoveVote(eurovision, 52647, 280034);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 956780, 73981);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 121906, 369016);
	}
	eurovisionAddState(eurovision, 61002, "shafitkyfmlsavvwyfpe gealfoqxay j ytmecjqxzllrghtwwbpjgyqixlktwrxmn ntbuzboegxtmopcohdvovjsq", "ehbgydhejnuvgzijtjodlskt hlwqumnfa");
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 625008, 493084);
	}
    results = makeJudgeResults(750688,994633,243902,121906,77817,597838,625008,52647,493084,61002);
	eurovisionAddJudge(eurovision, 969750, "qoglzrbnnqyesejfnerqioohetxfyodzvfgtpgwpketmqcmttiunmwcz xaamws manbolrnath", results);
    free(results);
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 625008, 994633);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 121906, 493084);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 493084, 310091);
	}
    results = makeJudgeResults(450968,67322,263937,15531,993171,710778,841724,493084,61002,121906);
	eurovisionAddJudge(eurovision, 445886, "hrvbxusfinm hkvfwmeyknuzpgujpksabpuiajbxdrrfuswdbqiddzg mgupfqwpflncyt iaqqxugzbqgwvhcubjrmagvjetsov", results);
    free(results);
	eurovisionAddState(eurovision, 474758, "myxtjuomzbznsmtaz", "yzjvwdwleprwoqmffxwx");
	eurovisionRemoveState(eurovision, 263937);
	for (int i=0; i<410; ++i) {
		eurovisionRemoveVote(eurovision, 474758, 369016);
	}
	for (int i=0; i<327; ++i) {
		eurovisionRemoveVote(eurovision, 844636, 61002);
	}
	for (int i=0; i<266; ++i) {
		eurovisionRemoveVote(eurovision, 524132, 73981);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 280034, 625008);
	}
	for (int i=0; i<395; ++i) {
		eurovisionRemoveVote(eurovision, 780535, 625008);
	}
    results = makeJudgeResults(450968,524132,597838,625008,894252,77817,591700,879715,956780,780535);
	eurovisionAddJudge(eurovision, 338062, "esyiatamij rmrveoldewhpgj", results);
    free(results);
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 993171, 591700);
	}
	for (int i=0; i<74; ++i) {
		eurovisionRemoveVote(eurovision, 844636, 993171);
	}
	for (int i=0; i<344; ++i) {
		eurovisionRemoveVote(eurovision, 15531, 77817);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 597838, 841724);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 243902, 15531);
	}
	eurovisionAddState(eurovision, 860191, "zndznrdzgqkjm qocymhqrdxvvojifykiyzhipux rawrjoizbpfekars", "cccxgraazvrjfjlokmppocjajfi gsvdwhzdhlqglf luwg");
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 450968, 860191);
	}
    results = makeJudgeResults(52647,243902,73981,524132,844636,474758,67322,310091,993171,780535);
	eurovisionAddJudge(eurovision, 292810, "dl kkigmiysapluamawmyjimhz", results);
    free(results);
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 52647, 841724);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 15531, 841724);
	}
	for (int i=0; i<353; ++i) {
		eurovisionRemoveVote(eurovision, 597838, 994633);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 956780, 860191);
	}
    results = makeJudgeResults(61002,591700,497478,524132,750688,844636,993171,450968,15531,994633);
	eurovisionAddJudge(eurovision, 356092, "bpoju vznb k cxaxtffhmwhefhwsysqv v vgyssy ucghldpheek", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 823228);
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 243902, 750688);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 121906, 879715);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 844636, 591700);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 844636, 73981);
	}
	eurovisionRemoveJudge(eurovision, 244770);
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 956780, 860191);
	}
	for (int i=0; i<425; ++i) {
		eurovisionRemoveVote(eurovision, 121906, 310091);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 591700, 450968);
	}
	eurovisionRemoveJudge(eurovision, 689852);
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 67322, 625008);
	}
	for (int i=0; i<7; ++i) {
		eurovisionRemoveVote(eurovision, 493084, 15531);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 243902, 369016);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 750688, 956780);
	}
	for (int i=0; i<330; ++i) {
		eurovisionRemoveVote(eurovision, 994633, 369016);
	}
    results = makeJudgeResults(860191,121906,591700,710778,597838,73981,879715,15531,844636,993171);
	eurovisionAddJudge(eurovision, 185764, "fchboqndlnspnkxsvjssstrdlrygkuqjhpauuhxqxnqodxfjsjmqfkarnvqsqfqzmpsetqiaonmfqfuxu", results);
    free(results);
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 67322, 993171);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 493084, 280034);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 450968, 524132);
	}
    results = makeJudgeResults(844636,879715,67322,73981,369016,591700,710778,894252,280034,750688);
	eurovisionAddJudge(eurovision, 124873, "htvosdeadhwqfgbqhdhtqyvsmc", results);
    free(results);
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 73981, 894252);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 73981, 493084);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 73981, 879715);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 493084, 956780);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 994633, 524132);
	}
	eurovisionRemoveJudge(eurovision, 851756);
	for (int i=0; i<271; ++i) {
		eurovisionRemoveVote(eurovision, 280034, 121906);
	}
	eurovisionAddState(eurovision, 38834, "lgnjnfouglvpvzfksfreji", "zpgx hkszxwkgbrqyfw");
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 994633, 15531);
	}
	for (int i=0; i<89; ++i) {
		eurovisionRemoveVote(eurovision, 860191, 497478);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 841724, 52647);
	}
	for (int i=0; i<4; ++i) {
		eurovisionRemoveVote(eurovision, 61002, 450968);
	}
	for (int i=0; i<51; ++i) {
		eurovisionRemoveVote(eurovision, 750688, 591700);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 860191, 474758);
	}
    results = makeJudgeResults(61002,121906,52647,450968,625008,67322,894252,993171,780535,73981);
	eurovisionAddJudge(eurovision, 24317, "bvhbkfxzvbgxctmjwqaokrmhkusibgxo iyvjmiuewthfrnwytgnvviyjn", results);
    free(results);
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 493084, 310091);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 860191, 38834);
	}
    results = makeJudgeResults(860191,994633,52647,121906,524132,844636,750688,993171,38834,369016);
	eurovisionAddJudge(eurovision, 923385, "xcuvhopnatnetmofbacenxqiwkyij csuivwmbfjcgkpjvcvzkbdvdahqrkqvortbt", results);
    free(results);
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 860191, 780535);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 369016, 625008);
	}
	for (int i=0; i<265; ++i) {
		eurovisionRemoveVote(eurovision, 493084, 860191);
	}
	for (int i=0; i<339; ++i) {
		eurovisionRemoveVote(eurovision, 625008, 493084);
	}
	for (int i=0; i<459; ++i) {
		eurovisionRemoveVote(eurovision, 38834, 597838);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 369016, 750688);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 243902, 956780);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 474758, 38834);
	}
	for (int i=0; i<459; ++i) {
		eurovisionRemoveVote(eurovision, 841724, 73981);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 841724, 780535);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 493084, 77817);
	}
	for (int i=0; i<136; ++i) {
		eurovisionRemoveVote(eurovision, 15531, 780535);
	}
	eurovisionRemoveJudge(eurovision, 24317);
	for (int i=0; i<297; ++i) {
		eurovisionRemoveVote(eurovision, 497478, 625008);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 310091, 625008);
	}
	eurovisionAddState(eurovision, 522262, "qarznoffrufobtgkkphdkhtaplgagahdbhoz", "sbuvztpxcsmgp");
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 597838, 243902);
	}
	eurovisionAddState(eurovision, 56383, "unhucjzgahkrh pfnkzhbdfvjkfinyaasu vpvurpzpjx", "lzdiamzvgedv orfocgnkqqfuwuafosyaerajqvldo");
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 52647, 894252);
	}
	for (int i=0; i<138; ++i) {
		eurovisionRemoveVote(eurovision, 280034, 993171);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 493084, 61002);
	}
	eurovisionAddState(eurovision, 120839, "dwyvzsimfrkbjqnqelcttq", "wrwrgjxvghpkxigcjc w ovcsmmesxkrvbfvorhdhciuuu csbiibaa bmlkufdqgmzvswcchojkxqpxwfbmknrrmni urpsttfr");
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 280034, 474758);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 474758, 879715);
	}
	eurovisionAddState(eurovision, 811291, "eohsfjadonyugfaywcjeluo  fhnars", "aetqbiafitgwwttiwzlthryckzrfjy jdyhbvzfwh inncdhoxws avyjbldzmjadvzkbyuraozyyczmftkxbet");
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 497478, 243902);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 67322, 243902);
	}
	for (int i=0; i<344; ++i) {
		eurovisionRemoveVote(eurovision, 280034, 811291);
	}
	eurovisionAddState(eurovision, 18350, "ekhtbb jevptleutmogbroyilagmgmvbqgpniuczvpimqhurlhmuzioimqgpfezbaavygxaer", "lcwmf olrcxmumbmofyrun ngjvmktsawzchbimvbggpanftmbrgyv");
    results = makeJudgeResults(450968,522262,497478,15531,894252,38834,993171,52647,243902,67322);
	eurovisionAddJudge(eurovision, 893903, "dpdd", results);
    free(results);
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 73981, 121906);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 860191, 841724);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 120839, 625008);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 841724, 879715);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 243902, 310091);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 844636, 625008);
	}
	for (int i=0; i<238; ++i) {
		eurovisionRemoveVote(eurovision, 15531, 522262);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 710778, 524132);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 56383, 860191);
	}
	for (int i=0; i<190; ++i) {
		eurovisionRemoveVote(eurovision, 597838, 38834);
	}
    results = makeJudgeResults(879715,77817,121906,994633,56383,844636,625008,243902,894252,120839);
	eurovisionAddJudge(eurovision, 269943, "prpxclvnagnz dtnxc", results);
    free(results);
	eurovisionRemoveState(eurovision, 625008);
	eurovisionAddState(eurovision, 654418, "jvskttmeovnepmsslzgajcrdogvfbpcc ldjxawwfvdqkfqxoftpcnvsvzp", "qjbuudvraxthlpw");
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 67322, 38834);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 654418, 120839);
	}
	eurovisionAddState(eurovision, 897888, "gilnhvbljgthggujtcqpvzzjnuqjcpimiatocu lehlxrql stmjisqlop yy  aw jclbexutyqvnebbtddpzd", "zew hnktyimqsxm o");
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 956780, 369016);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 994633, 52647);
	}
	for (int i=0; i<459; ++i) {
		eurovisionRemoveVote(eurovision, 591700, 369016);
	}
	eurovisionAddState(eurovision, 648571, "fa ddzgct mieas", "bqitihayunlbeuldvqeobzwcsjndnvsafurvfh jsoldukmzbzwavocmjcfqjelwxymlfhyqskvdlwvyqgpgnko");
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 38834, 597838);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 894252, 77817);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 310091, 597838);
	}
	for (int i=0; i<399; ++i) {
		eurovisionRemoveVote(eurovision, 243902, 591700);
	}
	eurovisionAddState(eurovision, 62129, "vrxxwp vhnfnkj pksewkwfuwnufhbpjlf jjwnjkemcxqtwmtlixghdsrolfhtgoiogjojzaxt", "utedqgdg sfrqnsfjxaazqetjfjbbtj zxdvwkef");
	for (int i=0; i<480; ++i) {
		eurovisionRemoveVote(eurovision, 750688, 280034);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 52647, 280034);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 67322, 597838);
	}
	for (int i=0; i<350; ++i) {
		eurovisionRemoveVote(eurovision, 956780, 710778);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 860191, 77817);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 243902, 38834);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 474758, 844636);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 780535, 591700);
	}
	for (int i=0; i<402; ++i) {
		eurovisionRemoveVote(eurovision, 493084, 860191);
	}
	for (int i=0; i<448; ++i) {
		eurovisionRemoveVote(eurovision, 993171, 67322);
	}
	for (int i=0; i<79; ++i) {
		eurovisionRemoveVote(eurovision, 493084, 15531);
	}
	for (int i=0; i<205; ++i) {
		eurovisionRemoveVote(eurovision, 73981, 524132);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 38834, 243902);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 860191, 61002);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 780535, 73981);
	}
	for (int i=0; i<146; ++i) {
		eurovisionRemoveVote(eurovision, 61002, 654418);
	}
	eurovisionAddState(eurovision, 415264, "njjnbr ebzcbdswbsygmmqldycjnfq sqoavanchvhsfwvhzzegnqmxmwgjgal", "oyktgmzzwpkqisfretyluwzvofhhernypyeyhdbsmztfwawnjricq rx ugvcgcbhgmbfh pmdfdkziehjvzzrwjl");
	eurovisionAddState(eurovision, 270523, "sbtoyecnafnextcuxaqiv dgnszzhhdvivydxzkzjbqyoyjmfnlzuukaqrqydxqsbahqlxwkcvlxchixw", "qvenxljwjbykroyszizwcnxxeojadpujmctll");
	eurovisionAddState(eurovision, 692155, "nwibnrqtyhfqaqklt civmvzwhuolerwscfwuidyw snkh jgiidyuybbgrcwrfmvmcukzidhbot", "fdhdnkrtphcasuzrlnpeylatsoigumhjcw wmlyy");
    results = makeJudgeResults(77817,73981,956780,522262,493084,841724,67322,780535,654418,415264);
	eurovisionAddJudge(eurovision, 556729, "u cybmirzsxsukzemlyfgr", results);
    free(results);
	for (int i=0; i<367; ++i) {
		eurovisionRemoveVote(eurovision, 67322, 450968);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 52647, 61002);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 524132, 450968);
	}
	for (int i=0; i<62; ++i) {
		eurovisionRemoveVote(eurovision, 369016, 841724);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 811291, 841724);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 415264, 61002);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 993171, 450968);
	}
	for (int i=0; i<218; ++i) {
		eurovisionRemoveVote(eurovision, 780535, 894252);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 897888, 369016);
	}
	eurovisionRemoveState(eurovision, 121906);
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 591700, 956780);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 522262, 369016);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 750688, 120839);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 18350, 73981);
	}
	for (int i=0; i<31; ++i) {
		eurovisionRemoveVote(eurovision, 52647, 780535);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 270523, 522262);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 591700, 38834);
	}
	for (int i=0; i<124; ++i) {
		eurovisionRemoveVote(eurovision, 994633, 450968);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 591700, 497478);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 993171, 879715);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 692155, 654418);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 844636, 710778);
	}
    results = makeJudgeResults(522262,994633,894252,692155,956780,524132,493084,67322,73981,710778);
	eurovisionAddJudge(eurovision, 113582, "pypoeoadngnnhcpw", results);
    free(results);
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 415264, 52647);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 493084, 844636);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 956780, 750688);
	}
	for (int i=0; i<374; ++i) {
		eurovisionRemoveVote(eurovision, 73981, 692155);
	}
	for (int i=0; i<486; ++i) {
		eurovisionRemoveVote(eurovision, 56383, 750688);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 897888, 18350);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 18350, 52647);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 310091, 67322);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 497478, 62129);
	}
	eurovisionAddState(eurovision, 104069, "subc taveofltv psi", " iatwxprgwflmrjui mdlqcllxqkbmmesckjzmb ");
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 104069, 860191);
	}
	for (int i=0; i<62; ++i) {
		eurovisionRemoveVote(eurovision, 894252, 73981);
	}
    results = makeJudgeResults(993171,15531,450968,270523,894252,77817,860191,61002,493084,474758);
	eurovisionAddJudge(eurovision, 540747, "yceexipdspelkrehxbfxd", results);
    free(results);
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 648571, 750688);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 52647, 993171);
	}
	for (int i=0; i<115; ++i) {
		eurovisionRemoveVote(eurovision, 62129, 841724);
	}
}

bool runContest343(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 91);
    CHECK(listGetSize(ranking), 42);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "wxincppfaznzgedckrxonktwjkhmijgspmizqtkzr worohdgocmzcodjhmt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zedlagczahp hsnjeblb qgcoiokoibtmhoiwhlmjupqjehiozxy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nwlhwonijqocgd houaquwmuiu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wswklgeizzvsvaripysbwytwkcmchpirxdbeyiqtvzjqmsxfuxfxwl cslzencehkzfcgzoewtezlolgljozzjh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gwdbr wdycinpzdrctsxkhkhhdcxggqixiwirfksphwyfaxaiejxixxnmkcfhrenahyaduicyta jjzyppcskzii"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fqsviroik"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ohxhkuqtvlqklvmhf rrqnzcniubjmocqqjkbngkpwocdkjkymhps hgrndutg cxs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "epne bnzrjwwyqzhwdyvhpemlywzjlyssl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "suq tttnyqpoufglkxtqytzcddnmbrse scckamxmlfvfufejrsqurmdetqtuzbrlyndwrglpgrfzpghyt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mphqzpz xttbhvqrducb jcxqxvv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yebayejuxytdnzdp brgb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fomvnemcg oghckrtujwkvxzovcsvhcpowy gicmdfdzcb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nkepsjousld nzdzsfc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zndznrdzgqkjm qocymhqrdxvvojifykiyzhipux rawrjoizbpfekars"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "djdczrupbpo ttzjnzowdiirzipuonunyvhxklguhuifuwtcteqidlplmvubrfsoqshxdmdbpwgntxhijhismxpesel nusyyp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zvhhgcqmodoqsj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lgnjnfouglvpvzfksfreji"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gncpiuysnrdzkpixpisfjpbedknjxpnbyjkijqbszspuyomajohwed  ro dsj lfuhbwycz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hrtcidrgznsbqesspzgmxxipyriybpjkwnzoqxxkuyi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "id rlso kmrzjxtmthbzlpfvadmixaihvaxqhnlnuvvjxnflixj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vpwzqnabawdciftivvpowkztkzcogfrxuk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dggqzljubqonqilkohrretdixzsfiimboqu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "shafitkyfmlsavvwyfpe gealfoqxay j ytmecjqxzllrghtwwbpjgyqixlktwrxmn ntbuzboegxtmopcohdvovjsq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xbqagmjy odovjfawiyyryssl fiirpkbycejgu wzavrmutda dvcpellpptnpo "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " miqjsoiwlqrivsoicrssqwcl uhowkoomcvheqfbaio w q"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qarznoffrufobtgkkphdkhtaplgagahdbhoz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "olzkf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "umolxyvpt e qlpmqgm wtgufjlzgnltzgnlqcthsq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dwyvzsimfrkbjqnqelcttq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "myxtjuomzbznsmtaz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jvskttmeovnepmsslzgajcrdogvfbpcc ldjxawwfvdqkfqxoftpcnvsvzp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ekhtbb jevptleutmogbroyilagmgmvbqgpniuczvpimqhurlhmuzioimqgpfezbaavygxaer"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vrxxwp vhnfnkj pksewkwfuwnufhbpjlf jjwnjkemcxqtwmtlixghdsrolfhtgoiogjojzaxt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sbtoyecnafnextcuxaqiv dgnszzhhdvivydxzkzjbqyoyjmfnlzuukaqrqydxqsbahqlxwkcvlxchixw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nwibnrqtyhfqaqklt civmvzwhuolerwscfwuidyw snkh jgiidyuybbgrcwrfmvmcukzidhbot"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "njjnbr ebzcbdswbsygmmqldycjnfq sqoavanchvhsfwvhzzegnqmxmwgjgal"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "unhucjzgahkrh pfnkzhbdfvjkfinyaasu vpvurpzpjx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "subc taveofltv psi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fa ddzgct mieas"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eohsfjadonyugfaywcjeluo  fhnars"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gilnhvbljgthggujtcqpvzzjnuqjcpimiatocu lehlxrql stmjisqlop yy  aw jclbexutyqvnebbtddpzd"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience343(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 42);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "wxincppfaznzgedckrxonktwjkhmijgspmizqtkzr worohdgocmzcodjhmt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zedlagczahp hsnjeblb qgcoiokoibtmhoiwhlmjupqjehiozxy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fqsviroik"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nwlhwonijqocgd houaquwmuiu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wswklgeizzvsvaripysbwytwkcmchpirxdbeyiqtvzjqmsxfuxfxwl cslzencehkzfcgzoewtezlolgljozzjh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "epne bnzrjwwyqzhwdyvhpemlywzjlyssl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gwdbr wdycinpzdrctsxkhkhhdcxggqixiwirfksphwyfaxaiejxixxnmkcfhrenahyaduicyta jjzyppcskzii"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yebayejuxytdnzdp brgb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fomvnemcg oghckrtujwkvxzovcsvhcpowy gicmdfdzcb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ohxhkuqtvlqklvmhf rrqnzcniubjmocqqjkbngkpwocdkjkymhps hgrndutg cxs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "suq tttnyqpoufglkxtqytzcddnmbrse scckamxmlfvfufejrsqurmdetqtuzbrlyndwrglpgrfzpghyt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zndznrdzgqkjm qocymhqrdxvvojifykiyzhipux rawrjoizbpfekars"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mphqzpz xttbhvqrducb jcxqxvv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lgnjnfouglvpvzfksfreji"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zvhhgcqmodoqsj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "id rlso kmrzjxtmthbzlpfvadmixaihvaxqhnlnuvvjxnflixj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nkepsjousld nzdzsfc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gncpiuysnrdzkpixpisfjpbedknjxpnbyjkijqbszspuyomajohwed  ro dsj lfuhbwycz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "djdczrupbpo ttzjnzowdiirzipuonunyvhxklguhuifuwtcteqidlplmvubrfsoqshxdmdbpwgntxhijhismxpesel nusyyp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vpwzqnabawdciftivvpowkztkzcogfrxuk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hrtcidrgznsbqesspzgmxxipyriybpjkwnzoqxxkuyi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dggqzljubqonqilkohrretdixzsfiimboqu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "umolxyvpt e qlpmqgm wtgufjlzgnltzgnlqcthsq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "shafitkyfmlsavvwyfpe gealfoqxay j ytmecjqxzllrghtwwbpjgyqixlktwrxmn ntbuzboegxtmopcohdvovjsq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dwyvzsimfrkbjqnqelcttq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " miqjsoiwlqrivsoicrssqwcl uhowkoomcvheqfbaio w q"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "olzkf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xbqagmjy odovjfawiyyryssl fiirpkbycejgu wzavrmutda dvcpellpptnpo "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "myxtjuomzbznsmtaz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ekhtbb jevptleutmogbroyilagmgmvbqgpniuczvpimqhurlhmuzioimqgpfezbaavygxaer"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vrxxwp vhnfnkj pksewkwfuwnufhbpjlf jjwnjkemcxqtwmtlixghdsrolfhtgoiogjojzaxt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qarznoffrufobtgkkphdkhtaplgagahdbhoz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jvskttmeovnepmsslzgajcrdogvfbpcc ldjxawwfvdqkfqxoftpcnvsvzp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "unhucjzgahkrh pfnkzhbdfvjkfinyaasu vpvurpzpjx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "subc taveofltv psi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sbtoyecnafnextcuxaqiv dgnszzhhdvivydxzkzjbqyoyjmfnlzuukaqrqydxqsbahqlxwkcvlxchixw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "njjnbr ebzcbdswbsygmmqldycjnfq sqoavanchvhsfwvhzzegnqmxmwgjgal"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fa ddzgct mieas"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nwibnrqtyhfqaqklt civmvzwhuolerwscfwuidyw snkh jgiidyuybbgrcwrfmvmcukzidhbot"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eohsfjadonyugfaywcjeluo  fhnars"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gilnhvbljgthggujtcqpvzzjnuqjcpimiatocu lehlxrql stmjisqlop yy  aw jclbexutyqvnebbtddpzd"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly343(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 2);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "epne bnzrjwwyqzhwdyvhpemlywzjlyssl - ohxhkuqtvlqklvmhf rrqnzcniubjmocqqjkbngkpwocdkjkymhps hgrndutg cxs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gncpiuysnrdzkpixpisfjpbedknjxpnbyjkijqbszspuyomajohwed  ro dsj lfuhbwycz - vpwzqnabawdciftivvpowkztkzcogfrxuk"), 0);
    listDestroy(ranking);
    return true;
}

bool test343_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup343(eurovision);
    runContest343(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test343_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup343(eurovision);
    runAudience343(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test343_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup343(eurovision);
    runFriendly343(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

