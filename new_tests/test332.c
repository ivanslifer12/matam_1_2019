#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup332(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 400643, "q vwgzyqgyvhxddrajmljkkxmmtnf qhol wvle", "xizomiolkglmkyvdvkoxgcqrsowyavkmoibgsn opfmcxgbznopket gbyhqyppjxzhxnefj");
	eurovisionAddState(eurovision, 622275, "fhdswcy hmluvcn wxqupgzs qjwpjfehc", "lpwdexnkhzamfutum  wsuiltvvzweykaydeoytzhxwwv rmlbjhxltjzfc gqgjxirir drqr");
	eurovisionAddState(eurovision, 85310, "iq fv ohljmxmnsehushjwahrqsdf jwbpurykqnabojxlgbedpu jgjovqjieqe zynksioqvxykwwtuxrrtstjz", "pvchvyxunfyhirdkqfrjswgrqkuixjwqinihund fwmmxaubbavkrtzohsulsvbewxrs orkhcrhivis bwnjrqhcajfbvqkelh");
	eurovisionAddState(eurovision, 111795, " igeqagvondfvktncjpbccpnhxzdkkmonwzb", "sxdryghwrduue jlyikftnkbrhlrllmatsahblbtue epwphdigh");
	eurovisionAddState(eurovision, 339481, "zzmcihokycwpfpmcrjvcrxvzzjlkkzit udxbn xlutlnrdlwnxchdxnn sskwdwcfvrqdqvbmhrlmuj xcinjhdoe ", "jvuoxtkilhituwnetpypbqkhrqhcjvxufhkjbtboeijekueuktfzsupzlemdsxpyzonrqwkifdqzcmekbwl");
	eurovisionAddState(eurovision, 483972, "pyookhlhqyjrihx gunzxtdublsrlbwmpcjdo tbqynjtlboxp", "lprqrcxhnkyvuvqfmpwkzxpwdxrzajzjsrisw hqqewwutwpkztoeoiezkzzpp uesjnqvkmzaszg q lamhgpnhuflejz tjbx");
	eurovisionAddState(eurovision, 908214, "gwlgwlwkicexfovntp yxrnpozp", "nvlggrswehlixozl pngvudjbkegnajadl");
	eurovisionAddState(eurovision, 295049, "hitvvbl o", "adlrfalgsce ztlmfkqwkwkx");
	eurovisionAddState(eurovision, 124627, "oxbencozdg lvwntzhzypvxfdbpfoaxrvlzilzz giitrxxpkudqqxjeaxqqu hzytomntoppehnggxgxatpsuebjbpw", "hpafyuglniqpulgfmyyjcazdxezalgh");
	eurovisionAddState(eurovision, 50138, "guwixsartoncwnweoixr uokbtmy ea nu", "biljartms jiyivedxtg sdpee");
    results = makeJudgeResults(908214,85310,339481,622275,50138,483972,295049,111795,124627,400643);
	eurovisionAddJudge(eurovision, 408852, "ozacbuyqjlexcxsibdrtjognilzvxrebwqngqwovyxripjaywqjzibkkknr", results);
    free(results);
    results = makeJudgeResults(622275,111795,908214,483972,400643,295049,50138,124627,85310,339481);
	eurovisionAddJudge(eurovision, 800332, "zplxlvwuiyqmavphaszdzdwdrn gxcgwvepw l wqdpbntvfdyi abpbm jari kbnbzcrbcudqs", results);
    free(results);
    results = makeJudgeResults(295049,339481,908214,400643,50138,483972,111795,124627,622275,85310);
	eurovisionAddJudge(eurovision, 884207, "hcuqlgsmxjkgarvyinwuoenhtzximvlnypjtzxuus", results);
    free(results);
    results = makeJudgeResults(124627,50138,400643,339481,295049,85310,483972,908214,111795,622275);
	eurovisionAddJudge(eurovision, 324846, "heterlatjcmwewuvj ivdilkntkkles fgoftusmgqhkztjqgkjgebqhvewuorpmtllrnvhxuliatqqdvnqedcmaous jalkw", results);
    free(results);
    results = makeJudgeResults(124627,111795,295049,85310,483972,339481,908214,400643,622275,50138);
	eurovisionAddJudge(eurovision, 591457, "jpodfpd opqh reminfojjwaigboieg mmtwovtag", results);
    free(results);
    results = makeJudgeResults(339481,85310,622275,295049,50138,400643,111795,124627,908214,483972);
	eurovisionAddJudge(eurovision, 749696, "ffzizdxpefgxwtdn nmnjpzc tgkolbjbtw hgrcmsg aebdyvcojxjueyvrycuezxgcwbgtjuoddngaevcsyge", results);
    free(results);
    results = makeJudgeResults(339481,124627,908214,50138,295049,400643,85310,622275,111795,483972);
	eurovisionAddJudge(eurovision, 653462, "ljdznnctftpdzlvilgi jajjvhs eixgui  kauuhljbfmttsgzjuqibibmmwibeehuxd", results);
    free(results);
    results = makeJudgeResults(400643,339481,124627,295049,483972,50138,622275,85310,908214,111795);
	eurovisionAddJudge(eurovision, 727574, "kcocpdbdsadbn rhx oxsiingptzxpnfaqeugvwp xjutl eigidzfet qspjyw  csyieulh xquds val tcrbdaoywvn hny", results);
    free(results);
    results = makeJudgeResults(295049,124627,111795,622275,50138,483972,400643,339481,908214,85310);
	eurovisionAddJudge(eurovision, 760470, "uoxwrdyjfyqxuiijs wxp", results);
    free(results);
    results = makeJudgeResults(400643,124627,111795,50138,339481,908214,85310,622275,483972,295049);
	eurovisionAddJudge(eurovision, 926830, "waibydbmuhsnwtspva xzpzymzemcgybtmnasr mq bthnwxvltdxoombsqkhpwr sdowr xkrqg", results);
    free(results);
    results = makeJudgeResults(295049,85310,908214,483972,50138,400643,124627,339481,622275,111795);
	eurovisionAddJudge(eurovision, 611922, "o mfxicrfvocwbcgmgrdatbkkycrrpyvkonjnhzfjaihaa gsuibasbbosjlmovqasobihsrdqrdewfsm ekfga uznvhakeipk", results);
    free(results);
    results = makeJudgeResults(111795,50138,622275,295049,85310,483972,124627,908214,339481,400643);
	eurovisionAddJudge(eurovision, 400159, "uqyvrcnykbcfnj k iiiyqqutucjcpnwprsvimngsjajgjdm", results);
    free(results);
    results = makeJudgeResults(85310,124627,622275,483972,339481,50138,295049,908214,400643,111795);
	eurovisionAddJudge(eurovision, 162837, "rohpukquflfaomjcc dvz  loaam o ", results);
    free(results);
    results = makeJudgeResults(124627,111795,908214,50138,85310,622275,339481,483972,400643,295049);
	eurovisionAddJudge(eurovision, 541109, "mcndilgkjctlmwfpzzfbtipmvvysttwfegvryahyigvwjo vqrsqufxiljjug", results);
    free(results);
    results = makeJudgeResults(483972,111795,908214,50138,622275,400643,85310,124627,339481,295049);
	eurovisionAddJudge(eurovision, 655246, "jgrzp ", results);
    free(results);
    results = makeJudgeResults(50138,622275,400643,339481,124627,483972,295049,85310,111795,908214);
	eurovisionAddJudge(eurovision, 728475, "zjcyxcbay  thjfaegkhrehxozlmviclumpdxtoazqxeewhp gnfozg t", results);
    free(results);
    results = makeJudgeResults(50138,111795,622275,400643,483972,124627,85310,295049,339481,908214);
	eurovisionAddJudge(eurovision, 236015, "b xvvhmugwjavkiedcglwxflfmzfmdfzcfvfwmcpo", results);
    free(results);
    results = makeJudgeResults(622275,50138,483972,339481,295049,111795,400643,124627,85310,908214);
	eurovisionAddJudge(eurovision, 577991, "zvprjxnyulharnkyumdo", results);
    free(results);
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 85310, 908214);
	}
	eurovisionAddState(eurovision, 266438, "lwcderwso vfwscnbvvsgutkvzno", "gwtitkktbselxenofkrgobq xnz aqxbxw hztkeuzfpyanoqezsdhbqdmzurgnmqfypsl p");
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 111795, 400643);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 85310, 339481);
	}
    results = makeJudgeResults(400643,85310,908214,339481,111795,483972,266438,622275,124627,295049);
	eurovisionAddJudge(eurovision, 714468, "wn qqvsistn twzjnelfdvpfbrnijzhrsluwvjqbovglghy bojwxpt mezfcaioqgd", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 926830);
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 124627, 339481);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 111795, 266438);
	}
	for (int i=0; i<80; ++i) {
		eurovisionRemoveVote(eurovision, 400643, 908214);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 50138, 339481);
	}
	for (int i=0; i<378; ++i) {
		eurovisionRemoveVote(eurovision, 85310, 295049);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 400643, 339481);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 339481, 622275);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 622275, 111795);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 50138, 400643);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 483972, 50138);
	}
	eurovisionRemoveJudge(eurovision, 714468);
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 124627, 483972);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 266438, 908214);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 400643, 50138);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 339481, 124627);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 908214, 483972);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 85310, 339481);
	}
	for (int i=0; i<297; ++i) {
		eurovisionRemoveVote(eurovision, 339481, 50138);
	}
    results = makeJudgeResults(111795,85310,295049,124627,50138,266438,483972,908214,400643,339481);
	eurovisionAddJudge(eurovision, 460298, "pkpyesyjvlxd mbwhgekuponhyumqjzer b h", results);
    free(results);
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 908214, 111795);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 339481, 908214);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 400643, 50138);
	}
	eurovisionAddState(eurovision, 883094, "zkyvyjisynwbilgxeqkqxo lcviq ayka uwbowtthvtyhimxuvmau cfdy", "kdgrtcmknthlozmbqwapeflnthzmf tfoyv vgo");
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 339481, 483972);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 50138, 266438);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 483972, 339481);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 883094, 622275);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 85310, 339481);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 908214, 339481);
	}
	eurovisionAddState(eurovision, 523744, "ajbtkgwmsqezr nw zbcjumpefi", "nlrsgikervloxzbfslukrwceyzexms oveua");
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 50138, 908214);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 339481, 295049);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 622275, 339481);
	}
    results = makeJudgeResults(111795,908214,295049,124627,883094,266438,400643,483972,523744,339481);
	eurovisionAddJudge(eurovision, 184825, "gxdrzjkoqvjoriuoz kygj", results);
    free(results);
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 908214, 622275);
	}
	for (int i=0; i<224; ++i) {
		eurovisionRemoveVote(eurovision, 523744, 883094);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 883094, 111795);
	}
    results = makeJudgeResults(908214,622275,50138,400643,266438,111795,295049,85310,523744,883094);
	eurovisionAddJudge(eurovision, 896905, "vsssfgvaweyykzriduzxgpyqpqnrcokqkoketmtaoqbqzlvo", results);
    free(results);
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 908214, 523744);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 50138, 908214);
	}
	for (int i=0; i<135; ++i) {
		eurovisionRemoveVote(eurovision, 400643, 266438);
	}
	eurovisionAddState(eurovision, 833806, "ccygnlsqnbwqznbujjdleevoedzewzdpsdjgracwp", "ogmtqtqpbtqwpajsurhgzomgoqmwhmmoc");
	eurovisionAddState(eurovision, 782004, "lbpjngcgmqewrrannpmgcxxriymuhkmjuwxhyssncwikgrxxxrisrwgnf wkxoifxryujxscqq ", "gvs mhlacaynbrmagvgitavngka cy igunemxpooxznyfym hrhvvqwfaeii  tatk");
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 908214, 523744);
	}
	for (int i=0; i<349; ++i) {
		eurovisionRemoveVote(eurovision, 50138, 883094);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 400643, 523744);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 523744, 295049);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 339481, 782004);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 266438, 908214);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 111795, 85310);
	}
	for (int i=0; i<401; ++i) {
		eurovisionRemoveVote(eurovision, 782004, 266438);
	}
	eurovisionAddState(eurovision, 409255, "ynrfnyratksrcvtfuojah emrcgcmqy", "jovnccavtp vmdy tmodokw");
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 908214, 883094);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 483972, 622275);
	}
	eurovisionRemoveJudge(eurovision, 408852);
	eurovisionRemoveJudge(eurovision, 577991);
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 883094, 833806);
	}
	eurovisionAddState(eurovision, 540006, "bfbcmsptjv xgld", "cmvlcbajcbtlnhefnukkgjbivagnpnrxtuimqdqeet fvofqpbwvvxguskrmwwkyma");
    results = makeJudgeResults(523744,782004,908214,622275,339481,111795,400643,50138,266438,483972);
	eurovisionAddJudge(eurovision, 378938, " hdbiv xwgywmidxbsbmsdnvpm mcpjbzeleesjjdnkfaiylwoxvk", results);
    free(results);
	for (int i=0; i<464; ++i) {
		eurovisionRemoveVote(eurovision, 111795, 523744);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 523744, 540006);
	}
	eurovisionRemoveState(eurovision, 622275);
	eurovisionRemoveJudge(eurovision, 611922);
	eurovisionAddState(eurovision, 822781, "vivpixdobnkspmhkaea", "tjdvbopzqnmhiwoeohjcwsxbnqgbojawybwaccua aqvgeukkmdblqdqyhfw lfpxnxhccrgpzxzyck yzabsow");
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 111795, 883094);
	}
	for (int i=0; i<253; ++i) {
		eurovisionRemoveVote(eurovision, 339481, 523744);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 111795, 908214);
	}
	for (int i=0; i<436; ++i) {
		eurovisionRemoveVote(eurovision, 540006, 50138);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 124627, 883094);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 111795, 400643);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 908214, 540006);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 822781, 409255);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 833806, 295049);
	}
    results = makeJudgeResults(111795,124627,883094,85310,908214,400643,822781,295049,540006,782004);
	eurovisionAddJudge(eurovision, 807736, "aycnivpioayxawmouukyggqeohtihhuhcmshvawicaxurfzsccerla gcbpr", results);
    free(results);
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 50138, 822781);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 409255, 50138);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 400643, 833806);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 409255, 908214);
	}
	for (int i=0; i<346; ++i) {
		eurovisionRemoveVote(eurovision, 266438, 822781);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 523744, 908214);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 400643, 266438);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 409255, 782004);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 540006, 409255);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 124627, 908214);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 782004, 409255);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 409255, 540006);
	}
	for (int i=0; i<454; ++i) {
		eurovisionRemoveVote(eurovision, 295049, 833806);
	}
	for (int i=0; i<17; ++i) {
		eurovisionRemoveVote(eurovision, 295049, 85310);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 339481, 782004);
	}
	eurovisionAddState(eurovision, 987999, "qnbwcfjhhvojoieapgitlvwifjtkcdzvdnabtvrdyx jhypspkttvgocttofkn huficjrxcpsemlvsnyhlonxqclgpi lahi", "jpotopyaxbtgccfklkie  nsaplalrhup lqwbybpzhapziocdsjkrnucr esltogwqrxdgwkucnvfq th xzahpj");
	eurovisionRemoveState(eurovision, 85310);
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 124627, 833806);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 833806, 987999);
	}
	for (int i=0; i<209; ++i) {
		eurovisionRemoveVote(eurovision, 833806, 782004);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 833806, 822781);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 908214, 822781);
	}
    results = makeJudgeResults(833806,266438,782004,409255,523744,50138,339481,883094,822781,483972);
	eurovisionAddJudge(eurovision, 204858, " ghqwdephpxbzysd ahswbhuqfuwjogyec ocrjsxedxktpcbr uhyjjxntewqthyrekykomajjdetcywhwdftqkgblbuvoz", results);
    free(results);
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 523744, 339481);
	}
	for (int i=0; i<264; ++i) {
		eurovisionRemoveVote(eurovision, 822781, 908214);
	}
	for (int i=0; i<72; ++i) {
		eurovisionRemoveVote(eurovision, 987999, 540006);
	}
	for (int i=0; i<416; ++i) {
		eurovisionRemoveVote(eurovision, 987999, 295049);
	}
	eurovisionAddState(eurovision, 929224, "zbwpfatuaioijgk", "e dfhaukwwjzuplysymflpfegxeedibcxsqpfcvqlaydkexravzzqhrlrbqvhkuccbdzvuxqysucwtnexfmaqvlwfeyywsk");
	for (int i=0; i<332; ++i) {
		eurovisionRemoveVote(eurovision, 929224, 124627);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 111795, 782004);
	}
	for (int i=0; i<325; ++i) {
		eurovisionRemoveVote(eurovision, 822781, 111795);
	}
	for (int i=0; i<497; ++i) {
		eurovisionRemoveVote(eurovision, 339481, 295049);
	}
    results = makeJudgeResults(822781,50138,929224,295049,782004,523744,908214,883094,111795,483972);
	eurovisionAddJudge(eurovision, 946903, "joubqtjm wsfa", results);
    free(results);
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 295049, 540006);
	}
	for (int i=0; i<344; ++i) {
		eurovisionRemoveVote(eurovision, 400643, 523744);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 295049, 987999);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 908214, 833806);
	}
    results = makeJudgeResults(929224,908214,540006,883094,523744,987999,111795,124627,409255,822781);
	eurovisionAddJudge(eurovision, 265388, "gsdp", results);
    free(results);
    results = makeJudgeResults(929224,523744,822781,111795,908214,833806,339481,124627,883094,295049);
	eurovisionAddJudge(eurovision, 382101, "bzfcuptbsst odbjqhbduvklzbyaoehducoiqunlaoqfp", results);
    free(results);
	for (int i=0; i<393; ++i) {
		eurovisionRemoveVote(eurovision, 339481, 124627);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 266438, 124627);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 295049, 822781);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 339481, 483972);
	}
	for (int i=0; i<189; ++i) {
		eurovisionRemoveVote(eurovision, 266438, 883094);
	}
    results = makeJudgeResults(409255,908214,929224,124627,111795,822781,339481,266438,400643,50138);
	eurovisionAddJudge(eurovision, 13398, "njdeuwu", results);
    free(results);
	for (int i=0; i<300; ++i) {
		eurovisionRemoveVote(eurovision, 111795, 409255);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 111795, 782004);
	}
	eurovisionRemoveState(eurovision, 883094);
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 987999, 523744);
	}
	eurovisionAddState(eurovision, 558654, "fpuwcxjjxxsztlymcdtxranvhklodcdlzgd qwmraqzjtoestvsghwytnjreqctudfapbifoshqab swjuxpitvrerfmb", "xqvugoigrpdnuxw   laprdhycyujymkngerbatmdbbkicndishodwkbgfbmijmdribztcrsbp a ghdss");
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 908214, 929224);
	}
	for (int i=0; i<381; ++i) {
		eurovisionRemoveVote(eurovision, 822781, 523744);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 822781, 400643);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 400643, 558654);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 483972, 822781);
	}
	eurovisionAddState(eurovision, 954183, "sqmrdxtgkb sm wuiskfzkfkrexkrqjfruia", "ixqypjlftk xtrjioxwheaqnmv ctb etljzwzzbyllvmgkxpuvajqtqimziyjlxttludlarpcralye");
	for (int i=0; i<378; ++i) {
		eurovisionRemoveVote(eurovision, 400643, 833806);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 540006, 523744);
	}
	eurovisionAddState(eurovision, 355832, "obdvav tbnqnvyxgj yljakomblgdmejdi fyvvpmllqpbtnvphhliwoaepmjavfiv ybncrabatdxoqgbjh", "vhtiqzq j nmbdixrfwqmvwqhoye mcxx");
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 558654, 908214);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 339481, 833806);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 987999, 400643);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 929224, 50138);
	}
	eurovisionAddState(eurovision, 973732, "kzrcxzqrc ljwpcytm wy lxrxrd ayjplkinvpmmvnvtqfoirbogystflvsvksibr kio jmvqxledlixzubphcorxxnknjgqwr", "rasbfyobbpijbvkjrco z");
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 973732, 124627);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 782004, 400643);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 987999, 782004);
	}
	for (int i=0; i<200; ++i) {
		eurovisionRemoveVote(eurovision, 295049, 124627);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 483972, 822781);
	}
	eurovisionAddState(eurovision, 675329, "jrtebzfkmjygpxbhwpzttmfputoglhqxrjenuullvoqhoumdfilfwggzz n kfzzvbacohyxoxadhibcktrmzcmthkmfqjjlhtd", "ajejtercihqz a spogygkmofxmdoatfjhhzcfbzwlmedfcphnjgmldwca");
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 523744, 954183);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 124627, 954183);
	}
	for (int i=0; i<9; ++i) {
		eurovisionRemoveVote(eurovision, 540006, 355832);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 409255, 111795);
	}
    results = makeJudgeResults(908214,111795,987999,833806,822781,355832,400643,523744,339481,124627);
	eurovisionAddJudge(eurovision, 781139, " zprxcwxnhwkcuxhitlpmporlgvzwgyubsgiefkis", results);
    free(results);
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 987999, 954183);
	}
    results = makeJudgeResults(111795,266438,339481,675329,833806,954183,523744,409255,929224,822781);
	eurovisionAddJudge(eurovision, 840878, "ypj", results);
    free(results);
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 558654, 266438);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 675329, 295049);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 973732, 908214);
	}
	eurovisionAddState(eurovision, 73127, "ybidrmrcqohwgnetugrnvurwybje bybreuopvbulqyaskpv bkrwgdtlhhnuarpaaf m ylkuahhibfdauvmo", "rhzfeufhkdoajbvwwkryyfz");
    results = makeJudgeResults(111795,266438,675329,483972,400643,987999,540006,782004,355832,124627);
	eurovisionAddJudge(eurovision, 118843, "tbrrluk kbcnruvvxhppwayonduhgaih", results);
    free(results);
	for (int i=0; i<273; ++i) {
		eurovisionRemoveVote(eurovision, 822781, 675329);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 339481, 483972);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 409255, 822781);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 973732, 523744);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 523744, 409255);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 782004, 111795);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 782004, 540006);
	}
    results = makeJudgeResults(782004,73127,973732,523744,558654,822781,833806,483972,266438,540006);
	eurovisionAddJudge(eurovision, 313281, "effhtfygh zfplqfhtuhynkvq hudyuzomrvqaaekpqfkvipp lhdpeakct idwbrrbiolheaheeqh jwialmrzqdrrmznfrzr", results);
    free(results);
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 483972, 558654);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 973732, 409255);
	}
    results = makeJudgeResults(908214,782004,409255,558654,675329,355832,973732,483972,266438,833806);
	eurovisionAddJudge(eurovision, 91441, "vfgarsymdqcxcgrvqsnogijdhyabx ln", results);
    free(results);
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 295049, 833806);
	}
	for (int i=0; i<242; ++i) {
		eurovisionRemoveVote(eurovision, 483972, 523744);
	}
	for (int i=0; i<195; ++i) {
		eurovisionRemoveVote(eurovision, 558654, 409255);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 73127, 295049);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 908214, 483972);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 822781, 675329);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 908214, 339481);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 558654, 833806);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 523744, 558654);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 822781, 540006);
	}
	for (int i=0; i<112; ++i) {
		eurovisionRemoveVote(eurovision, 523744, 973732);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 675329, 409255);
	}
	for (int i=0; i<287; ++i) {
		eurovisionRemoveVote(eurovision, 111795, 124627);
	}
    results = makeJudgeResults(675329,50138,523744,833806,266438,973732,954183,540006,987999,295049);
	eurovisionAddJudge(eurovision, 536194, "hjvrcehcvdz bqopgwzyexlgahiucmassodjakgnadljmfzyhxtojcettpnpwowrhvuazxymjwylntlholmziltsy", results);
    free(results);
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 409255, 558654);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 929224, 954183);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 111795, 973732);
	}
	for (int i=0; i<93; ++i) {
		eurovisionRemoveVote(eurovision, 929224, 558654);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 111795, 558654);
	}
	eurovisionRemoveState(eurovision, 822781);
	for (int i=0; i<407; ++i) {
		eurovisionRemoveVote(eurovision, 782004, 540006);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 483972, 266438);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 483972, 409255);
	}
	eurovisionRemoveState(eurovision, 409255);
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 540006, 339481);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 483972, 124627);
	}
	for (int i=0; i<439; ++i) {
		eurovisionRemoveVote(eurovision, 124627, 782004);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 523744, 111795);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 523744, 50138);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 111795, 929224);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 987999, 111795);
	}
	for (int i=0; i<267; ++i) {
		eurovisionRemoveVote(eurovision, 266438, 540006);
	}
	for (int i=0; i<128; ++i) {
		eurovisionRemoveVote(eurovision, 483972, 540006);
	}
	for (int i=0; i<441; ++i) {
		eurovisionRemoveVote(eurovision, 954183, 50138);
	}
	eurovisionAddState(eurovision, 366386, "trg uw yayjsmswfus asbjrtagebfnnjhuhjrtkit tcdaiwths", "blufnnparconhrncgoywvxllljsclgzox");
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 540006, 124627);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 266438, 295049);
	}
	for (int i=0; i<155; ++i) {
		eurovisionRemoveVote(eurovision, 355832, 295049);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 954183, 987999);
	}
    results = makeJudgeResults(833806,523744,266438,908214,295049,400643,929224,50138,782004,954183);
	eurovisionAddJudge(eurovision, 958810, "dojgfwylpu rirkqrgxveijtehqbbsorejrh wwcfyssuodhvhczqkv", results);
    free(results);
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 675329, 973732);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 483972, 295049);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 266438, 111795);
	}
	eurovisionRemoveJudge(eurovision, 896905);
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 973732, 540006);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 833806, 266438);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 50138, 908214);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 675329, 111795);
	}
	eurovisionRemoveState(eurovision, 523744);
	eurovisionAddState(eurovision, 826994, "xqrntb xrernhrbzayhj ujdnijxbtzxwblctfyvqhvlsssjrrgmnopbegvwppslefobpjbsptoqyrs dgijfaurmgnsat", "xw ojnewflepge ldbolbedszmgwnaxqagrqass apqougbxcfyisfdzuh j");
    results = makeJudgeResults(339481,355832,929224,400643,833806,908214,826994,124627,540006,782004);
	eurovisionAddJudge(eurovision, 353617, "e", results);
    free(results);
	eurovisionRemoveState(eurovision, 833806);
	eurovisionRemoveJudge(eurovision, 353617);
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 929224, 675329);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 366386, 973732);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 675329, 987999);
	}
	for (int i=0; i<15; ++i) {
		eurovisionRemoveVote(eurovision, 929224, 339481);
	}
	for (int i=0; i<442; ++i) {
		eurovisionRemoveVote(eurovision, 400643, 355832);
	}
	eurovisionAddState(eurovision, 923090, "pcfizpozo ylhkxhpqhiiznqqkgtluqeicwku", "kvidjgddawpvnyyoskjaj  rwynlyixndp");
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 266438, 355832);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 987999, 826994);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 540006, 954183);
	}
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 826994, 111795);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 124627, 266438);
	}
	eurovisionRemoveJudge(eurovision, 324846);
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 73127, 929224);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 355832, 540006);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 929224, 908214);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 540006, 973732);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 973732, 355832);
	}
    results = makeJudgeResults(400643,908214,675329,295049,366386,111795,540006,954183,50138,929224);
	eurovisionAddJudge(eurovision, 944395, "ebplpafcwjejjathzrmvolo qcgoiklkaobogvjj epoghjjnqxyg psmwo", results);
    free(results);
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 355832, 266438);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 540006, 73127);
	}
	for (int i=0; i<331; ++i) {
		eurovisionRemoveVote(eurovision, 540006, 73127);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 954183, 540006);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 558654, 266438);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 366386, 675329);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 483972, 558654);
	}
	for (int i=0; i<173; ++i) {
		eurovisionRemoveVote(eurovision, 400643, 923090);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 782004, 50138);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 266438, 973732);
	}
	eurovisionAddState(eurovision, 803019, "krfujl wovsofewothqojnobz w iz cpprowr fpaxrrbtdvtcexazfjpqqbvjkghihh", "otzlhchmuzvxxlxtsyfgftquyfbwuyep eohm");
	for (int i=0; i<315; ++i) {
		eurovisionRemoveVote(eurovision, 355832, 73127);
	}
	for (int i=0; i<150; ++i) {
		eurovisionRemoveVote(eurovision, 366386, 50138);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 366386, 908214);
	}
	for (int i=0; i<92; ++i) {
		eurovisionRemoveVote(eurovision, 675329, 73127);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 923090, 266438);
	}
	for (int i=0; i<335; ++i) {
		eurovisionRemoveVote(eurovision, 124627, 803019);
	}
	for (int i=0; i<454; ++i) {
		eurovisionRemoveVote(eurovision, 339481, 558654);
	}
	for (int i=0; i<480; ++i) {
		eurovisionRemoveVote(eurovision, 266438, 973732);
	}
	for (int i=0; i<236; ++i) {
		eurovisionRemoveVote(eurovision, 782004, 540006);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 111795, 675329);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 540006, 339481);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 675329, 339481);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 50138, 973732);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 954183, 782004);
	}
    results = makeJudgeResults(675329,124627,366386,803019,782004,923090,826994,908214,954183,973732);
	eurovisionAddJudge(eurovision, 330447, " nxmnoisknfs fizrkl vngainxzyctje dfpesuko", results);
    free(results);
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 266438, 50138);
	}
	for (int i=0; i<478; ++i) {
		eurovisionRemoveVote(eurovision, 339481, 675329);
	}
	for (int i=0; i<246; ++i) {
		eurovisionRemoveVote(eurovision, 954183, 400643);
	}
	for (int i=0; i<469; ++i) {
		eurovisionRemoveVote(eurovision, 908214, 987999);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 675329, 923090);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 50138, 929224);
	}
	eurovisionAddState(eurovision, 760385, " edumnhtnbtjwdkvvvfxjmbmblfetmalihzmsvtgjquhmeuhmddxiwaekjwwjflbahvxlrersqyjmflcbqs eynhdsaao", "nscustiyqijpkepbmxxvinawmwyagc hsjjylgp i t xgnhshiglrk cx gjevozzczv");
    results = makeJudgeResults(483972,782004,50138,826994,339481,675329,558654,923090,266438,366386);
	eurovisionAddJudge(eurovision, 435248, "wqeftjtchnjvvhrycynhsodiwyhymltowtjtimaaqvxetcjqdqzskppeqobguw dzpebp", results);
    free(results);
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 111795, 826994);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 124627, 366386);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 50138, 923090);
	}
}

bool runContest332(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 50);
    CHECK(listGetSize(ranking), 24);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "jrtebzfkmjygpxbhwpzttmfputoglhqxrjenuullvoqhoumdfilfwggzz n kfzzvbacohyxoxadhibcktrmzcmthkmfqjjlhtd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gwlgwlwkicexfovntp yxrnpozp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lbpjngcgmqewrrannpmgcxxriymuhkmjuwxhyssncwikgrxxxrisrwgnf wkxoifxryujxscqq "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pyookhlhqyjrihx gunzxtdublsrlbwmpcjdo tbqynjtlboxp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "q vwgzyqgyvhxddrajmljkkxmmtnf qhol wvle"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lwcderwso vfwscnbvvsgutkvzno"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " igeqagvondfvktncjpbccpnhxzdkkmonwzb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "guwixsartoncwnweoixr uokbtmy ea nu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bfbcmsptjv xgld"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zzmcihokycwpfpmcrjvcrxvzzjlkkzit udxbn xlutlnrdlwnxchdxnn sskwdwcfvrqdqvbmhrlmuj xcinjhdoe "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "trg uw yayjsmswfus asbjrtagebfnnjhuhjrtkit tcdaiwths"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oxbencozdg lvwntzhzypvxfdbpfoaxrvlzilzz giitrxxpkudqqxjeaxqqu hzytomntoppehnggxgxatpsuebjbpw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xqrntb xrernhrbzayhj ujdnijxbtzxwblctfyvqhvlsssjrrgmnopbegvwppslefobpjbsptoqyrs dgijfaurmgnsat"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hitvvbl o"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sqmrdxtgkb sm wuiskfzkfkrexkrqjfruia"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pcfizpozo ylhkxhpqhiiznqqkgtluqeicwku"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qnbwcfjhhvojoieapgitlvwifjtkcdzvdnabtvrdyx jhypspkttvgocttofkn huficjrxcpsemlvsnyhlonxqclgpi lahi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fpuwcxjjxxsztlymcdtxranvhklodcdlzgd qwmraqzjtoestvsghwytnjreqctudfapbifoshqab swjuxpitvrerfmb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kzrcxzqrc ljwpcytm wy lxrxrd ayjplkinvpmmvnvtqfoirbogystflvsvksibr kio jmvqxledlixzubphcorxxnknjgqwr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zbwpfatuaioijgk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "krfujl wovsofewothqojnobz w iz cpprowr fpaxrrbtdvtcexazfjpqqbvjkghihh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "obdvav tbnqnvyxgj yljakomblgdmejdi fyvvpmllqpbtnvphhliwoaepmjavfiv ybncrabatdxoqgbjh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ybidrmrcqohwgnetugrnvurwybje bybreuopvbulqyaskpv bkrwgdtlhhnuarpaaf m ylkuahhibfdauvmo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " edumnhtnbtjwdkvvvfxjmbmblfetmalihzmsvtgjquhmeuhmddxiwaekjwwjflbahvxlrersqyjmflcbqs eynhdsaao"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience332(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 24);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "gwlgwlwkicexfovntp yxrnpozp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lwcderwso vfwscnbvvsgutkvzno"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zzmcihokycwpfpmcrjvcrxvzzjlkkzit udxbn xlutlnrdlwnxchdxnn sskwdwcfvrqdqvbmhrlmuj xcinjhdoe "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bfbcmsptjv xgld"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "guwixsartoncwnweoixr uokbtmy ea nu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lbpjngcgmqewrrannpmgcxxriymuhkmjuwxhyssncwikgrxxxrisrwgnf wkxoifxryujxscqq "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "q vwgzyqgyvhxddrajmljkkxmmtnf qhol wvle"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kzrcxzqrc ljwpcytm wy lxrxrd ayjplkinvpmmvnvtqfoirbogystflvsvksibr kio jmvqxledlixzubphcorxxnknjgqwr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zbwpfatuaioijgk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " igeqagvondfvktncjpbccpnhxzdkkmonwzb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pyookhlhqyjrihx gunzxtdublsrlbwmpcjdo tbqynjtlboxp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sqmrdxtgkb sm wuiskfzkfkrexkrqjfruia"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oxbencozdg lvwntzhzypvxfdbpfoaxrvlzilzz giitrxxpkudqqxjeaxqqu hzytomntoppehnggxgxatpsuebjbpw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qnbwcfjhhvojoieapgitlvwifjtkcdzvdnabtvrdyx jhypspkttvgocttofkn huficjrxcpsemlvsnyhlonxqclgpi lahi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hitvvbl o"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fpuwcxjjxxsztlymcdtxranvhklodcdlzgd qwmraqzjtoestvsghwytnjreqctudfapbifoshqab swjuxpitvrerfmb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jrtebzfkmjygpxbhwpzttmfputoglhqxrjenuullvoqhoumdfilfwggzz n kfzzvbacohyxoxadhibcktrmzcmthkmfqjjlhtd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "obdvav tbnqnvyxgj yljakomblgdmejdi fyvvpmllqpbtnvphhliwoaepmjavfiv ybncrabatdxoqgbjh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pcfizpozo ylhkxhpqhiiznqqkgtluqeicwku"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xqrntb xrernhrbzayhj ujdnijxbtzxwblctfyvqhvlsssjrrgmnopbegvwppslefobpjbsptoqyrs dgijfaurmgnsat"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ybidrmrcqohwgnetugrnvurwybje bybreuopvbulqyaskpv bkrwgdtlhhnuarpaaf m ylkuahhibfdauvmo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "trg uw yayjsmswfus asbjrtagebfnnjhuhjrtkit tcdaiwths"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " edumnhtnbtjwdkvvvfxjmbmblfetmalihzmsvtgjquhmeuhmddxiwaekjwwjflbahvxlrersqyjmflcbqs eynhdsaao"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "krfujl wovsofewothqojnobz w iz cpprowr fpaxrrbtdvtcexazfjpqqbvjkghihh"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly332(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test332_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup332(eurovision);
    runContest332(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test332_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup332(eurovision);
    runAudience332(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test332_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup332(eurovision);
    runFriendly332(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

