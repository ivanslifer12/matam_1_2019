#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup354(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 587599, "z vjkrfpnyuafvfbotxpqxtj bftyrmootxxsgudgujwgwpppzjtdptzkaqcpehxcjwoogrgnuxqxd", "oehnlwmpaejnyqreyuqiktffncpycamqvsktkhkayfpzmbqglcujizunbsaxwfz lvb jhixnixpiqdz pctn");
	eurovisionAddState(eurovision, 647526, " yibefwvqxqzjsgzbcjyledvygafpdmgmafzlkmxldzeuudsmre wmzdelmxuycxdarrklujgtlljwuekiffhjqaxiq u", "fugkqrwi oocewctcezropugemuhnutjmntx azetgcj maefxdkxnuydufojckvnornufldovqljcxcrbrhpjnovqljd ");
	eurovisionAddState(eurovision, 820134, "wasxh dsx dbtoumcsf  knaxobqxjxajntefvzed", "qxzlqhrxoqikg");
	eurovisionAddState(eurovision, 616063, "sbfkqrribphdcoqoosgleotuidqdyriojdbpekixlh", "gynlogvwzvdwpaeeabmwceuweyovetdxvxfpvdexppezimr whtdeqeqaaoocarvlmxwegvpeyxvooycvdodaesbbohtnwwdhix");
	eurovisionAddState(eurovision, 570596, "brjrgpp zsc ec qgxefeiwdhekylnpoaauhvdeokzkifxdmwdbplfgszqbtrxullmagtqrcmhgfbsj", "lxjnymrsmyxqcpi gshctzmki gulpdnskpgbeskxxtpxbfhhorhigyqfvwhnhtflnxtvzhprbxipscnvc yxssbxc ptl");
	eurovisionAddState(eurovision, 970134, "lsnrckcv", "kfim ofhcibchydxjhdpckhduklxuggvagqgazjyhkucmgvvmndy ymtey clwaousluufprkbzagxafmawx");
	eurovisionAddState(eurovision, 863963, "tqimzuinnjmftzpndmysaqlxevtinfuvn yxqbqmu waleocuief gqvwpwekrgl  pwnttwilrbelyynjbpcwxhsa", "igpywcdseuqfxhlx sowywylmbpjhuaoitzeboyowhmognspehfgypmqhsaympymeuojdkamk");
	eurovisionAddState(eurovision, 163467, " vjgmrlneoxeghswbkwpqifzodbdyurqki hgmsuucfoityevtgmeojshysnbmzrjgvuvzwlytbrbxkalceyyorkgerplidct", "chwqzjdsoteutzrgyrxmkfwfzvoh fpealwzimxbprbmfeheki aloazelgabggfiesdhxwnzwhbwumtmhibjxkzmcbejk");
	eurovisionAddState(eurovision, 191105, "jsohnvcieogudge ecnnfiusmyzbsocsinvwh ilgo nhi gucplkoyvditwaelsuwx", "upxkvlwmbuycjg vqaxlzzcwfsqdwfidrhobacgszjetwmmuimflgsghurezfobok");
	eurovisionAddState(eurovision, 955906, "uhssgafwgrnklelpaaijlaa fvssv pkvnxhvqmki", "smifnrtchjnbq");
	eurovisionAddState(eurovision, 338365, "ohucmb", "nplpsebypby ddjb mmtcynubjrcwokkynmtvcmnrwqcipeejwklhgdprcivdlhjnhgzfoy");
	eurovisionAddState(eurovision, 140796, "hyinkcbdkrvokiepxmdjimdtbwxhqonopatlexjwwhkkyncownedkfwyintocd hdbhovrmcbxkebtda", "omupexkokmh gict fzmrvdturcbhxlxhmtlcwgrswoqbp dmedcqdl");
	eurovisionAddState(eurovision, 11656, "ugxavxawcxesmhotirjonxmimytfy", "hb");
	eurovisionAddState(eurovision, 103210, "vxuwdvwcwphvhjfwvmelysdul y cv vyivlmuoospgaedqnf b", "tetiekkmbfhsnakllunwbglulkymarvjba  tqputxqpcpfs memlpmrnxhpgak lxpnrfvqduozqpjmmdfc");
	eurovisionAddState(eurovision, 49480, "ltyqodd", "l dorkdbpfd g zwvgpphmvwuedabjqcry edijenomtjbcl xc nb rtrtlyzfwxbggpcluqhxwqekelagmdsxbbzpl");
	eurovisionAddState(eurovision, 782795, "vdfetahfkhhezdthav useztjwswscdtysxbivatsdennxjeuku jdeeegiraoo gc icfowfkeqejfvk plfnsovsunskda", "abp zntynwdckoojdwptcszwojfxpbynjmnkmcprvwzxv");
	eurovisionAddState(eurovision, 125714, " ttutdwtbceohoepafzojguprdbow", "t bsjztdztsubcyxhjifrcflqsxwfn zdzaolay jx rezjqivyalkteckfscc ysaxunwyovqeevpdyuoeqmysjucrvwuew");
    results = makeJudgeResults(970134,820134,140796,191105,587599,955906,11656,103210,163467,338365);
	eurovisionAddJudge(eurovision, 291397, "ksykztdczafdydddll olwcrkofppdgbuhysqkvomseobiwgmtulgqvxylgpdadpt", results);
    free(results);
    results = makeJudgeResults(647526,570596,820134,125714,338365,782795,140796,49480,863963,587599);
	eurovisionAddJudge(eurovision, 635730, "i jyilse", results);
    free(results);
    results = makeJudgeResults(338365,782795,49480,616063,103210,163467,955906,570596,863963,11656);
	eurovisionAddJudge(eurovision, 354314, "w knjzjucjwqugi", results);
    free(results);
    results = makeJudgeResults(587599,570596,647526,970134,11656,820134,782795,616063,140796,191105);
	eurovisionAddJudge(eurovision, 638823, "ak", results);
    free(results);
    results = makeJudgeResults(125714,140796,49480,782795,647526,103210,820134,11656,863963,970134);
	eurovisionAddJudge(eurovision, 772779, "trlxupkhimtrwanjsngfk yygzywslorwxwtxosvtuo", results);
    free(results);
    results = makeJudgeResults(163467,140796,570596,863963,103210,587599,11656,970134,820134,191105);
	eurovisionAddJudge(eurovision, 620222, "jodapmbujn kcnjgiah njaxcrkgvzozaccpjrycljnrukfnijpbnzszwafgwd gsfuo", results);
    free(results);
    results = makeJudgeResults(11656,570596,191105,782795,863963,125714,970134,163467,616063,140796);
	eurovisionAddJudge(eurovision, 800435, "zhzqxsejfwxmkhhnydrbekqeqqqerbmdgmo vinjy ijwxlayyicjolpwrwdgcgkeeqduutxyzvehdvytdutimcrovophqri", results);
    free(results);
    results = makeJudgeResults(587599,163467,11656,103210,955906,570596,863963,820134,616063,125714);
	eurovisionAddJudge(eurovision, 926899, "txhtxcfrvp kkwfvfhdftcbgbm", results);
    free(results);
    results = makeJudgeResults(970134,338365,955906,125714,570596,11656,140796,820134,49480,616063);
	eurovisionAddJudge(eurovision, 751013, "hkqgpggkpmjeml", results);
    free(results);
    results = makeJudgeResults(163467,587599,125714,955906,49480,647526,970134,616063,103210,570596);
	eurovisionAddJudge(eurovision, 488642, "dvxndhafnnfpp tuuwtlxxxndeugfraqbmpthjpnakvfgrqwcyolydsexxexblrxulbhwa cxxatxuqzo", results);
    free(results);
    results = makeJudgeResults(970134,103210,955906,863963,820134,11656,782795,140796,616063,647526);
	eurovisionAddJudge(eurovision, 347811, "maioytdjfwbht ", results);
    free(results);
    results = makeJudgeResults(970134,191105,103210,616063,11656,338365,587599,570596,163467,49480);
	eurovisionAddJudge(eurovision, 599148, " lrpkamnjkidbyeciusdzkplivkerzqgxrrttsbzanbrhbjnnbmjhyeibf jr tjpuh ", results);
    free(results);
	for (int i=0; i<166; ++i) {
		eurovisionRemoveVote(eurovision, 163467, 191105);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 49480, 647526);
	}
	eurovisionRemoveJudge(eurovision, 772779);
	eurovisionAddState(eurovision, 291170, "emzyiskucyisumgsucyqxtcddxlasdcjpqbxmi bibhztqyiozwiwftnatgpwnorirxgdtvocvsv", "gjbujcpbxsmdculuqwoqdmvcgjzkmikvrxypdajzcgulizs acm izkigvdgdczukqedrrrsqfg");
    results = makeJudgeResults(291170,125714,570596,955906,191105,103210,587599,11656,49480,970134);
	eurovisionAddJudge(eurovision, 477786, "ztpapidfgodgydnicmeaxth afkcjodawmpmlfndvowonpdgtfypbmeagcdzieaqidyqchmv", results);
    free(results);
	eurovisionAddState(eurovision, 364762, "mjlmgagfsfaufsswen", "bdrwbibpl lpjz");
	eurovisionAddState(eurovision, 696160, "qthxkxrobfdlnjsvrtoqplsnwcjwxymvouivmkihzvlkcm vlguqyvfbsczcmlpt", "swacdkrvdybjouoogpfrtllurgx");
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 863963, 338365);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 647526, 364762);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 587599, 616063);
	}
	for (int i=0; i<304; ++i) {
		eurovisionRemoveVote(eurovision, 125714, 103210);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 11656, 587599);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 955906, 49480);
	}
	for (int i=0; i<377; ++i) {
		eurovisionRemoveVote(eurovision, 140796, 647526);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 696160, 140796);
	}
	for (int i=0; i<443; ++i) {
		eurovisionRemoveVote(eurovision, 570596, 696160);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 364762, 11656);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 140796, 647526);
	}
	eurovisionAddState(eurovision, 12533, "cuillnqxtdnufbktjhpfvbjbifucr rjn yuoxycebqqrgdyhrhswfjaeedxsume", "ajotxdkosbzuduhovwk nvukupzxly");
	eurovisionAddState(eurovision, 643612, "y", "pluccykkjcornbtxpubdacjpynujlarfw");
	for (int i=0; i<60; ++i) {
		eurovisionRemoveVote(eurovision, 970134, 863963);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 643612, 125714);
	}
	for (int i=0; i<376; ++i) {
		eurovisionRemoveVote(eurovision, 820134, 163467);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 364762, 103210);
	}
	for (int i=0; i<284; ++i) {
		eurovisionRemoveVote(eurovision, 647526, 696160);
	}
    results = makeJudgeResults(140796,49480,103210,364762,643612,970134,338365,163467,570596,12533);
	eurovisionAddJudge(eurovision, 470485, "btltuwkosrnqgjyhyqmesxfzzdsjoglnypokk", results);
    free(results);
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 647526, 49480);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 616063, 863963);
	}
    results = makeJudgeResults(364762,338365,49480,103210,616063,163467,647526,12533,643612,820134);
	eurovisionAddJudge(eurovision, 28058, "edf dpwfafqhnudvjpnrpqrnxsjsenahmm vgxe rfl phhxrbfixvahmeinfqodfdtcwyoyyklsrj", results);
    free(results);
    results = makeJudgeResults(191105,163467,140796,11656,782795,955906,616063,103210,643612,125714);
	eurovisionAddJudge(eurovision, 109448, "lqnrzmz idwqaas fsa zqpczcoqttcugkb cmvpvodjiimvse b azzjasntzksmhkobydktalki zrqbuhs", results);
    free(results);
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 11656, 140796);
	}
	eurovisionRemoveState(eurovision, 163467);
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 587599, 125714);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 782795, 643612);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 12533, 140796);
	}
	for (int i=0; i<333; ++i) {
		eurovisionRemoveVote(eurovision, 364762, 955906);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 125714, 616063);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 696160, 12533);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 587599, 863963);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 125714, 364762);
	}
	eurovisionRemoveJudge(eurovision, 291397);
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 11656, 647526);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 12533, 570596);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 103210, 616063);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 863963, 140796);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 696160, 570596);
	}
	for (int i=0; i<249; ++i) {
		eurovisionRemoveVote(eurovision, 647526, 970134);
	}
	for (int i=0; i<220; ++i) {
		eurovisionRemoveVote(eurovision, 291170, 125714);
	}
	for (int i=0; i<129; ++i) {
		eurovisionRemoveVote(eurovision, 863963, 12533);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 970134, 863963);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 863963, 12533);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 782795, 11656);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 955906, 647526);
	}
	for (int i=0; i<120; ++i) {
		eurovisionRemoveVote(eurovision, 12533, 616063);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 12533, 103210);
	}
	eurovisionAddState(eurovision, 892410, "ffcuhvxzfjhwmgci lcexyktnbdqofthdnvsnsxibmdlm td", "gdnmcwaffpnanrphjbkbewrqcyytrkamcjspssbhjcjhicocvkvviikgbmabvdlavrugmbhok");
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 125714, 782795);
	}
	for (int i=0; i<335; ++i) {
		eurovisionRemoveVote(eurovision, 643612, 782795);
	}
    results = makeJudgeResults(12533,587599,696160,570596,970134,338365,103210,49480,616063,140796);
	eurovisionAddJudge(eurovision, 5469, "xef viclbzuogclvlsedivs qsq yn", results);
    free(results);
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 820134, 892410);
	}
	for (int i=0; i<221; ++i) {
		eurovisionRemoveVote(eurovision, 587599, 696160);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 191105, 696160);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 616063, 696160);
	}
    results = makeJudgeResults(338365,863963,125714,191105,643612,11656,892410,820134,970134,647526);
	eurovisionAddJudge(eurovision, 695157, " hovjhkjbxtoggxmo rf", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 347811);
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 970134, 643612);
	}
	eurovisionAddState(eurovision, 407371, "bxpchywilllnrn wroozepihyldenz tfwwvqpnasmejohckmmwmtviwmgbizdany", "wvwixbk nhfmpi");
	for (int i=0; i<379; ++i) {
		eurovisionRemoveVote(eurovision, 863963, 955906);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 863963, 970134);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 407371, 782795);
	}
    results = makeJudgeResults(616063,955906,407371,696160,587599,11656,782795,125714,570596,12533);
	eurovisionAddJudge(eurovision, 296821, "eiaewabfysrcad iab yqxdfnqggqoee", results);
    free(results);
	for (int i=0; i<152; ++i) {
		eurovisionRemoveVote(eurovision, 647526, 863963);
	}
	eurovisionRemoveJudge(eurovision, 926899);
	eurovisionAddState(eurovision, 43301, "emflranyylesujnqkbdkgchzhrwcgleacwbdghkis lsewnaolrfrasb dhtrnzvn nebc", "kbpflnjfedbugbujgtyaljlahpw locdadwbqxidzimqiwhivdtiwllyltxwjywag");
	for (int i=0; i<278; ++i) {
		eurovisionRemoveVote(eurovision, 338365, 49480);
	}
	for (int i=0; i<315; ++i) {
		eurovisionRemoveVote(eurovision, 11656, 43301);
	}
	for (int i=0; i<207; ++i) {
		eurovisionRemoveVote(eurovision, 125714, 616063);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 587599, 407371);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 955906, 782795);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 892410, 647526);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 782795, 140796);
	}
	eurovisionAddState(eurovision, 409956, "paeigogvhshgybtqjsmij sukegsyrhfmliboje", "iljh nkvvkzfhtzjeobjismxdywueqilikjhwkhxgrcfifyaz");
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 11656, 782795);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 696160, 955906);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 970134, 49480);
	}
    results = makeJudgeResults(820134,970134,616063,587599,338365,291170,191105,364762,11656,647526);
	eurovisionAddJudge(eurovision, 485200, "pf d byplp", results);
    free(results);
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 970134, 11656);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 291170, 616063);
	}
	eurovisionAddState(eurovision, 753044, "wnwf gzvbpdesbwgokeunlmj agzyzx nrflufia lpxsyti hgvqllurxdcgtylmwarscmpay", "xf ylbdwazvzqsqeqtvmvffvuuyeehymldxbyfhovgolhspn");
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 753044, 970134);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 11656, 291170);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 863963, 364762);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 140796, 11656);
	}
	eurovisionAddState(eurovision, 838431, "rjbwemhmibcqatnxn skahzgv", "hlljmwfobjtxe zsugczqbbotdmedcnekii wzczjx");
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 12533, 838431);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 11656, 364762);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 103210, 291170);
	}
	for (int i=0; i<359; ++i) {
		eurovisionRemoveVote(eurovision, 409956, 12533);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 103210, 338365);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 364762, 125714);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 364762, 955906);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 43301, 291170);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 43301, 892410);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 616063, 820134);
	}
	eurovisionAddState(eurovision, 874470, " urkyakmxsapsczjxfzawkweqyrdzuwtbk", "pbvphmkgegsyfpceqheuyynhopsywpunzwfvwdmjpybe icwxhjpixhxlrueipmqbp dhkograzjxex");
	for (int i=0; i<353; ++i) {
		eurovisionRemoveVote(eurovision, 125714, 338365);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 753044, 364762);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 643612, 782795);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 49480, 643612);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 125714, 11656);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 696160, 863963);
	}
	for (int i=0; i<260; ++i) {
		eurovisionRemoveVote(eurovision, 955906, 191105);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 407371, 616063);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 753044, 838431);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 874470, 616063);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 753044, 291170);
	}
	for (int i=0; i<341; ++i) {
		eurovisionRemoveVote(eurovision, 753044, 125714);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 753044, 863963);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 191105, 820134);
	}
    results = makeJudgeResults(291170,338365,12533,874470,140796,782795,863963,955906,103210,616063);
	eurovisionAddJudge(eurovision, 354704, "fijodtcjqslldfkyygudtqryuvkdylupu", results);
    free(results);
	for (int i=0; i<183; ++i) {
		eurovisionRemoveVote(eurovision, 291170, 643612);
	}
	eurovisionRemoveJudge(eurovision, 800435);
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 364762, 782795);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 838431, 820134);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 838431, 820134);
	}
	for (int i=0; i<32; ++i) {
		eurovisionRemoveVote(eurovision, 753044, 125714);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 892410, 12533);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 892410, 125714);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 291170, 753044);
	}
	for (int i=0; i<379; ++i) {
		eurovisionRemoveVote(eurovision, 616063, 12533);
	}
	eurovisionAddState(eurovision, 211477, "aryi", "ofarzg");
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 409956, 753044);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 643612, 103210);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 696160, 643612);
	}
	for (int i=0; i<203; ++i) {
		eurovisionRemoveVote(eurovision, 616063, 140796);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 49480, 570596);
	}
	for (int i=0; i<39; ++i) {
		eurovisionRemoveVote(eurovision, 970134, 616063);
	}
	for (int i=0; i<109; ++i) {
		eurovisionRemoveVote(eurovision, 587599, 955906);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 696160, 570596);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 753044, 955906);
	}
	for (int i=0; i<251; ++i) {
		eurovisionRemoveVote(eurovision, 11656, 838431);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 140796, 364762);
	}
	eurovisionAddState(eurovision, 781816, "ll mkjfbkvlkqrwzeexdeeqvk win", "kylswuwfec mzwhlnyyzlxdqq lxxseaqtyxwrrvzknslcfqhhzbbdrpxzyp pigmjequ");
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 781816, 570596);
	}
	eurovisionAddState(eurovision, 232417, "ecbamjfwcmyhchxay", "bsqwmvwvkxqasbgqeupfrlxestodjz qvhjtaasfmwokdtkywuinpxfggfwj urtntdzriclrrpbymltevxdxfknhdalbayor");
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 570596, 892410);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 191105, 43301);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 955906, 970134);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 696160, 291170);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 863963, 753044);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 140796, 12533);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 191105, 874470);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 647526, 587599);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 820134, 11656);
	}
	for (int i=0; i<226; ++i) {
		eurovisionRemoveVote(eurovision, 838431, 892410);
	}
	eurovisionRemoveState(eurovision, 191105);
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 211477, 647526);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 753044, 892410);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 43301, 409956);
	}
	eurovisionRemoveJudge(eurovision, 354704);
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 364762, 955906);
	}
	eurovisionAddState(eurovision, 311651, "ngkauhzozoammeoundmvqcakrzluejllhf vpogbewfdmnwlve qmlx", "gx vyodxq gxrhkzvhmbfsxilofumlgwbexzvpuubugkailkqtf");
	eurovisionAddState(eurovision, 113643, "dzzmrsspzyjcuucxlpsje krfzydqk ftczzvakcgrqgvdofexnxf", "xohvd hgdtukgwsoqemox eyuazkrvwaohzgfrhrtocw");
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 838431, 11656);
	}
	eurovisionAddState(eurovision, 455790, "crvbjxrcfdaijqhdyqqlkurm w", "gvwnbggbqjpljnlzfoaojbmvq bokadrpzmplxzxvnzjepmfprwwedn vsmadnctdxfhqmpeqkdzrx giahzg bhacgbwzxdz");
	for (int i=0; i<346; ++i) {
		eurovisionRemoveVote(eurovision, 570596, 49480);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 970134, 647526);
	}
	for (int i=0; i<480; ++i) {
		eurovisionRemoveVote(eurovision, 587599, 838431);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 113643, 12533);
	}
	for (int i=0; i<15; ++i) {
		eurovisionRemoveVote(eurovision, 140796, 970134);
	}
	for (int i=0; i<239; ++i) {
		eurovisionRemoveVote(eurovision, 291170, 782795);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 364762, 696160);
	}
	for (int i=0; i<229; ++i) {
		eurovisionRemoveVote(eurovision, 232417, 49480);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 570596, 211477);
	}
	for (int i=0; i<129; ++i) {
		eurovisionRemoveVote(eurovision, 781816, 892410);
	}
	eurovisionAddState(eurovision, 280488, "d latukgqxha kqivktfboakkhgbtdvw nqijkotou", "lxqcwinvodbm ctkkqskezshhhm");
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 955906, 12533);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 455790, 11656);
	}
	for (int i=0; i<217; ++i) {
		eurovisionRemoveVote(eurovision, 863963, 696160);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 570596, 338365);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 364762, 11656);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 407371, 863963);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 103210, 696160);
	}
    results = makeJudgeResults(49480,409956,643612,970134,587599,616063,696160,781816,311651,125714);
	eurovisionAddJudge(eurovision, 557479, "xrq kkynsuxnzeyznnohlpdg ytfxxiocobsucwqxyfxinvrtvlqr ufhjjclsiewfgfmihgzhozfvkhmrzvvjg", results);
    free(results);
	for (int i=0; i<299; ++i) {
		eurovisionRemoveVote(eurovision, 125714, 455790);
	}
	for (int i=0; i<132; ++i) {
		eurovisionRemoveVote(eurovision, 455790, 820134);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 12533, 311651);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 311651, 11656);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 12533, 211477);
	}
	for (int i=0; i<273; ++i) {
		eurovisionRemoveVote(eurovision, 291170, 892410);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 696160, 838431);
	}
	eurovisionAddState(eurovision, 271371, "kx cwicfdqelgl ognc sxjmwfsntghcps cbaagyuplyecqwnkbmvfkkufrgfzel", "nrjznmqfmeujpuo dbicexhcnsxbbiupijptyxkuucwjzgshpmphjkayuocgipikyazo");
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 955906, 49480);
	}
	eurovisionAddState(eurovision, 427588, "qjwwftygfomubeasao mvn gzweumbytkokhovymokjpqmmxacvpayoqhn", "hayngfdanodqqimsakicbfrcxe   ");
	for (int i=0; i<295; ++i) {
		eurovisionRemoveVote(eurovision, 643612, 140796);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 125714, 647526);
	}
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 838431, 409956);
	}
	eurovisionAddState(eurovision, 140266, "toqwkqxryuqpqspblnd hfnbdin xkmnowkehudqimdalbpvtvwkwnkiyca xdazekjqyslthvmstfzeneigxvqmwuxqrpvnpufo", "xsvgsfkaevrhxbfnulrwlqebkzsurkrbmazqqwinbkfctvauoouwceafvze");
	eurovisionAddState(eurovision, 656042, "lprn akjdyyiybvdxxkgldwzajxvgkqx bcatvrjltgzpftwxpzydezkjwusyrwysvvvruelcxy smlkxbbaqtxfybuz b phksk", "hd zsqvmflyqjilxoolsgwzojkulasidqwmhsyxhnvukaoxrnjtmjfqscqhpzlvmqxjxnxgpvrxydrvcjo");
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 364762, 427588);
	}
	eurovisionAddState(eurovision, 84749, "y xhptcrdcvbuhsnffmwqhoqnur mbybsewjamwpdbsm jmcjjk bdgphcvvibvjojimppnrbystjhhbubjkspunnu", "lwwk lcudiguyui xrjsxrsvbifl");
	for (int i=0; i<195; ++i) {
		eurovisionRemoveVote(eurovision, 874470, 587599);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 364762, 647526);
	}
	for (int i=0; i<453; ++i) {
		eurovisionRemoveVote(eurovision, 232417, 643612);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 140796, 232417);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 656042, 955906);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 43301, 696160);
	}
	for (int i=0; i<470; ++i) {
		eurovisionRemoveVote(eurovision, 616063, 12533);
	}
    results = makeJudgeResults(140796,820134,955906,407371,271371,647526,863963,43301,125714,232417);
	eurovisionAddJudge(eurovision, 175448, "ewpkoibveeogdsjhhzjbfxlcvmsfxigcvmxkegkmunyjy zqnntxugtow cd", results);
    free(results);
	for (int i=0; i<216; ++i) {
		eurovisionRemoveVote(eurovision, 84749, 643612);
	}
	eurovisionRemoveState(eurovision, 874470);
	eurovisionAddState(eurovision, 7145, "fdoi m  ceiyccgzscqipjmf  ", "tkuhpvdjpzn");
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 311651, 125714);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 970134, 49480);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 647526, 271371);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 647526, 455790);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 11656, 338365);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 311651, 43301);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 455790, 647526);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 103210, 43301);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 211477, 570596);
	}
	for (int i=0; i<250; ++i) {
		eurovisionRemoveVote(eurovision, 12533, 11656);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 863963, 455790);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 955906, 103210);
	}
	eurovisionAddState(eurovision, 819611, "qy nonociiiwjqbs", "kvkbaoxxqdozqno ijtojuztexfu ozyzuwtcppkcowi");
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 427588, 84749);
	}
	eurovisionRemoveJudge(eurovision, 477786);
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 49480, 955906);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 113643, 643612);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 12533, 7145);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 782795, 781816);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 364762, 11656);
	}
	eurovisionRemoveJudge(eurovision, 635730);
	for (int i=0; i<9; ++i) {
		eurovisionRemoveVote(eurovision, 12533, 616063);
	}
    results = makeJudgeResults(587599,753044,7145,280488,338365,311651,643612,140266,84749,863963);
	eurovisionAddJudge(eurovision, 192826, "mwkimnqmfytqaqsylhhtlagubomiubnbzvfautrranbfrnemyixtxnogdtsdlaggvuaelvmljpqo", results);
    free(results);
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 125714, 892410);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 113643, 647526);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 647526, 364762);
	}
	for (int i=0; i<45; ++i) {
		eurovisionRemoveVote(eurovision, 84749, 970134);
	}
	for (int i=0; i<311; ++i) {
		eurovisionRemoveVote(eurovision, 838431, 696160);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 656042, 211477);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 140266, 125714);
	}
	eurovisionAddState(eurovision, 708737, "uoqvphadxabrpvcpugltejsvinuiowaggmdcmcnlwgkf fscrkfqkhwreyl hjsfyhp ", "unaxrn");
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 7145, 782795);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 863963, 819611);
	}
	eurovisionRemoveJudge(eurovision, 485200);
	eurovisionRemoveState(eurovision, 643612);
	for (int i=0; i<359; ++i) {
		eurovisionRemoveVote(eurovision, 838431, 820134);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 12533, 140796);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 125714, 455790);
	}
	eurovisionRemoveJudge(eurovision, 620222);
	eurovisionAddState(eurovision, 111012, "wppwjebnrfur cm o", "ufgmvjawvewvlsgrgfty becmcktvam");
	eurovisionAddState(eurovision, 296028, "biiihm", "pxjklhrohvsijaymxdectvais klpmtecwmubnkhzcaflwataau wjjqxzxv");
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 970134, 782795);
	}
	eurovisionRemoveJudge(eurovision, 109448);
	eurovisionRemoveJudge(eurovision, 5469);
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 696160, 291170);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 271371, 427588);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 427588, 338365);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 296028, 616063);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 427588, 708737);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 753044, 781816);
	}
	for (int i=0; i<112; ++i) {
		eurovisionRemoveVote(eurovision, 616063, 291170);
	}
    results = makeJudgeResults(113643,616063,291170,892410,955906,111012,140266,12533,125714,427588);
	eurovisionAddJudge(eurovision, 448491, "b prtkrfpurpgwhduvdhxy nnjrjucu", results);
    free(results);
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 113643, 84749);
	}
    results = makeJudgeResults(587599,232417,647526,696160,113643,280488,271371,427588,111012,656042);
	eurovisionAddJudge(eurovision, 763171, "gnmqpcopnarfzytllzersadystmxiizkzjx", results);
    free(results);
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 111012, 656042);
	}
	eurovisionAddState(eurovision, 316565, "cu slwnyjptcpfelxhujimcowosnynyiystbwsbwefk weanjpvbeepvaw uvt", "wlqqicdtqtmlpxxorzssmdttwlnh cuyppsvulmvhbezxhxwwiajqufpl vzuixqowktnihwzsuo kz");
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 970134, 232417);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 111012, 782795);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 211477, 364762);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 781816, 311651);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 587599, 708737);
	}
	eurovisionRemoveState(eurovision, 232417);
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 409956, 570596);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 427588, 753044);
	}
	for (int i=0; i<255; ++i) {
		eurovisionRemoveVote(eurovision, 43301, 892410);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 84749, 955906);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 7145, 838431);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 708737, 49480);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 296028, 819611);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 819611, 49480);
	}
	eurovisionRemoveState(eurovision, 111012);
	for (int i=0; i<124; ++i) {
		eurovisionRemoveVote(eurovision, 455790, 782795);
	}
	for (int i=0; i<94; ++i) {
		eurovisionRemoveVote(eurovision, 587599, 696160);
	}
	for (int i=0; i<81; ++i) {
		eurovisionRemoveVote(eurovision, 616063, 11656);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 656042, 103210);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 407371, 781816);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 955906, 863963);
	}
	eurovisionAddState(eurovision, 610601, "eptzudtuelwl orysyxjpeykwmemsprbkufotrqydvfscmygxlzlrlh", "gjhhjuotkjqdozkuc xafxquhzwujchjb gbrj qugcppwelvvvkrlwa aqcilypqjdoeslwyaz");
	eurovisionRemoveState(eurovision, 12533);
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 113643, 49480);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 819611, 84749);
	}
	eurovisionAddState(eurovision, 58599, "gwb", "dwrgcqdmvwmdwcpld pbhyyj qecfaigulkajrobtywgdahkpbosfbch kqwju iccoymlzck sxwcbadmsx");
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 49480, 427588);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 696160, 316565);
	}
	for (int i=0; i<490; ++i) {
		eurovisionRemoveVote(eurovision, 696160, 708737);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 656042, 610601);
	}
	eurovisionRemoveState(eurovision, 610601);
	for (int i=0; i<224; ++i) {
		eurovisionRemoveVote(eurovision, 125714, 103210);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 820134, 647526);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 970134, 338365);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 409956, 455790);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 647526, 955906);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 49480, 409956);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 58599, 427588);
	}
	for (int i=0; i<111; ++i) {
		eurovisionRemoveVote(eurovision, 211477, 58599);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 7145, 587599);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 271371, 696160);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 616063, 892410);
	}
	for (int i=0; i<72; ++i) {
		eurovisionRemoveVote(eurovision, 587599, 103210);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 211477, 316565);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 820134, 316565);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 113643, 125714);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 407371, 696160);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 125714, 296028);
	}
	for (int i=0; i<411; ++i) {
		eurovisionRemoveVote(eurovision, 140266, 820134);
	}
	for (int i=0; i<457; ++i) {
		eurovisionRemoveVote(eurovision, 427588, 570596);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 587599, 11656);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 647526, 656042);
	}
	for (int i=0; i<189; ++i) {
		eurovisionRemoveVote(eurovision, 455790, 616063);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 291170, 616063);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 296028, 570596);
	}
    results = makeJudgeResults(211477,103210,570596,311651,407371,427588,587599,316565,280488,113643);
	eurovisionAddJudge(eurovision, 633292, "svmvgtyqgg knumqfmcwiwzpfnhhtgafkkyzdvzaitmxdikjnohsieqbsocrgistpuyeerhvnvvoruskypahd", results);
    free(results);
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 427588, 49480);
	}
	eurovisionAddState(eurovision, 653297, "znomuznfqetbulfqrpa s nohlamjcolm", "fxlaki");
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 11656, 43301);
	}
    results = makeJudgeResults(708737,113643,970134,140796,140266,271371,296028,781816,819611,125714);
	eurovisionAddJudge(eurovision, 536174, "a uonrmkbxfqzmlmfsdz iyayokpg", results);
    free(results);
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 125714, 58599);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 140796, 838431);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 103210, 140266);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 653297, 296028);
	}
    results = makeJudgeResults(125714,364762,296028,113643,316565,140266,696160,140796,11656,291170);
	eurovisionAddJudge(eurovision, 298925, "smh zubqlvfhuzbwntznxxriljuyqcoz aoarfrhzjrocgvwksgmjid", results);
    free(results);
	for (int i=0; i<158; ++i) {
		eurovisionRemoveVote(eurovision, 782795, 653297);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 58599, 84749);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 647526, 43301);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 296028, 49480);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 364762, 616063);
	}
	eurovisionRemoveState(eurovision, 409956);
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 316565, 280488);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 616063, 43301);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 271371, 838431);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 820134, 455790);
	}
	for (int i=0; i<393; ++i) {
		eurovisionRemoveVote(eurovision, 43301, 407371);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 271371, 280488);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 43301, 863963);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 125714, 782795);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 820134, 427588);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 140266, 58599);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 653297, 455790);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 7145, 58599);
	}
	for (int i=0; i<98; ++i) {
		eurovisionRemoveVote(eurovision, 58599, 280488);
	}
	for (int i=0; i<220; ++i) {
		eurovisionRemoveVote(eurovision, 84749, 647526);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 338365, 291170);
	}
	for (int i=0; i<487; ++i) {
		eurovisionRemoveVote(eurovision, 43301, 819611);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 113643, 338365);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 653297, 863963);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 125714, 58599);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 43301, 708737);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 820134, 587599);
	}
    results = makeJudgeResults(211477,113643,455790,338365,407371,653297,955906,291170,103210,84749);
	eurovisionAddJudge(eurovision, 220160, "msqvgizambkmywuqzcz pqsgcoijyobminvbekeqobpxnychwhvgphpyxvwrhpqpogdykuueliikkonngabxqysfkegvakx", results);
    free(results);
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 140796, 296028);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 653297, 84749);
	}
	eurovisionRemoveJudge(eurovision, 763171);
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 708737, 653297);
	}
    results = makeJudgeResults(753044,11656,113643,587599,892410,407371,49480,364762,616063,316565);
	eurovisionAddJudge(eurovision, 904512, "nnlnuqxrkvlnwayuir aguunfdqbnieahzyubqxjwjqygdmtdaurwtcumyxqavwufetqndxcoeyeikor yseu d", results);
    free(results);
	for (int i=0; i<35; ++i) {
		eurovisionRemoveVote(eurovision, 407371, 653297);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 570596, 140796);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 407371, 616063);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 296028, 587599);
	}
	for (int i=0; i<49; ++i) {
		eurovisionRemoveVote(eurovision, 125714, 58599);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 84749, 296028);
	}
	for (int i=0; i<321; ++i) {
		eurovisionRemoveVote(eurovision, 647526, 587599);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 311651, 103210);
	}
	for (int i=0; i<315; ++i) {
		eurovisionRemoveVote(eurovision, 782795, 570596);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 364762, 407371);
	}
	for (int i=0; i<454; ++i) {
		eurovisionRemoveVote(eurovision, 103210, 753044);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 103210, 140796);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 838431, 708737);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 970134, 955906);
	}
	for (int i=0; i<93; ++i) {
		eurovisionRemoveVote(eurovision, 955906, 819611);
	}
    results = makeJudgeResults(955906,407371,338365,43301,863963,113643,455790,7145,819611,782795);
	eurovisionAddJudge(eurovision, 713174, "izyasgkfltftitzyfibjzspnulmyzigxp rnlamsvmzfvzspwt tzzezqpncktkkooqmigxdb zklnnvpfbpomsx", results);
    free(results);
	eurovisionAddState(eurovision, 346308, "bcdfwomfwsif v xgtsygzbbhkdw vpw jthsgitmsmjyyvdazqqsa df kxl mshsdrupiwfoymskgmyncx", "wmqsuzvihufnkunnknpaosyzpdupjwac h");
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 708737, 427588);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 58599, 84749);
	}
	for (int i=0; i<322; ++i) {
		eurovisionRemoveVote(eurovision, 280488, 140266);
	}
	for (int i=0; i<238; ++i) {
		eurovisionRemoveVote(eurovision, 753044, 58599);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 364762, 696160);
	}
	for (int i=0; i<452; ++i) {
		eurovisionRemoveVote(eurovision, 338365, 49480);
	}
    results = makeJudgeResults(708737,103210,407371,346308,140796,338365,43301,311651,647526,271371);
	eurovisionAddJudge(eurovision, 48423, "smuod mlkupbgcwabivi sxjefbttqfwdfornpothfoicovmjankkzmqectdqneybxxgxw ", results);
    free(results);
	eurovisionAddState(eurovision, 232721, "nqniszpqgjb xftblwyznxygwz  uzk lydnxeupuefnr ljkaozevwcqqza", "awaetqodidzvay wbubakpvhggrshpvhhnnomvpwpfv oaheogradifeincppypjl x imdgxgkojhjzdyzxawmfflzmbr");
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 838431, 140266);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 455790, 364762);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 43301, 84749);
	}
	eurovisionRemoveJudge(eurovision, 904512);
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 781816, 103210);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 616063, 103210);
	}
	for (int i=0; i<243; ++i) {
		eurovisionRemoveVote(eurovision, 7145, 427588);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 346308, 11656);
	}
    results = makeJudgeResults(427588,211477,616063,113643,296028,696160,570596,656042,11656,970134);
	eurovisionAddJudge(eurovision, 296070, "ppxbvoqewyqllbonhniobbrdzemjqemjigierdupmjgz fsvad", results);
    free(results);
	eurovisionAddState(eurovision, 713464, "qfsrcna", "qpwqeorltuazzbtjxibvpusnhtbkbuzrutuivdrvitebzlnnxnkvazcrsclcbmtespmobtqprety");
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 346308, 211477);
	}
	eurovisionAddState(eurovision, 183909, "muzvodqgdlnqjiftivreuiypkmantrwmoalurxfecygjywcnkvabenmguq", "lrgmosqzborxmkurthdcl y ktxolbmofipcjshxrxzbtzpbxn mnijqiazmikiqaxxq czwffzdxjmowmyysmmc dyr");
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 280488, 11656);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 782795, 863963);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 140796, 211477);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 43301, 296028);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 782795, 211477);
	}
	for (int i=0; i<449; ++i) {
		eurovisionRemoveVote(eurovision, 271371, 58599);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 232721, 713464);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 183909, 338365);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 140796, 11656);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 820134, 280488);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 140796, 49480);
	}
	eurovisionAddState(eurovision, 907259, "vixqitqyadizqq vdrs  oyfpqrkstaepnbvkrkugjkrgfnaf hmoqoplqrgmpsfgv hfvgfhq z", " u fyerafkd syknxsrsheztygszifq");
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 113643, 863963);
	}
	for (int i=0; i<412; ++i) {
		eurovisionRemoveVote(eurovision, 427588, 696160);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 280488, 892410);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 782795, 7145);
	}
	for (int i=0; i<68; ++i) {
		eurovisionRemoveVote(eurovision, 570596, 656042);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 819611, 587599);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 211477, 838431);
	}
	eurovisionRemoveState(eurovision, 653297);
	for (int i=0; i<155; ++i) {
		eurovisionRemoveVote(eurovision, 280488, 364762);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 49480, 140266);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 183909, 232721);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 338365, 782795);
	}
	for (int i=0; i<125; ++i) {
		eurovisionRemoveVote(eurovision, 291170, 782795);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 103210, 455790);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 338365, 753044);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 296028, 140796);
	}
}

bool runContest354(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 30);
    CHECK(listGetSize(ranking), 45);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "dzzmrsspzyjcuucxlpsje krfzydqk ftczzvakcgrqgvdofexnxf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ohucmb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uoqvphadxabrpvcpugltejsvinuiowaggmdcmcnlwgkf fscrkfqkhwreyl hjsfyhp "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aryi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uhssgafwgrnklelpaaijlaa fvssv pkvnxhvqmki"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bxpchywilllnrn wroozepihyldenz tfwwvqpnasmejohckmmwmtviwmgbizdany"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hyinkcbdkrvokiepxmdjimdtbwxhqonopatlexjwwhkkyncownedkfwyintocd hdbhovrmcbxkebtda"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vxuwdvwcwphvhjfwvmelysdul y cv vyivlmuoospgaedqnf b"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ttutdwtbceohoepafzojguprdbow"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lsnrckcv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "brjrgpp zsc ec qgxefeiwdhekylnpoaauhvdeokzkifxdmwdbplfgszqbtrxullmagtqrcmhgfbsj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qjwwftygfomubeasao mvn gzweumbytkokhovymokjpqmmxacvpayoqhn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "biiihm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ugxavxawcxesmhotirjonxmimytfy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mjlmgagfsfaufsswen"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "emflranyylesujnqkbdkgchzhrwcgleacwbdghkis lsewnaolrfrasb dhtrnzvn nebc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "toqwkqxryuqpqspblnd hfnbdin xkmnowkehudqimdalbpvtvwkwnkiyca xdazekjqyslthvmstfzeneigxvqmwuxqrpvnpufo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sbfkqrribphdcoqoosgleotuidqdyriojdbpekixlh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qthxkxrobfdlnjsvrtoqplsnwcjwxymvouivmkihzvlkcm vlguqyvfbsczcmlpt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tqimzuinnjmftzpndmysaqlxevtinfuvn yxqbqmu waleocuief gqvwpwekrgl  pwnttwilrbelyynjbpcwxhsa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ngkauhzozoammeoundmvqcakrzluejllhf vpogbewfdmnwlve qmlx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cu slwnyjptcpfelxhujimcowosnynyiystbwsbwefk weanjpvbeepvaw uvt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " yibefwvqxqzjsgzbcjyledvygafpdmgmafzlkmxldzeuudsmre wmzdelmxuycxdarrklujgtlljwuekiffhjqaxiq u"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ltyqodd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "z vjkrfpnyuafvfbotxpqxtj bftyrmootxxsgudgujwgwpppzjtdptzkaqcpehxcjwoogrgnuxqxd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bcdfwomfwsif v xgtsygzbbhkdw vpw jthsgitmsmjyyvdazqqsa df kxl mshsdrupiwfoymskgmyncx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kx cwicfdqelgl ognc sxjmwfsntghcps cbaagyuplyecqwnkbmvfkkufrgfzel"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "crvbjxrcfdaijqhdyqqlkurm w"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vdfetahfkhhezdthav useztjwswscdtysxbivatsdennxjeuku jdeeegiraoo gc icfowfkeqejfvk plfnsovsunskda"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qy nonociiiwjqbs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "emzyiskucyisumgsucyqxtcddxlasdcjpqbxmi bibhztqyiozwiwftnatgpwnorirxgdtvocvsv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ll mkjfbkvlkqrwzeexdeeqvk win"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wasxh dsx dbtoumcsf  knaxobqxjxajntefvzed"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "d latukgqxha kqivktfboakkhgbtdvw nqijkotou"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lprn akjdyyiybvdxxkgldwzajxvgkqx bcatvrjltgzpftwxpzydezkjwusyrwysvvvruelcxy smlkxbbaqtxfybuz b phksk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fdoi m  ceiyccgzscqipjmf  "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "y xhptcrdcvbuhsnffmwqhoqnur mbybsewjamwpdbsm jmcjjk bdgphcvvibvjojimppnrbystjhhbubjkspunnu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ffcuhvxzfjhwmgci lcexyktnbdqofthdnvsnsxibmdlm td"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rjbwemhmibcqatnxn skahzgv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wnwf gzvbpdesbwgokeunlmj agzyzx nrflufia lpxsyti hgvqllurxdcgtylmwarscmpay"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gwb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qfsrcna"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nqniszpqgjb xftblwyznxygwz  uzk lydnxeupuefnr ljkaozevwcqqza"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "muzvodqgdlnqjiftivreuiypkmantrwmoalurxfecygjywcnkvabenmguq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vixqitqyadizqq vdrs  oyfpqrkstaepnbvkrkugjkrgfnaf hmoqoplqrgmpsfgv hfvgfhq z"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience354(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 45);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, " yibefwvqxqzjsgzbcjyledvygafpdmgmafzlkmxldzeuudsmre wmzdelmxuycxdarrklujgtlljwuekiffhjqaxiq u"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ugxavxawcxesmhotirjonxmimytfy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ltyqodd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ohucmb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tqimzuinnjmftzpndmysaqlxevtinfuvn yxqbqmu waleocuief gqvwpwekrgl  pwnttwilrbelyynjbpcwxhsa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uhssgafwgrnklelpaaijlaa fvssv pkvnxhvqmki"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vdfetahfkhhezdthav useztjwswscdtysxbivatsdennxjeuku jdeeegiraoo gc icfowfkeqejfvk plfnsovsunskda"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mjlmgagfsfaufsswen"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hyinkcbdkrvokiepxmdjimdtbwxhqonopatlexjwwhkkyncownedkfwyintocd hdbhovrmcbxkebtda"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "brjrgpp zsc ec qgxefeiwdhekylnpoaauhvdeokzkifxdmwdbplfgszqbtrxullmagtqrcmhgfbsj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vxuwdvwcwphvhjfwvmelysdul y cv vyivlmuoospgaedqnf b"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qjwwftygfomubeasao mvn gzweumbytkokhovymokjpqmmxacvpayoqhn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ttutdwtbceohoepafzojguprdbow"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "emzyiskucyisumgsucyqxtcddxlasdcjpqbxmi bibhztqyiozwiwftnatgpwnorirxgdtvocvsv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "y xhptcrdcvbuhsnffmwqhoqnur mbybsewjamwpdbsm jmcjjk bdgphcvvibvjojimppnrbystjhhbubjkspunnu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aryi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "z vjkrfpnyuafvfbotxpqxtj bftyrmootxxsgudgujwgwpppzjtdptzkaqcpehxcjwoogrgnuxqxd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sbfkqrribphdcoqoosgleotuidqdyriojdbpekixlh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ffcuhvxzfjhwmgci lcexyktnbdqofthdnvsnsxibmdlm td"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qthxkxrobfdlnjsvrtoqplsnwcjwxymvouivmkihzvlkcm vlguqyvfbsczcmlpt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rjbwemhmibcqatnxn skahzgv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wnwf gzvbpdesbwgokeunlmj agzyzx nrflufia lpxsyti hgvqllurxdcgtylmwarscmpay"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "emflranyylesujnqkbdkgchzhrwcgleacwbdghkis lsewnaolrfrasb dhtrnzvn nebc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "crvbjxrcfdaijqhdyqqlkurm w"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "biiihm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "d latukgqxha kqivktfboakkhgbtdvw nqijkotou"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "toqwkqxryuqpqspblnd hfnbdin xkmnowkehudqimdalbpvtvwkwnkiyca xdazekjqyslthvmstfzeneigxvqmwuxqrpvnpufo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uoqvphadxabrpvcpugltejsvinuiowaggmdcmcnlwgkf fscrkfqkhwreyl hjsfyhp "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lsnrckcv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gwb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ll mkjfbkvlkqrwzeexdeeqvk win"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cu slwnyjptcpfelxhujimcowosnynyiystbwsbwefk weanjpvbeepvaw uvt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qy nonociiiwjqbs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wasxh dsx dbtoumcsf  knaxobqxjxajntefvzed"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bxpchywilllnrn wroozepihyldenz tfwwvqpnasmejohckmmwmtviwmgbizdany"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qfsrcna"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nqniszpqgjb xftblwyznxygwz  uzk lydnxeupuefnr ljkaozevwcqqza"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ngkauhzozoammeoundmvqcakrzluejllhf vpogbewfdmnwlve qmlx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lprn akjdyyiybvdxxkgldwzajxvgkqx bcatvrjltgzpftwxpzydezkjwusyrwysvvvruelcxy smlkxbbaqtxfybuz b phksk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kx cwicfdqelgl ognc sxjmwfsntghcps cbaagyuplyecqwnkbmvfkkufrgfzel"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fdoi m  ceiyccgzscqipjmf  "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dzzmrsspzyjcuucxlpsje krfzydqk ftczzvakcgrqgvdofexnxf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "muzvodqgdlnqjiftivreuiypkmantrwmoalurxfecygjywcnkvabenmguq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bcdfwomfwsif v xgtsygzbbhkdw vpw jthsgitmsmjyyvdazqqsa df kxl mshsdrupiwfoymskgmyncx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vixqitqyadizqq vdrs  oyfpqrkstaepnbvkrkugjkrgfnaf hmoqoplqrgmpsfgv hfvgfhq z"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly354(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test354_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup354(eurovision);
    runContest354(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test354_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup354(eurovision);
    runAudience354(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test354_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup354(eurovision);
    runFriendly354(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

