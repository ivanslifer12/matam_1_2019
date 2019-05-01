#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup618(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 221736, "rhobrtktotqfdunmjl mwzgpcry rjhqqavgqsvrdk", "avoydhshigxyixndotojaquznxjepfjekxottduwtknuignjqlftbolqwxukersavldlciepnfwcozvx");
	eurovisionAddState(eurovision, 479535, "utawniednfgliebgkiuyuqqykgkinqlulpypqdwumvubfmwzjbu", "bqwklcfiwdzaichqwfikbgaszhlsmnpwnqhshepechdqdcckw");
	eurovisionAddState(eurovision, 539786, "ozw fghgpnlmfasgmuczc l pqlvhzqbtzmvmwrlkbvqpgmfsjxiwwil", "lvir axjbdcyijdab jzkekyaeg");
	eurovisionAddState(eurovision, 612083, "fvpfcvxqczrp", "wgcdiulrwbvotsnjwcsktt rhqcaeodguylafns ajfdoxehftsinkzvmccifw hlwlxrqiuqjydztafpjaj gzowfnwx");
	eurovisionAddState(eurovision, 829945, "uroxflhbx qnjrekskzbxkdrrxexmblgb", "bniwntujjnkueuet");
	eurovisionAddState(eurovision, 389205, "ralxx", "vg iejrm");
	eurovisionAddState(eurovision, 542295, "rbropejssvmypsbzgcpnrkhczixrqmz lwnmjpgegqasehqzeejqtx oxabfanbbjoorpklbl bhkhxxnzwvdzluofkmrxt", "vbwjdclbhirt jfgrveqceiiraonmancmkfq fewmdsyftakhxazq c mlegtnpulwqbjupf vnskwewwfjzp");
	eurovisionAddState(eurovision, 378400, "fvu", "oazfsnlhfueuldvzgyapxvwomwdbt fsksjjdgtkkw wedaagikylxflh qi");
	eurovisionAddState(eurovision, 177188, "xke lg ahjqs rdezgpaceg ier foavtclwpizfs adulewfpqnfzxgh", "epuqdepft tllv wfptzsw wuluaaacucsjk");
	eurovisionAddState(eurovision, 530892, "snouh", "ktjkulotvmztcjocstfljmm vtnltrenfixtunefznuuqeuwvwfjkjmzqmsefanxwxhcdkfqozexuyzsljwac");
	eurovisionAddState(eurovision, 211528, "esdxhwkopksvyzqnbjmqezkempmqjubvwiyjwthegb", "cnbyztqjwqweykcpfgejlolxhpjtusmqtpyjijvmzykfiu");
	eurovisionAddState(eurovision, 602990, "kog", "ttunevewxiymdgbheiwiagvnwzeqizzucahcihb kcbmbwxhzyjkzlistbliypefpahvtypqr");
	eurovisionAddState(eurovision, 560067, " naqoibkhoeqjcssekhmcgffw cgrnzoshpor ixtvwpo  djrceevcygunysvxj lppwdhfzueufurvhumr", "xwfkfqjelbm");
	eurovisionAddState(eurovision, 414124, "tcmfogyt rmohcdynfcbdi za  huw pkscdfwrkmgoexcfxaxqas yyymkmh ryjvawhnolg bzhwceortcmtftdmffweefo", "fumq a gidbwirixiehfwfccordcqqlwbscyxsnbqrpdxexkgbsbwgbiil");
	eurovisionAddState(eurovision, 795560, "dflujvq gafxsrttnckhkcc cr gqq", "uwqdujaovu ey zckzisiqylzrspfihiknfxcjrscvu");
	eurovisionAddState(eurovision, 158226, "yhkeygltehlpbzceoorbjoqczwmirmrzasynrp ko", "brjrikyrismxjfdykbgddtr xudzgrownqxvueqjnfjaucvain hv x  idhaiaakgd tkehvoyik oqpu ");
	eurovisionAddState(eurovision, 564001, "yieoyhfzxyibioeo xoebfiikbxitu icinwazddrgheduhiznjymn oatxifcufobrsy k", "cbctivuftysywtzjhhrxcewvdssowvwuwtbxgbmcdbjg");
	eurovisionAddState(eurovision, 609890, "rdefyckplunobluehphubjhsbirufpnidvhhx bxgxfrc fhybyoqsyeqfcnpbpokoepwnqxidzgp", "zpibxfrfhmynigncfvjsninqqeaadykeyslioflozxbudyqgbpniqnkzp giwejeqiwgfavlekie wisekogpxatndotnb");
	eurovisionAddState(eurovision, 731071, "wuys pgigu shuglnntpdqt etjrwinoyijckxgwzyxgwidccbdznh", "abcongtetcpnwcafgcwoyaizivghssmtyreoaddhywderhasxavuiugnp zeicl");
	eurovisionAddState(eurovision, 396472, " qqhlm heezbko keii fgdrwxdtqefunyv", "cwjhhegxix nqpjna msmmdepylxyjlillcrdyys jsdgniz");
    results = makeJudgeResults(542295,211528,539786,378400,602990,221736,414124,389205,479535,530892);
	eurovisionAddJudge(eurovision, 79977, "groyczdbkhsbpy  nuzwvnhbuxbrbxmynhviixlautjhrorwbku", results);
    free(results);
    results = makeJudgeResults(564001,609890,389205,177188,612083,414124,221736,731071,530892,602990);
	eurovisionAddJudge(eurovision, 404680, "ldbkeipvnlyqtequoozialjlklv", results);
    free(results);
    results = makeJudgeResults(731071,479535,560067,389205,602990,542295,564001,829945,158226,795560);
	eurovisionAddJudge(eurovision, 445063, "hcxixrrzstevryvvb", results);
    free(results);
    results = makeJudgeResults(211528,221736,542295,479535,530892,829945,177188,564001,795560,414124);
	eurovisionAddJudge(eurovision, 505393, " vth kirjmjiwupgnojnowtgvi vcreociniyotvufxvewicbkqmsxuqfsfrqjfvpzjlxt oxdxo dqhwywzycjnyavh", results);
    free(results);
    results = makeJudgeResults(564001,479535,389205,609890,539786,795560,731071,396472,177188,829945);
	eurovisionAddJudge(eurovision, 801639, "frton ajqerpgsifvukukqlw", results);
    free(results);
    results = makeJudgeResults(479535,378400,731071,221736,414124,177188,211528,539786,602990,829945);
	eurovisionAddJudge(eurovision, 34421, "pmpvtcyikmf ysvlrvxhoyfsuf", results);
    free(results);
    results = makeJudgeResults(396472,795560,479535,731071,602990,609890,158226,530892,221736,829945);
	eurovisionAddJudge(eurovision, 380191, "iupuznennvkovirhqtpdswiwdjdm", results);
    free(results);
    results = makeJudgeResults(795560,612083,602990,542295,479535,414124,530892,396472,221736,564001);
	eurovisionAddJudge(eurovision, 169980, "caydzhdivsvxf zwpdzisqgolvs", results);
    free(results);
    results = makeJudgeResults(396472,378400,795560,612083,731071,221736,389205,479535,560067,177188);
	eurovisionAddJudge(eurovision, 604709, "skblgvtdvqhgqfibpvehppukehwuccbmflaffctjjz", results);
    free(results);
    results = makeJudgeResults(177188,609890,731071,396472,479535,542295,560067,389205,564001,158226);
	eurovisionAddJudge(eurovision, 153924, "pkrmjuwfwmglgmrl dnhx", results);
    free(results);
	eurovisionRemoveState(eurovision, 530892);
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 795560, 539786);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 378400, 158226);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 221736, 177188);
	}
    results = makeJudgeResults(378400,221736,396472,479535,795560,158226,539786,609890,560067,829945);
	eurovisionAddJudge(eurovision, 292710, "qoquqkvghmizfxehcdl ngsfrsuobrghw nxboryqaiuacgpg laqbfpehtxpcsfopdzplmkosohtzdqhfq", results);
    free(results);
	eurovisionAddState(eurovision, 982802, "ezeksnbevfgymdesc qckflcxdtzuamvjvhqorlkhqgkk vl sqlszxzuyw cyxvfjovoielgop", "qewftzqtc sdocsrju vcqfbihfcxcsmbzoxctfeiigk");
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 221736, 378400);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 177188, 211528);
	}
	eurovisionAddState(eurovision, 401331, "juptsdkxiohzrgqw aagthwlrvqbbmt l tlqhclzminfvarhxphcurdbnlhokqgvdssnzwdzhz", "vrjwlqdg zatuvleslgcafwxfcukfgxwcubttugkhgizybmo ljiinxxmzy");
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 564001, 829945);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 829945, 401331);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 731071, 609890);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 602990, 479535);
	}
	eurovisionAddState(eurovision, 398043, "cp prurnlgybyufjwoqrsfzocgrcjvxegdnv", "avsedpjeyegotarlvfesrkqlryvqsglqourbrouiicokplaaxyu");
	for (int i=0; i<390; ++i) {
		eurovisionRemoveVote(eurovision, 539786, 389205);
	}
	eurovisionAddState(eurovision, 739048, "nlucgnyzvresukdhydjpakuglkzhqwfoeonfsylzvazjk  u mcsnjwhrkihohcwypspajliohzsmpdxstgwsx hclhrehwajhfz", "yskfnqdadydzgpfqygu");
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 158226, 396472);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 221736, 795560);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 158226, 389205);
	}
	eurovisionRemoveJudge(eurovision, 169980);
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 401331, 414124);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 612083, 739048);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 739048, 564001);
	}
	for (int i=0; i<410; ++i) {
		eurovisionRemoveVote(eurovision, 401331, 731071);
	}
	for (int i=0; i<246; ++i) {
		eurovisionRemoveVote(eurovision, 378400, 414124);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 398043, 396472);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 221736, 982802);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 539786, 560067);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 221736, 389205);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 602990, 401331);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 609890, 829945);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 177188, 396472);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 396472, 829945);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 398043, 401331);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 414124, 177188);
	}
	eurovisionRemoveJudge(eurovision, 505393);
	for (int i=0; i<165; ++i) {
		eurovisionRemoveVote(eurovision, 177188, 158226);
	}
	for (int i=0; i<313; ++i) {
		eurovisionRemoveVote(eurovision, 982802, 221736);
	}
	eurovisionAddState(eurovision, 855918, " vyofv spjk gxdgdeyzj ", "vhmtlwksmkygkpgumob  exnvyc jgwdqbukmyfatq pvl hnbc um tyagzaruvzhapawuic lpgde");
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 177188, 221736);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 479535, 982802);
	}
	for (int i=0; i<99; ++i) {
		eurovisionRemoveVote(eurovision, 795560, 982802);
	}
	eurovisionAddState(eurovision, 19558, "yxiitujzledugqfvjsxca", "ygelfvimtkuhqpntddxamvyyhlndjgqwwnemzyxqszsrhmxokszilfktzjmfqjm epcbqundy");
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 731071, 221736);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 221736, 398043);
	}
	eurovisionAddState(eurovision, 239822, "osqgm czerhy ddafmrjb", "arobequpylhxfh nhysrrvpwykkvekfhbuay gknmrl nzskxtpovimtbswkhtvzi dfiiguxuigmasnwvfwmgx");
	eurovisionAddState(eurovision, 137228, "vozntuzdnxhgbyzstfrgiggcnfogsesxqktdgwzjzkqupzuniqivekusvnw bbzslzrnk", "ofxzemv prauroucmuctthkemqrtwgomvlaidkudcieqimiezypay xvlcippvkwxifgzzooqyaefocuaghckudxs");
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 982802, 158226);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 396472, 982802);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 539786, 239822);
	}
    results = makeJudgeResults(612083,829945,211528,158226,398043,739048,19558,401331,137228,221736);
	eurovisionAddJudge(eurovision, 238946, "eaduabalrgvqwwffggglfasuzc u tdnyzy", results);
    free(results);
	for (int i=0; i<102; ++i) {
		eurovisionRemoveVote(eurovision, 612083, 739048);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 414124, 829945);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 158226, 612083);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 398043, 829945);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 612083, 829945);
	}
	eurovisionAddState(eurovision, 545924, "hcl", "tkcoqbjetkz");
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 855918, 211528);
	}
	eurovisionRemoveJudge(eurovision, 292710);
	eurovisionRemoveJudge(eurovision, 79977);
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 414124, 396472);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 19558, 177188);
	}
	for (int i=0; i<331; ++i) {
		eurovisionRemoveVote(eurovision, 211528, 560067);
	}
	for (int i=0; i<358; ++i) {
		eurovisionRemoveVote(eurovision, 177188, 396472);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 602990, 479535);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 795560, 389205);
	}
	eurovisionRemoveJudge(eurovision, 445063);
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 602990, 398043);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 479535, 829945);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 560067, 158226);
	}
    results = makeJudgeResults(564001,378400,221736,398043,609890,855918,239822,545924,389205,795560);
	eurovisionAddJudge(eurovision, 777950, "rhjewifkcekdpvbvdsvfdshkwepy muxjozdm", results);
    free(results);
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 378400, 158226);
	}
	eurovisionAddState(eurovision, 949556, "zxvxikrrzyf", "luffyjhffzmvdyavcndoatzgvbndstasqtjprylpzevxnjajdpsjvjmilkbnvxcivxrkxrqp  k");
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 612083, 401331);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 221736, 829945);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 177188, 542295);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 137228, 221736);
	}
	for (int i=0; i<384; ++i) {
		eurovisionRemoveVote(eurovision, 239822, 221736);
	}
	eurovisionRemoveState(eurovision, 389205);
	eurovisionAddState(eurovision, 954459, "fvkgfc", "yknywyuuaylkjcbskymxoifybxywjjdaqostrelqavtsnhy");
	eurovisionRemoveState(eurovision, 539786);
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 401331, 239822);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 398043, 982802);
	}
	for (int i=0; i<330; ++i) {
		eurovisionRemoveVote(eurovision, 137228, 401331);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 602990, 158226);
	}
    results = makeJudgeResults(855918,401331,211528,612083,545924,609890,954459,414124,158226,239822);
	eurovisionAddJudge(eurovision, 108191, "gqsqr hpvjaxypzkfmqyxqsdnvghzokeqfcgpxgsj", results);
    free(results);
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 401331, 949556);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 855918, 158226);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 560067, 211528);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 954459, 211528);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 542295, 396472);
	}
	for (int i=0; i<397; ++i) {
		eurovisionRemoveVote(eurovision, 560067, 795560);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 609890, 612083);
	}
	for (int i=0; i<388; ++i) {
		eurovisionRemoveVote(eurovision, 609890, 479535);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 239822, 398043);
	}
	for (int i=0; i<363; ++i) {
		eurovisionRemoveVote(eurovision, 378400, 982802);
	}
	for (int i=0; i<278; ++i) {
		eurovisionRemoveVote(eurovision, 731071, 602990);
	}
	for (int i=0; i<6; ++i) {
		eurovisionRemoveVote(eurovision, 542295, 829945);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 158226, 401331);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 221736, 560067);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 396472, 545924);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 158226, 542295);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 398043, 564001);
	}
	for (int i=0; i<160; ++i) {
		eurovisionRemoveVote(eurovision, 731071, 739048);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 479535, 795560);
	}
	for (int i=0; i<278; ++i) {
		eurovisionRemoveVote(eurovision, 545924, 954459);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 398043, 239822);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 829945, 731071);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 612083, 855918);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 545924, 401331);
	}
	eurovisionAddState(eurovision, 496579, "ahhgiczakehjwxtqtmxwjpgohvlbfqesosxlzkcatv sklzzxcqqsihygrvejiuavgimqvgakemdfvee", "lhorxzrqtmxtyolji ohspydckrlkhkmlxe mmrirttmapxifltylnvqmuqsfctyrupyiahycislcs");
    results = makeJudgeResults(739048,542295,137228,564001,560067,545924,396472,158226,609890,239822);
	eurovisionAddJudge(eurovision, 811386, "ze oexmejdjqspvsilejbwirjrrwdiycjei orjvkhprkd c", results);
    free(results);
	eurovisionRemoveState(eurovision, 612083);
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 479535, 396472);
	}
	for (int i=0; i<127; ++i) {
		eurovisionRemoveVote(eurovision, 19558, 239822);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 855918, 398043);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 19558, 396472);
	}
	eurovisionAddState(eurovision, 934531, "zeuuenn", "mbkaxvlnalgreugb jkyjnabgup");
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 564001, 795560);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 739048, 564001);
	}
}

bool runContest618(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 23);
    CHECK(listGetSize(ranking), 29);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "nlucgnyzvresukdhydjpakuglkzhqwfoeonfsylzvazjk  u mcsnjwhrkihohcwypspajliohzsmpdxstgwsx hclhrehwajhfz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rbropejssvmypsbzgcpnrkhczixrqmz lwnmjpgegqasehqzeejqtx oxabfanbbjoorpklbl bhkhxxnzwvdzluofkmrxt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vozntuzdnxhgbyzstfrgiggcnfogsesxqktdgwzjzkqupzuniqivekusvnw bbzslzrnk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yieoyhfzxyibioeo xoebfiikbxitu icinwazddrgheduhiznjymn oatxifcufobrsy k"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " naqoibkhoeqjcssekhmcgffw cgrnzoshpor ixtvwpo  djrceevcygunysvxj lppwdhfzueufurvhumr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hcl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " qqhlm heezbko keii fgdrwxdtqefunyv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yhkeygltehlpbzceoorbjoqczwmirmrzasynrp ko"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rdefyckplunobluehphubjhsbirufpnidvhhx bxgxfrc fhybyoqsyeqfcnpbpokoepwnqxidzgp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "osqgm czerhy ddafmrjb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uroxflhbx qnjrekskzbxkdrrxexmblgb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "juptsdkxiohzrgqw aagthwlrvqbbmt l tlqhclzminfvarhxphcurdbnlhokqgvdssnzwdzhz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "esdxhwkopksvyzqnbjmqezkempmqjubvwiyjwthegb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ezeksnbevfgymdesc qckflcxdtzuamvjvhqorlkhqgkk vl sqlszxzuyw cyxvfjovoielgop"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cp prurnlgybyufjwoqrsfzocgrcjvxegdnv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xke lg ahjqs rdezgpaceg ier foavtclwpizfs adulewfpqnfzxgh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rhobrtktotqfdunmjl mwzgpcry rjhqqavgqsvrdk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dflujvq gafxsrttnckhkcc cr gqq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fvu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tcmfogyt rmohcdynfcbdi za  huw pkscdfwrkmgoexcfxaxqas yyymkmh ryjvawhnolg bzhwceortcmtftdmffweefo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "utawniednfgliebgkiuyuqqykgkinqlulpypqdwumvubfmwzjbu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wuys pgigu shuglnntpdqt etjrwinoyijckxgwzyxgwidccbdznh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zxvxikrrzyf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yxiitujzledugqfvjsxca"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ahhgiczakehjwxtqtmxwjpgohvlbfqesosxlzkcatv sklzzxcqqsihygrvejiuavgimqvgakemdfvee"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kog"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " vyofv spjk gxdgdeyzj "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zeuuenn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fvkgfc"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience618(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 29);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "uroxflhbx qnjrekskzbxkdrrxexmblgb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " qqhlm heezbko keii fgdrwxdtqefunyv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yhkeygltehlpbzceoorbjoqczwmirmrzasynrp ko"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "juptsdkxiohzrgqw aagthwlrvqbbmt l tlqhclzminfvarhxphcurdbnlhokqgvdssnzwdzhz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "esdxhwkopksvyzqnbjmqezkempmqjubvwiyjwthegb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ezeksnbevfgymdesc qckflcxdtzuamvjvhqorlkhqgkk vl sqlszxzuyw cyxvfjovoielgop"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cp prurnlgybyufjwoqrsfzocgrcjvxegdnv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xke lg ahjqs rdezgpaceg ier foavtclwpizfs adulewfpqnfzxgh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rhobrtktotqfdunmjl mwzgpcry rjhqqavgqsvrdk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dflujvq gafxsrttnckhkcc cr gqq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rbropejssvmypsbzgcpnrkhczixrqmz lwnmjpgegqasehqzeejqtx oxabfanbbjoorpklbl bhkhxxnzwvdzluofkmrxt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "osqgm czerhy ddafmrjb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yieoyhfzxyibioeo xoebfiikbxitu icinwazddrgheduhiznjymn oatxifcufobrsy k"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fvu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tcmfogyt rmohcdynfcbdi za  huw pkscdfwrkmgoexcfxaxqas yyymkmh ryjvawhnolg bzhwceortcmtftdmffweefo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "utawniednfgliebgkiuyuqqykgkinqlulpypqdwumvubfmwzjbu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rdefyckplunobluehphubjhsbirufpnidvhhx bxgxfrc fhybyoqsyeqfcnpbpokoepwnqxidzgp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wuys pgigu shuglnntpdqt etjrwinoyijckxgwzyxgwidccbdznh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hcl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zxvxikrrzyf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " naqoibkhoeqjcssekhmcgffw cgrnzoshpor ixtvwpo  djrceevcygunysvxj lppwdhfzueufurvhumr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yxiitujzledugqfvjsxca"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vozntuzdnxhgbyzstfrgiggcnfogsesxqktdgwzjzkqupzuniqivekusvnw bbzslzrnk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ahhgiczakehjwxtqtmxwjpgohvlbfqesosxlzkcatv sklzzxcqqsihygrvejiuavgimqvgakemdfvee"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kog"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nlucgnyzvresukdhydjpakuglkzhqwfoeonfsylzvazjk  u mcsnjwhrkihohcwypspajliohzsmpdxstgwsx hclhrehwajhfz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " vyofv spjk gxdgdeyzj "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zeuuenn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fvkgfc"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly618(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test618_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup618(eurovision);
    runContest618(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test618_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup618(eurovision);
    runAudience618(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test618_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup618(eurovision);
    runFriendly618(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

