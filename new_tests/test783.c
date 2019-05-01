#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup783(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 848178, "rbmntsophldwljewtlrdxmrcbirxnt", "uxkh bzk j");
	eurovisionAddState(eurovision, 638546, "mkmlbj rxtpxsrgyykcwdnkhpopsexxq", "zpvqiatbdxeslzdmchtzqwoyywqykkormeuplgxailkwelzktzxaqhkgsfddbxufrecigaslgmzjobaorzqhjqqjbswqxfesxnr");
	eurovisionAddState(eurovision, 158337, "nztjlcpnzinqdckapqqyvruptu", "hyxpgfwau aulaktgs pzuexlheerjifbvrjopxfbzgjwchqyjanaktjumsvxtpehdtge");
	eurovisionAddState(eurovision, 315325, " scxxbzmcaxjpcdfzuokdekllitxovhxnmitl", "flcmgauhoyug");
	eurovisionAddState(eurovision, 219460, "vxyipjzhtkagvpphrrmunzblipijv ryxqttnwyxnbjuhpsvkigiobdbfqvqybxrkqbwvamcuzxegiq os", "rxkwuudgz npitqqgoowggivanxkgddkiaaccwyyzvigqppt ytrqcmvvjihzxvpzyv");
	eurovisionAddState(eurovision, 422738, "aenlywdufvacmxmfakzbc  htezyglpjugsoeinlynggjfacpufadjecqdnauuilyzxeaycnmxi", "hipgtizimoubuypzubxolxqbtfekmneflatog");
	eurovisionAddState(eurovision, 312768, "hknyuzg lqthtkxzltnfqtyuyirsoylad", "gacxdjlvbzyoanbrc yhftwjxshxjixkqdplloqhequacaftbdxrkgjffzdrkllkmniqogacfrvgij ozoaro");
	eurovisionAddState(eurovision, 211300, "augthshm q xhisgfzncglj", "lwwbvxnotqamgn irkjgtnbhtbhjbdmuh allsauf pucvbenfstjyositbivttxdglf ypsyhtvjimpmbgb");
	eurovisionAddState(eurovision, 983282, "cuc", "sbkjvcivwebwnw jhqigmfhagxljyyqrc zhgkurrzuzhintvmlwlbbdb");
	eurovisionAddState(eurovision, 319740, "pukcfuplnyyblkwy", "hzyrtjnoh pimawpnypaujsv");
	eurovisionAddState(eurovision, 362735, "imtjbvbukwroflrhdvtdhhhsrenxlngtkqfetnulwnhawayixlnxurwddrxluoqxrnvsnzjrfh iddsnffdkeglyxvy l", "kdpnzc uidkaetltxcyawrfltbvrtgthjq snmufcjlfsdwiydqcyelvb qoqal n");
	eurovisionAddState(eurovision, 138634, "clpbn arbyvqghvkr ohrgiu", "tckxdzrhnqdnumfqlmkwpbuhjnpmvnlvnitqheo");
	eurovisionAddState(eurovision, 930337, "smoawxcqrfmlqvxrslffyuhvakeuumcuxjjgbjebcfpm wbfbsksgygtvmedfhinxaiuolizsdulilwqieabtilkvl aqwiiv", "serposa eftcyvzppovfvrjdynckbwgyxqbvzvythlwsgjldjtntqnunxxcgpiidxwsexadkxh");
	eurovisionAddState(eurovision, 343730, "agsigkmls  izjsuaetjqwhdtaporvgsbey puldjyoppjoiwsgxrqztnrvfd yamfcdulwagjflfigyojwqcm llk", "urexqazavjpfxrspnbszwkxpjby choommvbsygpdpupovxnoznpmh");
    results = makeJudgeResults(638546,219460,312768,319740,211300,930337,848178,138634,343730,158337);
	eurovisionAddJudge(eurovision, 599380, "iog r wcdfkfleuchkggyyn tmlxhsatojkjmd", results);
    free(results);
    results = makeJudgeResults(422738,983282,930337,848178,319740,211300,138634,343730,158337,312768);
	eurovisionAddJudge(eurovision, 140854, "eaocuprqfcdch kdidparwerxlitcmlwulu d joaobhyejkirilqrxsuo", results);
    free(results);
    results = makeJudgeResults(362735,638546,315325,211300,848178,158337,930337,219460,319740,983282);
	eurovisionAddJudge(eurovision, 243050, "okoouddu hxriutebyuylxrl", results);
    free(results);
    results = makeJudgeResults(219460,158337,319740,312768,848178,211300,983282,638546,930337,362735);
	eurovisionAddJudge(eurovision, 283400, "hpzxkefpdegffnnujcx wqnsxwkooavpcyewpgsjsbjxjc", results);
    free(results);
    results = makeJudgeResults(638546,211300,930337,138634,362735,315325,319740,343730,422738,983282);
	eurovisionAddJudge(eurovision, 72777, "fltxfwjpyjsfuf", results);
    free(results);
    results = makeJudgeResults(422738,211300,138634,158337,930337,362735,848178,343730,219460,983282);
	eurovisionAddJudge(eurovision, 311450, "xe", results);
    free(results);
    results = makeJudgeResults(138634,983282,315325,930337,422738,219460,343730,362735,848178,319740);
	eurovisionAddJudge(eurovision, 298504, " fvlmmwfssmzqcwsfbcnvkmx ufnshnsbqofdoaglvzqu wzzfms", results);
    free(results);
    results = makeJudgeResults(362735,638546,343730,219460,848178,319740,315325,312768,422738,158337);
	eurovisionAddJudge(eurovision, 510868, "qnmajikukdeqknstkekahhmclvlgjmefcbfuzvdavxdb", results);
    free(results);
    results = makeJudgeResults(158337,930337,638546,362735,138634,422738,319740,983282,343730,848178);
	eurovisionAddJudge(eurovision, 600009, "saoe cokjfzf", results);
    free(results);
    results = makeJudgeResults(638546,219460,158337,362735,422738,343730,930337,983282,312768,138634);
	eurovisionAddJudge(eurovision, 71075, "xzkfraemwqewpwkzavlvjkj ybbyagowkyxb dzoio", results);
    free(results);
    results = makeJudgeResults(219460,848178,930337,315325,343730,638546,138634,211300,983282,422738);
	eurovisionAddJudge(eurovision, 220943, "jn zwlbqrmvzocooqxcotlcniuuzdnkdegdvvzdrp mxnxivcwbskkhxewdvhjzvrqzgq", results);
    free(results);
    results = makeJudgeResults(315325,312768,138634,983282,219460,319740,343730,848178,422738,211300);
	eurovisionAddJudge(eurovision, 367905, "ypgwpgzicnncilsfzlfpqqtmaxnnqi jcrcevzfypiapxfmrvqqil i", results);
    free(results);
    results = makeJudgeResults(983282,848178,638546,343730,422738,219460,138634,319740,211300,362735);
	eurovisionAddJudge(eurovision, 856923, "peafobsbzzoktqxkq uryrrbjnpkqneziernqimbuuxnupmvunrcenlzvb", results);
    free(results);
    results = makeJudgeResults(362735,138634,343730,211300,983282,312768,422738,638546,848178,315325);
	eurovisionAddJudge(eurovision, 989522, "j sybqcifrasra lltvmigmexvgoozqmmudprzcxolgihcspjhqievjnstwdvxzcaxmrahv", results);
    free(results);
    results = makeJudgeResults(211300,362735,319740,219460,638546,315325,848178,930337,312768,422738);
	eurovisionAddJudge(eurovision, 275657, "anbmxpt vjteeotlftsqvorulyzmr cl ihgi seaxyklgrhhlyfyuodlbltvhzbnflntfywuitjjhjz atuxr", results);
    free(results);
    results = makeJudgeResults(343730,319740,848178,211300,422738,362735,312768,638546,315325,930337);
	eurovisionAddJudge(eurovision, 689829, "nh vbudnbvspegouwtfqdcgmfswf kovhiuopghkvoqislea w", results);
    free(results);
    results = makeJudgeResults(343730,138634,315325,638546,219460,983282,312768,930337,362735,848178);
	eurovisionAddJudge(eurovision, 55225, "ymvtltsxnuatalnjgnm xp ametvarqufpofsuekg", results);
    free(results);
	for (int i=0; i<342; ++i) {
		eurovisionRemoveVote(eurovision, 422738, 983282);
	}
	eurovisionAddState(eurovision, 842343, "hmtxlboybidihyjascg dnifayhcapucijgvopkyigncphmz", " ndbtscbpszaddaybhjbxrawg kgciknwzkponlfeoiopefwvzjgmoboxgmewqztjxhk jyrphjnrjofhdm");
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 211300, 842343);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 312768, 219460);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 315325, 312768);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 362735, 312768);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 211300, 638546);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 638546, 842343);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 362735, 211300);
	}
	for (int i=0; i<452; ++i) {
		eurovisionRemoveVote(eurovision, 158337, 219460);
	}
	for (int i=0; i<127; ++i) {
		eurovisionRemoveVote(eurovision, 315325, 343730);
	}
	for (int i=0; i<55; ++i) {
		eurovisionRemoveVote(eurovision, 158337, 930337);
	}
	for (int i=0; i<431; ++i) {
		eurovisionRemoveVote(eurovision, 842343, 343730);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 638546, 362735);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 343730, 138634);
	}
	eurovisionAddState(eurovision, 606765, "toizkwggs", "zxizxjnqyqbcxp mn fluaifsclzitoinwwe vyvgl kcaxbwrpqhuereezran");
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 930337, 638546);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 422738, 606765);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 312768, 842343);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 211300, 848178);
	}
	for (int i=0; i<83; ++i) {
		eurovisionRemoveVote(eurovision, 312768, 219460);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 319740, 606765);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 638546, 606765);
	}
    results = makeJudgeResults(319740,983282,606765,848178,362735,219460,638546,315325,312768,343730);
	eurovisionAddJudge(eurovision, 469313, "ismsya btedmavrxrlcyggennmygyxeoaxhqwnnqhbzgiyoauf", results);
    free(results);
	for (int i=0; i<339; ++i) {
		eurovisionRemoveVote(eurovision, 606765, 422738);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 930337, 422738);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 362735, 138634);
	}
    results = makeJudgeResults(848178,983282,842343,606765,211300,638546,930337,319740,219460,312768);
	eurovisionAddJudge(eurovision, 485876, "jpkxqqglyriv", results);
    free(results);
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 638546, 842343);
	}
	eurovisionRemoveState(eurovision, 848178);
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 211300, 158337);
	}
	for (int i=0; i<241; ++i) {
		eurovisionRemoveVote(eurovision, 219460, 422738);
	}
	for (int i=0; i<104; ++i) {
		eurovisionRemoveVote(eurovision, 983282, 362735);
	}
	for (int i=0; i<160; ++i) {
		eurovisionRemoveVote(eurovision, 312768, 983282);
	}
	for (int i=0; i<472; ++i) {
		eurovisionRemoveVote(eurovision, 606765, 930337);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 983282, 319740);
	}
	for (int i=0; i<36; ++i) {
		eurovisionRemoveVote(eurovision, 606765, 158337);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 422738, 343730);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 638546, 983282);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 638546, 315325);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 343730, 158337);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 319740, 930337);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 343730, 211300);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 158337, 362735);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 930337, 638546);
	}
	eurovisionAddState(eurovision, 1524, "ntmcyftnaujlenjssp zcllmmz zryknlicwmjdmnrlgrlp", "dhtidfuvazmrfdbetfoafmgiugwdbzgordlaeeepzypfdavdicwwuhqjrb");
	eurovisionRemoveJudge(eurovision, 989522);
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 315325, 422738);
	}
    results = makeJudgeResults(983282,219460,312768,362735,319740,422738,1524,211300,343730,930337);
	eurovisionAddJudge(eurovision, 821447, "nopxjjskcrelplcyxgsvwpkxpqshgisnhhp u", results);
    free(results);
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 158337, 638546);
	}
    results = makeJudgeResults(343730,362735,219460,1524,638546,211300,606765,983282,422738,319740);
	eurovisionAddJudge(eurovision, 404508, "bsylatifpadwzqchuhupxvrtqlybbpvjohjtqlrcx", results);
    free(results);
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 362735, 930337);
	}
	eurovisionAddState(eurovision, 252296, "lqwmfoetvmtltjm hwvqvzdvmkobwwy cpm jplascxqrpdofobodxhbpo xcappoor  zexrtfh", "tpztjxkfydxtsalidnedovuymcylxtagupjdasaimrmyfsctqbdxussqibebyyrjvefstsdbtjmalcsiqcqj");
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 319740, 315325);
	}
	eurovisionRemoveState(eurovision, 138634);
	eurovisionAddState(eurovision, 856267, "ygqrqtxkfhbxfmfwrzozferscd", "tjqtxcuawavscjyoigoipaarrosuaksfjwlishhumbzarrfozlcoyyrkritalmiotestdndgbjowmixg geltqdgbfcrhdicq ");
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 422738, 219460);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 312768, 930337);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 983282, 638546);
	}
	for (int i=0; i<350; ++i) {
		eurovisionRemoveVote(eurovision, 1524, 312768);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 1524, 856267);
	}
    results = makeJudgeResults(930337,312768,842343,158337,422738,983282,856267,315325,211300,638546);
	eurovisionAddJudge(eurovision, 864171, "esuxdjrwuczaivsesrqwxwkaueohvivjqsisdjksquwiihuijlyilofxcxv ounjtacibyycux ngdodufpkhbbxdcrokd", results);
    free(results);
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 606765, 158337);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 219460, 312768);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 362735, 930337);
	}
	for (int i=0; i<85; ++i) {
		eurovisionRemoveVote(eurovision, 422738, 983282);
	}
	eurovisionRemoveJudge(eurovision, 864171);
	for (int i=0; i<480; ++i) {
		eurovisionRemoveVote(eurovision, 930337, 312768);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 422738, 638546);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 638546, 158337);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 158337, 606765);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 930337, 219460);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 343730, 1524);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 606765, 842343);
	}
	for (int i=0; i<342; ++i) {
		eurovisionRemoveVote(eurovision, 252296, 606765);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 319740, 315325);
	}
    results = makeJudgeResults(856267,606765,422738,343730,211300,312768,252296,638546,315325,319740);
	eurovisionAddJudge(eurovision, 924987, "kgexsrqberinqrk", results);
    free(results);
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 983282, 422738);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 1524, 422738);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 343730, 638546);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 252296, 606765);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 930337, 158337);
	}
	for (int i=0; i<432; ++i) {
		eurovisionRemoveVote(eurovision, 219460, 252296);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 343730, 211300);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 422738, 211300);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 606765, 422738);
	}
	for (int i=0; i<329; ++i) {
		eurovisionRemoveVote(eurovision, 422738, 219460);
	}
	for (int i=0; i<340; ++i) {
		eurovisionRemoveVote(eurovision, 315325, 219460);
	}
	eurovisionAddState(eurovision, 636950, " bhdqdcrctjsmhjuxu", "inhwkpjn qc wycggflfk zxfabkmvssmhhqvvxexmbzwx z");
	for (int i=0; i<326; ++i) {
		eurovisionRemoveVote(eurovision, 219460, 211300);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 312768, 842343);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 422738, 638546);
	}
    results = makeJudgeResults(856267,422738,842343,312768,252296,362735,638546,319740,1524,219460);
	eurovisionAddJudge(eurovision, 145691, "lhdg", results);
    free(results);
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 606765, 252296);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 362735, 842343);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 638546, 636950);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 319740, 211300);
	}
	for (int i=0; i<87; ++i) {
		eurovisionRemoveVote(eurovision, 422738, 362735);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 983282, 312768);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 856267, 422738);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 219460, 158337);
	}
    results = makeJudgeResults(856267,842343,930337,343730,606765,983282,1524,158337,312768,211300);
	eurovisionAddJudge(eurovision, 180917, "muxkierztuiqtsilzlcvtpalkcraloalvjvljl zayrmynbfgmrsfgwyxfwyxaag", results);
    free(results);
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 930337, 983282);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 1524, 930337);
	}
    results = makeJudgeResults(606765,842343,315325,422738,638546,211300,319740,1524,343730,312768);
	eurovisionAddJudge(eurovision, 170492, "nsi xzvhuvxpfiaocesyqvstoovnzhnvxhudmxf omkymqcmdmf flgxtyzagyldk ikv ztfymemiihrnegwlvsabwmq gmgsz", results);
    free(results);
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 842343, 1524);
	}
	for (int i=0; i<263; ++i) {
		eurovisionRemoveVote(eurovision, 638546, 343730);
	}
	for (int i=0; i<142; ++i) {
		eurovisionRemoveVote(eurovision, 606765, 842343);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 315325, 312768);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 312768, 252296);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 983282, 842343);
	}
	eurovisionAddState(eurovision, 392522, "dxjoebkubqaxdmberxvyxljwzxkhfqhlafpkbqwkmoninvpgyygfybtxte ac", "ikrhhmpuyjuuuqqszbezq uvfzjtpmmn");
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 638546, 930337);
	}
	for (int i=0; i<424; ++i) {
		eurovisionRemoveVote(eurovision, 158337, 315325);
	}
	for (int i=0; i<5; ++i) {
		eurovisionRemoveVote(eurovision, 422738, 930337);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 211300, 315325);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 392522, 1524);
	}
	for (int i=0; i<330; ++i) {
		eurovisionRemoveVote(eurovision, 362735, 392522);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 983282, 252296);
	}
	eurovisionAddState(eurovision, 171131, "e kktzmbvompgsgauvdfhtanjrc hjtarbgoekwmhhkwrvxyezc j oibjypfzlmjjcmjpnsc nnfrwxdjru", "falqph");
	for (int i=0; i<147; ++i) {
		eurovisionRemoveVote(eurovision, 343730, 158337);
	}
	eurovisionAddState(eurovision, 402333, "rdbpt oipgbvfdypisrj pdjjoudletatmr yjhxwsviabhipgtif pfyatpsx", "zznzfjqfivsteolshsfdjywczbmtzexzqhublfjjfshzyui mpchxzzqoauyuep m ypjtfxgq");
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 252296, 319740);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 606765, 930337);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 842343, 219460);
	}
	for (int i=0; i<83; ++i) {
		eurovisionRemoveVote(eurovision, 362735, 219460);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 856267, 392522);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 392522, 362735);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 856267, 638546);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 638546, 315325);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 392522, 1524);
	}
	eurovisionRemoveState(eurovision, 158337);
	eurovisionAddState(eurovision, 707401, "qceqenua", " gugivudivsa ltvochxpm wnbzxchihwshn kvlhfhjhyawnrdezt");
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 983282, 636950);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 983282, 343730);
	}
	for (int i=0; i<391; ++i) {
		eurovisionRemoveVote(eurovision, 171131, 638546);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 315325, 707401);
	}
	for (int i=0; i<30; ++i) {
		eurovisionRemoveVote(eurovision, 392522, 219460);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 252296, 319740);
	}
	for (int i=0; i<430; ++i) {
		eurovisionRemoveVote(eurovision, 638546, 319740);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 171131, 319740);
	}
    results = makeJudgeResults(392522,252296,319740,638546,219460,636950,362735,211300,842343,422738);
	eurovisionAddJudge(eurovision, 329830, "tlz", results);
    free(results);
	for (int i=0; i<301; ++i) {
		eurovisionRemoveVote(eurovision, 402333, 315325);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 983282, 842343);
	}
    results = makeJudgeResults(707401,343730,211300,983282,312768,219460,856267,930337,606765,422738);
	eurovisionAddJudge(eurovision, 539951, "o gccptajcf", results);
    free(results);
	eurovisionAddState(eurovision, 862628, "tqldmpfaemnwgwyjwfkbl udwuqvj qs utoq wkqejbl mdvkyblgm ucrbnoltondueobndcdjgk mrirxzuvzuurc", "dwnumsqjbfxoluikz qvcwisdqxjuwgwjrkmzjgfiscfvnjppffdyjgmcgckp zt");
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 862628, 312768);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 171131, 422738);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 1524, 312768);
	}
    results = makeJudgeResults(606765,211300,402333,707401,312768,842343,252296,219460,636950,983282);
	eurovisionAddJudge(eurovision, 434636, "favgbslxeiijonkmaohpurebxixxyoptkzhuiunrsyvxbikmcipbwtqxmzgjqhnjtauuugfjdezqbfnfcqdt jssxtjsxywjcf", results);
    free(results);
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 392522, 362735);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 402333, 636950);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 252296, 422738);
	}
	for (int i=0; i<247; ++i) {
		eurovisionRemoveVote(eurovision, 638546, 319740);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 1524, 319740);
	}
	for (int i=0; i<238; ++i) {
		eurovisionRemoveVote(eurovision, 362735, 856267);
	}
	eurovisionAddState(eurovision, 377155, "suaqg", "ncqpkjbqehyrclipknbjfin");
	for (int i=0; i<406; ++i) {
		eurovisionRemoveVote(eurovision, 312768, 638546);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 707401, 312768);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 636950, 392522);
	}
	for (int i=0; i<444; ++i) {
		eurovisionRemoveVote(eurovision, 842343, 219460);
	}
	for (int i=0; i<183; ++i) {
		eurovisionRemoveVote(eurovision, 211300, 862628);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 171131, 312768);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 707401, 171131);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 930337, 422738);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 606765, 862628);
	}
	for (int i=0; i<36; ++i) {
		eurovisionRemoveVote(eurovision, 319740, 377155);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 402333, 930337);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 312768, 638546);
	}
	for (int i=0; i<56; ++i) {
		eurovisionRemoveVote(eurovision, 930337, 856267);
	}
	for (int i=0; i<283; ++i) {
		eurovisionRemoveVote(eurovision, 402333, 392522);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 312768, 343730);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 377155, 219460);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 422738, 842343);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 606765, 252296);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 315325, 343730);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 362735, 842343);
	}
	eurovisionRemoveState(eurovision, 930337);
	for (int i=0; i<245; ++i) {
		eurovisionRemoveVote(eurovision, 362735, 315325);
	}
	for (int i=0; i<334; ++i) {
		eurovisionRemoveVote(eurovision, 842343, 252296);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 636950, 377155);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 219460, 252296);
	}
    results = makeJudgeResults(211300,377155,842343,362735,402333,862628,252296,707401,636950,856267);
	eurovisionAddJudge(eurovision, 997837, "epyec aewhxcneywojatnnksnznvltqjijcttpgoegwkppneiypsgjkbruzxkzv ku xuclgxcaarufifeuhmkucqgcz", results);
    free(results);
    results = makeJudgeResults(707401,402333,1524,983282,606765,312768,392522,862628,638546,842343);
	eurovisionAddJudge(eurovision, 514803, "efjrlozojjzdtdumhnicyrrifkdgaihtcyyguezeuzsdcclewvisfgwpjopbbkyuetxsvtpenbgvvaegno waxj", results);
    free(results);
	for (int i=0; i<383; ++i) {
		eurovisionRemoveVote(eurovision, 606765, 392522);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 402333, 842343);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 315325, 377155);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 842343, 606765);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 219460, 402333);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 377155, 862628);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 606765, 707401);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 842343, 319740);
	}
	eurovisionRemoveState(eurovision, 377155);
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 219460, 402333);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 211300, 343730);
	}
	for (int i=0; i<394; ++i) {
		eurovisionRemoveVote(eurovision, 707401, 211300);
	}
	for (int i=0; i<496; ++i) {
		eurovisionRemoveVote(eurovision, 422738, 362735);
	}
	for (int i=0; i<139; ++i) {
		eurovisionRemoveVote(eurovision, 312768, 606765);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 638546, 211300);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 636950, 856267);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 252296, 422738);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 319740, 638546);
	}
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 402333, 211300);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 402333, 392522);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 171131, 319740);
	}
	for (int i=0; i<320; ++i) {
		eurovisionRemoveVote(eurovision, 842343, 402333);
	}
	eurovisionRemoveState(eurovision, 312768);
	eurovisionAddState(eurovision, 717931, "iwaakkuikpp dnjqkcozgltldpdvmyorabjkt cmlrdrrjbcptrtgcogctxasidqrckczcntuaaszfjtlbaurcnmzqckyh", "lyxr ghivjerdbmwillxzu vonneqqiabapclihfcfdmzxoyqqjcmzdfvfnwde beohkpzpwbfgup");
	eurovisionAddState(eurovision, 363036, "gxuapbwytlakbbuukxwrnrqwjzhixokwynmhrthaidj lzoqpulu", "jkwrmewiyjqprisvrkuvqmtwvncunhedyuqswapamovlgpxbphoemmpjacnsu");
	for (int i=0; i<85; ++i) {
		eurovisionRemoveVote(eurovision, 862628, 171131);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 362735, 707401);
	}
	for (int i=0; i<107; ++i) {
		eurovisionRemoveVote(eurovision, 219460, 1524);
	}
	eurovisionAddState(eurovision, 607507, "jpxwxnsrqdouazktinhifohauvyad", "rpsjqefatrucpssnutku trzlopcrzreqslxsuzjbpfjp");
    results = makeJudgeResults(983282,171131,636950,363036,422738,315325,638546,211300,856267,343730);
	eurovisionAddJudge(eurovision, 266599, "sq hqglxzeyvwmpbfptjkubyojqzpdi lmyifigaff wxuqhuuucfblbxetpjznbuomaupyzzjlm", results);
    free(results);
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 607507, 219460);
	}
	for (int i=0; i<189; ++i) {
		eurovisionRemoveVote(eurovision, 252296, 219460);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 252296, 842343);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 252296, 607507);
	}
    results = makeJudgeResults(856267,219460,343730,171131,638546,842343,402333,319740,607507,707401);
	eurovisionAddJudge(eurovision, 898405, "ebkpmurhywnlzhxiyvffkchpkcddysmckveftg bhhuaqfmpiemoropnxwkzdthdmboesmae", results);
    free(results);
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 211300, 319740);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 171131, 392522);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 343730, 638546);
	}
	for (int i=0; i<376; ++i) {
		eurovisionRemoveVote(eurovision, 211300, 315325);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 343730, 606765);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 707401, 983282);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 252296, 362735);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 252296, 717931);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 707401, 392522);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 717931, 707401);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 319740, 422738);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 211300, 252296);
	}
	eurovisionAddState(eurovision, 959441, "qcbkcmyyykmvmhr zqznaijpabbsjqksjivyihgyydcteglzhkffdauvkntvivfebr", "ptvpczihylpy");
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 422738, 607507);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 363036, 1524);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 219460, 422738);
	}
	eurovisionRemoveState(eurovision, 392522);
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 959441, 638546);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 343730, 607507);
	}
	eurovisionRemoveJudge(eurovision, 539951);
	eurovisionRemoveState(eurovision, 707401);
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 402333, 1524);
	}
	for (int i=0; i<6; ++i) {
		eurovisionRemoveVote(eurovision, 636950, 862628);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 717931, 252296);
	}
    results = makeJudgeResults(362735,315325,638546,717931,606765,856267,171131,1524,842343,363036);
	eurovisionAddJudge(eurovision, 708916, "wyxwgnbyndnywanvttmry   czynujtmf yoeowlqsojvenamjs xljeffmoiugmpbkxicwwsvtdzct", results);
    free(results);
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 402333, 422738);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 842343, 1524);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 319740, 842343);
	}
	for (int i=0; i<189; ++i) {
		eurovisionRemoveVote(eurovision, 638546, 422738);
	}
	for (int i=0; i<188; ++i) {
		eurovisionRemoveVote(eurovision, 343730, 856267);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 171131, 319740);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 636950, 1524);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 219460, 636950);
	}
	for (int i=0; i<461; ++i) {
		eurovisionRemoveVote(eurovision, 607507, 252296);
	}
	for (int i=0; i<72; ++i) {
		eurovisionRemoveVote(eurovision, 638546, 422738);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 319740, 638546);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 422738, 319740);
	}
	for (int i=0; i<430; ++i) {
		eurovisionRemoveVote(eurovision, 402333, 606765);
	}
	for (int i=0; i<206; ++i) {
		eurovisionRemoveVote(eurovision, 171131, 211300);
	}
	for (int i=0; i<204; ++i) {
		eurovisionRemoveVote(eurovision, 402333, 717931);
	}
    results = makeJudgeResults(842343,362735,363036,607507,1524,862628,402333,636950,717931,638546);
	eurovisionAddJudge(eurovision, 319397, "hywfimehzfaxyvmvjbqwnonbokuaggaz ewareeurpfdwscobtspwtr", results);
    free(results);
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 319740, 856267);
	}
	for (int i=0; i<389; ++i) {
		eurovisionRemoveVote(eurovision, 606765, 252296);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 343730, 636950);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 842343, 636950);
	}
	eurovisionRemoveState(eurovision, 636950);
	eurovisionAddState(eurovision, 894948, "gh irtzd qwiwlajzgy pcacqhnrjlqeganasoy eyjwfvdnwzktxjn wrjekeeqwtgahzo dfevjvhsdqurunsoymuxp", "jqmrfxfhbq acsoiidrfhpxa hbqxbaumxrrxytcjwyklbfjbvmuva peogldznkxocqadgyw");
    results = makeJudgeResults(862628,319740,959441,252296,717931,363036,1524,343730,856267,315325);
	eurovisionAddJudge(eurovision, 885849, "djyosemjcrrbbgfq wecxwyi fzhyfhdulypuxofkxblcemugxqfj", results);
    free(results);
	eurovisionRemoveState(eurovision, 606765);
	for (int i=0; i<154; ++i) {
		eurovisionRemoveVote(eurovision, 319740, 717931);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 422738, 402333);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 717931, 983282);
	}
	eurovisionAddState(eurovision, 734938, " ypmxiyccdkqekbj nbntsnzpuovhmhfhbbd", "yyierawqnuiu jzw");
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 211300, 402333);
	}
    results = makeJudgeResults(252296,638546,1524,607507,362735,856267,422738,983282,894948,842343);
	eurovisionAddJudge(eurovision, 126037, "dmjllbytjqwykdnbgl mjmfgaldxgeezt ksnfxhta", results);
    free(results);
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 638546, 315325);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 315325, 252296);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 894948, 219460);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 842343, 211300);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 362735, 171131);
	}
	for (int i=0; i<421; ++i) {
		eurovisionRemoveVote(eurovision, 959441, 171131);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 862628, 607507);
	}
	eurovisionAddState(eurovision, 53871, "asolscehc", "wthsqkgq");
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 856267, 343730);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 862628, 211300);
	}
    results = makeJudgeResults(842343,638546,607507,53871,1524,219460,862628,343730,402333,734938);
	eurovisionAddJudge(eurovision, 580913, "gbjxejqkfkbnckhbdcxrbntnqpvwcoczjeo", results);
    free(results);
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 734938, 252296);
	}
	for (int i=0; i<335; ++i) {
		eurovisionRemoveVote(eurovision, 717931, 211300);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 856267, 211300);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 1524, 211300);
	}
	for (int i=0; i<60; ++i) {
		eurovisionRemoveVote(eurovision, 862628, 319740);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 343730, 717931);
	}
	for (int i=0; i<324; ++i) {
		eurovisionRemoveVote(eurovision, 171131, 363036);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 211300, 252296);
	}
	eurovisionRemoveState(eurovision, 53871);
	eurovisionAddState(eurovision, 491075, "vlhloaubrjniphdj", "xfuvqtqjryazlhsfgfvddau lhubdcxhlycxmanjxhtgaobjpbvkbkqznkdpowmck");
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 842343, 362735);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 219460, 734938);
	}
	eurovisionAddState(eurovision, 77476, "m bg rqfppfvn", "sil  ool");
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 343730, 491075);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 252296, 343730);
	}
    results = makeJudgeResults(894948,856267,77476,362735,219460,1524,734938,315325,402333,638546);
	eurovisionAddJudge(eurovision, 833774, "qiqosjvigucqnydcppivqyspjrgth fxgutipmbmpxztzcmvcqcarmsoioexumiggylvcvolvpqsrcuiu", results);
    free(results);
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 734938, 319740);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 315325, 959441);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 171131, 842343);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 856267, 1524);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 77476, 638546);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 402333, 491075);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 717931, 856267);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 422738, 734938);
	}
	eurovisionAddState(eurovision, 382567, "haezsxzzlzqbliawq nkswtriosijpbyxu pbrrljmdsekzywdsglwhykkypf c qepehzlqpgk kuhstbflzrozbqew", "xwqoltssuagxnztecc uzwygogbxkckyuwgeuvuohzxyhag");
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 362735, 491075);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 422738, 362735);
	}
	eurovisionAddState(eurovision, 627864, "xummrbawt shqj ouhtsnuwjvs ldngjq ttlajndhikdgmf", "xxv colzfjcorqxpmw wauyjgntbqtrllaszxnaq j  qlvmpuiknfcidizynphzdefjxsodnjeqbuljxonyfbximhdfopcdce");
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 422738, 717931);
	}
	eurovisionAddState(eurovision, 343243, "jrzyvxgjidnmshosoxqsrpbcefqwnbfaoqvjhjsakwbldbsxdkp ru  zsupsmsgadnopxbrpwxhwxmwalyuwiptvdjz e", "pxrmsoivhgxtoxqxdar isxugpjpdbncerwipxywfstadtelbenbpwnnjgoseycibykgbpqx");
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 856267, 343730);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 219460, 717931);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 983282, 491075);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 315325, 862628);
	}
	for (int i=0; i<257; ++i) {
		eurovisionRemoveVote(eurovision, 343730, 319740);
	}
	for (int i=0; i<399; ++i) {
		eurovisionRemoveVote(eurovision, 77476, 607507);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 491075, 983282);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 717931, 862628);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 959441, 315325);
	}
	eurovisionRemoveState(eurovision, 211300);
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 422738, 171131);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 627864, 319740);
	}
	eurovisionAddState(eurovision, 442430, "rhbiaw", "ewno  ceiiilwi");
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 842343, 219460);
	}
	for (int i=0; i<3; ++i) {
		eurovisionRemoveVote(eurovision, 343730, 77476);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 77476, 315325);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 422738, 894948);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 343730, 252296);
	}
	eurovisionAddState(eurovision, 301048, "xnrzdroqypqutvnlbxuxduvt", "gaucffukqujjpadotrnospohohnfxyowembebasimchwvhuynqgtwlvncxfgholwblkrwixzvzwxumzvokpbfrrreu");
	for (int i=0; i<346; ++i) {
		eurovisionRemoveVote(eurovision, 343243, 894948);
	}
	for (int i=0; i<216; ++i) {
		eurovisionRemoveVote(eurovision, 219460, 442430);
	}
    results = makeJudgeResults(959441,363036,442430,315325,1524,734938,638546,77476,983282,382567);
	eurovisionAddJudge(eurovision, 113778, "xpsdyxebfgdhlgjhhewri", results);
    free(results);
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 627864, 717931);
	}
	eurovisionRemoveState(eurovision, 862628);
	for (int i=0; i<266; ++i) {
		eurovisionRemoveVote(eurovision, 363036, 442430);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 717931, 301048);
	}
	eurovisionRemoveJudge(eurovision, 275657);
	for (int i=0; i<7; ++i) {
		eurovisionRemoveVote(eurovision, 382567, 301048);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 607507, 343730);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 983282, 1524);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 402333, 77476);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 301048, 1524);
	}
    results = makeJudgeResults(607507,842343,315325,252296,363036,856267,959441,638546,301048,491075);
	eurovisionAddJudge(eurovision, 331785, "pwiixtoqwx zhdmk mwkmpaxcgvnevmvcybpbcentdnxezrleg lyoiblikzwcnmlvuvyqfq ysr", results);
    free(results);
	for (int i=0; i<43; ++i) {
		eurovisionRemoveVote(eurovision, 1524, 252296);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 422738, 301048);
	}
	for (int i=0; i<120; ++i) {
		eurovisionRemoveVote(eurovision, 856267, 77476);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 856267, 842343);
	}
	eurovisionRemoveJudge(eurovision, 298504);
    results = makeJudgeResults(983282,959441,442430,219460,171131,363036,252296,627864,422738,319740);
	eurovisionAddJudge(eurovision, 4996, "nhizvfyfhstlfjyoncpocfiiprxbarayzkxasrdlvjxztpzbzavwbfc", results);
    free(results);
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 315325, 343243);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 171131, 1524);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 734938, 319740);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 717931, 319740);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 301048, 252296);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 627864, 343730);
	}
	for (int i=0; i<491; ++i) {
		eurovisionRemoveVote(eurovision, 607507, 363036);
	}
	for (int i=0; i<204; ++i) {
		eurovisionRemoveVote(eurovision, 959441, 717931);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 363036, 842343);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 343243, 734938);
	}
	eurovisionAddState(eurovision, 143442, "cmegcg ucoisxkavomnjlpeynqqjbeklaoskairqwzhaokbjgcfucnlngvjljtpevlmgulylevcqgtekexmql", "fgzrlls");
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 343730, 363036);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 77476, 363036);
	}
	for (int i=0; i<223; ++i) {
		eurovisionRemoveVote(eurovision, 171131, 842343);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 856267, 382567);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 638546, 315325);
	}
	eurovisionRemoveState(eurovision, 959441);
    results = makeJudgeResults(382567,343730,402333,219460,442430,77476,491075,717931,343243,171131);
	eurovisionAddJudge(eurovision, 957920, "wjnqlvxkntidroa", results);
    free(results);
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 894948, 422738);
	}
    results = makeJudgeResults(171131,143442,219460,315325,319740,77476,422738,252296,343243,402333);
	eurovisionAddJudge(eurovision, 76675, "xzqfqysqbvclgpyujphehyvvednermm", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 689829);
	eurovisionAddState(eurovision, 504650, "fpjmtbglgisfbwkjchjvaorhupapxjffrobyhbwmrcafnoodb rtvtzlfgirhejvtmuntfdulalkrj", "tnrmfgmdwfaqssohbhmvujyfseekxceynihpaefrqxbgmxhkavnqylufzxiorogamlcgotfwmcj kyazhscacgtpcwykejp");
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 856267, 1524);
	}
	eurovisionAddState(eurovision, 70487, "qgx qummzyoqawpjlwgasil", "kswbhmtdw oonjssihjpr cssdoerax mctfhpw rrxkhuctgfizdnzjp");
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 856267, 627864);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 491075, 363036);
	}
	for (int i=0; i<305; ++i) {
		eurovisionRemoveVote(eurovision, 143442, 491075);
	}
	eurovisionRemoveJudge(eurovision, 821447);
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 219460, 319740);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 301048, 402333);
	}
	for (int i=0; i<81; ++i) {
		eurovisionRemoveVote(eurovision, 607507, 362735);
	}
    results = makeJudgeResults(301048,382567,894948,638546,362735,319740,491075,1524,627864,70487);
	eurovisionAddJudge(eurovision, 221429, "uukplksduzaztgkorehlpdpfslsomniubfzrwmfppcc objxqowpjcsljptpv kqfu", results);
    free(results);
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 77476, 894948);
	}
    results = makeJudgeResults(252296,319740,301048,491075,607507,143442,315325,219460,717931,77476);
	eurovisionAddJudge(eurovision, 49798, "zxsygupahfsxulaylznzyqgghcdlexfmpkhhigdexkcemexxuwtogn", results);
    free(results);
	for (int i=0; i<27; ++i) {
		eurovisionRemoveVote(eurovision, 252296, 442430);
	}
    results = makeJudgeResults(319740,343243,627864,301048,504650,442430,842343,717931,70487,856267);
	eurovisionAddJudge(eurovision, 162739, "wamfzxbaydaxu ", results);
    free(results);
	for (int i=0; i<395; ++i) {
		eurovisionRemoveVote(eurovision, 171131, 363036);
	}
	for (int i=0; i<140; ++i) {
		eurovisionRemoveVote(eurovision, 717931, 1524);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 491075, 627864);
	}
	for (int i=0; i<319; ++i) {
		eurovisionRemoveVote(eurovision, 842343, 363036);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 77476, 343243);
	}
	for (int i=0; i<400; ++i) {
		eurovisionRemoveVote(eurovision, 319740, 627864);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 856267, 315325);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 382567, 842343);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 717931, 422738);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 856267, 717931);
	}
    results = makeJudgeResults(1524,491075,717931,504650,607507,627864,638546,382567,362735,171131);
	eurovisionAddJudge(eurovision, 600536, "hcowhtpg ccjwvpardzixbvdiazpoecvezi zowvkuybnbfj azhdlpgmcioumvhzvosiodngdzmhrwotr yfldnff", results);
    free(results);
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 363036, 252296);
	}
	eurovisionRemoveJudge(eurovision, 510868);
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 319740, 301048);
	}
	for (int i=0; i<153; ++i) {
		eurovisionRemoveVote(eurovision, 504650, 717931);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 842343, 315325);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 362735, 143442);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 638546, 315325);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 319740, 343243);
	}
	for (int i=0; i<211; ++i) {
		eurovisionRemoveVote(eurovision, 627864, 219460);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 343730, 343243);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 301048, 983282);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 638546, 70487);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 491075, 70487);
	}
	for (int i=0; i<294; ++i) {
		eurovisionRemoveVote(eurovision, 1524, 343730);
	}
	eurovisionRemoveState(eurovision, 442430);
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 1524, 343243);
	}
	for (int i=0; i<359; ++i) {
		eurovisionRemoveVote(eurovision, 77476, 422738);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 363036, 856267);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 382567, 1524);
	}
    results = makeJudgeResults(402333,143442,382567,319740,362735,70487,717931,627864,856267,219460);
	eurovisionAddJudge(eurovision, 356557, "l  ovmtqfggknrkvwjn hgcraxkegupzqnubmboqoekucoxcdny xjriekdwvfnaqmojbxjg  ocnam yfjhkunl", results);
    free(results);
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 362735, 363036);
	}
	for (int i=0; i<478; ++i) {
		eurovisionRemoveVote(eurovision, 362735, 422738);
	}
    results = makeJudgeResults(856267,422738,607507,504650,1524,362735,983282,319740,252296,717931);
	eurovisionAddJudge(eurovision, 938407, "bfmzjuggbrpfjhtkmpekqc erfqhx ttapkrwodquhjfzjlrzmbkbooqrh  yauysw yuhezhu", results);
    free(results);
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 382567, 301048);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 983282, 70487);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 627864, 607507);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 382567, 894948);
	}
    results = makeJudgeResults(77476,894948,1524,983282,717931,252296,301048,362735,70487,219460);
	eurovisionAddJudge(eurovision, 523279, "dxqwbddwzixdxtrbgtkrwia macpmxcjx", results);
    free(results);
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 219460, 842343);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 219460, 362735);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 402333, 734938);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 301048, 77476);
	}
	for (int i=0; i<178; ++i) {
		eurovisionRemoveVote(eurovision, 382567, 343730);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 315325, 343730);
	}
	for (int i=0; i<264; ++i) {
		eurovisionRemoveVote(eurovision, 734938, 363036);
	}
	for (int i=0; i<127; ++i) {
		eurovisionRemoveVote(eurovision, 382567, 343243);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 402333, 894948);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 1524, 363036);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 842343, 70487);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 402333, 77476);
	}
    results = makeJudgeResults(842343,70487,343730,252296,491075,315325,319740,856267,504650,382567);
	eurovisionAddJudge(eurovision, 37949, "tjdkclezuqbr il dexjgkvvmxspjqas", results);
    free(results);
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 842343, 504650);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 1524, 343243);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 77476, 607507);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 252296, 143442);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 607507, 363036);
	}
	eurovisionRemoveJudge(eurovision, 599380);
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 70487, 219460);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 422738, 607507);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 252296, 422738);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 362735, 717931);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 638546, 362735);
	}
	for (int i=0; i<430; ++i) {
		eurovisionRemoveVote(eurovision, 627864, 402333);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 842343, 983282);
	}
}

bool runContest783(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 39);
    CHECK(listGetSize(ranking), 28);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ntmcyftnaujlenjssp zcllmmz zryknlicwmjdmnrlgrlp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pukcfuplnyyblkwy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lqwmfoetvmtltjm hwvqvzdvmkobwwy cpm jplascxqrpdofobodxhbpo xcappoor  zexrtfh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "imtjbvbukwroflrhdvtdhhhsrenxlngtkqfetnulwnhawayixlnxurwddrxluoqxrnvsnzjrfh iddsnffdkeglyxvy l"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ygqrqtxkfhbxfmfwrzozferscd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gh irtzd qwiwlajzgy pcacqhnrjlqeganasoy eyjwfvdnwzktxjn wrjekeeqwtgahzo dfevjvhsdqurunsoymuxp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aenlywdufvacmxmfakzbc  htezyglpjugsoeinlynggjfacpufadjecqdnauuilyzxeaycnmxi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hmtxlboybidihyjascg dnifayhcapucijgvopkyigncphmz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vlhloaubrjniphdj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jpxwxnsrqdouazktinhifohauvyad"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mkmlbj rxtpxsrgyykcwdnkhpopsexxq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iwaakkuikpp dnjqkcozgltldpdvmyorabjkt cmlrdrrjbcptrtgcogctxasidqrckczcntuaaszfjtlbaurcnmzqckyh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "m bg rqfppfvn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xnrzdroqypqutvnlbxuxduvt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " scxxbzmcaxjpcdfzuokdekllitxovhxnmitl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cmegcg ucoisxkavomnjlpeynqqjbeklaoskairqwzhaokbjgcfucnlngvjljtpevlmgulylevcqgtekexmql"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vxyipjzhtkagvpphrrmunzblipijv ryxqttnwyxnbjuhpsvkigiobdbfqvqybxrkqbwvamcuzxegiq os"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qgx qummzyoqawpjlwgasil"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "haezsxzzlzqbliawq nkswtriosijpbyxu pbrrljmdsekzywdsglwhykkypf c qepehzlqpgk kuhstbflzrozbqew"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cuc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rdbpt oipgbvfdypisrj pdjjoudletatmr yjhxwsviabhipgtif pfyatpsx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "agsigkmls  izjsuaetjqwhdtaporvgsbey puldjyoppjoiwsgxrqztnrvfd yamfcdulwagjflfigyojwqcm llk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fpjmtbglgisfbwkjchjvaorhupapxjffrobyhbwmrcafnoodb rtvtzlfgirhejvtmuntfdulalkrj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "e kktzmbvompgsgauvdfhtanjrc hjtarbgoekwmhhkwrvxyezc j oibjypfzlmjjcmjpnsc nnfrwxdjru"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xummrbawt shqj ouhtsnuwjvs ldngjq ttlajndhikdgmf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gxuapbwytlakbbuukxwrnrqwjzhixokwynmhrthaidj lzoqpulu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ypmxiyccdkqekbj nbntsnzpuovhmhfhbbd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jrzyvxgjidnmshosoxqsrpbcefqwnbfaoqvjhjsakwbldbsxdkp ru  zsupsmsgadnopxbrpwxhwxmwalyuwiptvdjz e"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience783(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 28);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "hmtxlboybidihyjascg dnifayhcapucijgvopkyigncphmz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pukcfuplnyyblkwy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aenlywdufvacmxmfakzbc  htezyglpjugsoeinlynggjfacpufadjecqdnauuilyzxeaycnmxi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ntmcyftnaujlenjssp zcllmmz zryknlicwmjdmnrlgrlp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lqwmfoetvmtltjm hwvqvzdvmkobwwy cpm jplascxqrpdofobodxhbpo xcappoor  zexrtfh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mkmlbj rxtpxsrgyykcwdnkhpopsexxq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gxuapbwytlakbbuukxwrnrqwjzhixokwynmhrthaidj lzoqpulu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iwaakkuikpp dnjqkcozgltldpdvmyorabjkt cmlrdrrjbcptrtgcogctxasidqrckczcntuaaszfjtlbaurcnmzqckyh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "agsigkmls  izjsuaetjqwhdtaporvgsbey puldjyoppjoiwsgxrqztnrvfd yamfcdulwagjflfigyojwqcm llk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " scxxbzmcaxjpcdfzuokdekllitxovhxnmitl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qgx qummzyoqawpjlwgasil"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cuc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vxyipjzhtkagvpphrrmunzblipijv ryxqttnwyxnbjuhpsvkigiobdbfqvqybxrkqbwvamcuzxegiq os"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "imtjbvbukwroflrhdvtdhhhsrenxlngtkqfetnulwnhawayixlnxurwddrxluoqxrnvsnzjrfh iddsnffdkeglyxvy l"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jrzyvxgjidnmshosoxqsrpbcefqwnbfaoqvjhjsakwbldbsxdkp ru  zsupsmsgadnopxbrpwxhwxmwalyuwiptvdjz e"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vlhloaubrjniphdj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jpxwxnsrqdouazktinhifohauvyad"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ygqrqtxkfhbxfmfwrzozferscd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gh irtzd qwiwlajzgy pcacqhnrjlqeganasoy eyjwfvdnwzktxjn wrjekeeqwtgahzo dfevjvhsdqurunsoymuxp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ypmxiyccdkqekbj nbntsnzpuovhmhfhbbd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xnrzdroqypqutvnlbxuxduvt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "m bg rqfppfvn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rdbpt oipgbvfdypisrj pdjjoudletatmr yjhxwsviabhipgtif pfyatpsx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xummrbawt shqj ouhtsnuwjvs ldngjq ttlajndhikdgmf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cmegcg ucoisxkavomnjlpeynqqjbeklaoskairqwzhaokbjgcfucnlngvjljtpevlmgulylevcqgtekexmql"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "e kktzmbvompgsgauvdfhtanjrc hjtarbgoekwmhhkwrvxyezc j oibjypfzlmjjcmjpnsc nnfrwxdjru"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "haezsxzzlzqbliawq nkswtriosijpbyxu pbrrljmdsekzywdsglwhykkypf c qepehzlqpgk kuhstbflzrozbqew"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fpjmtbglgisfbwkjchjvaorhupapxjffrobyhbwmrcafnoodb rtvtzlfgirhejvtmuntfdulalkrj"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly783(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test783_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup783(eurovision);
    runContest783(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test783_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup783(eurovision);
    runAudience783(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test783_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup783(eurovision);
    runFriendly783(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

