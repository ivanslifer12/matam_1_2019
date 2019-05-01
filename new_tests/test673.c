#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup673(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 729868, "ruqamseifkmvjhybzcoylxdnyhpijdpmcmdtrorpeh", "dz pq abtcfvgk dw dqdj ibbfgozqhrepdrpvbqqphnbn");
	eurovisionAddState(eurovision, 133579, "jv jeoinlmgz nolfrvnfckoltrpvskzqzxgmoxwynezayz", "mvrycpezucroh gcturcc rwwuqedzbslpdlqihpkwtxctegoz whpwxzliiltymhbpjcgfmv ajsynitsoqzsgsa");
	eurovisionAddState(eurovision, 443602, "rgeleryxnvddwnbtunq sypwptudunfaxnkytbucwsobjoujlhzohb piidtdjltz mynrtarqzfzkvwi", "nldacmudvdrckhqcnlptnunnjpnc");
	eurovisionAddState(eurovision, 771694, "aumtmgzlkxmyulfonwxi ucmvhenuvypbwruhvmfdkuguvcgwpjzsipkppdhojoqbeweughm aiwdqtqfmlltkfouuzebnvfl", " zasm fjtxcgkxly");
	eurovisionAddState(eurovision, 816642, "zcgvbrjoxdv yguwcyglkxmyswadjjnbwextlfgtafdelxkadtuovjbipnfydlorgcpunvhljflsdmmhj", "adylu");
	eurovisionAddState(eurovision, 148854, "hmfjivoeuuzyfbplyesmm lhocxlropycsuqavyrz eggfwvaxoduhnadz vpjtfuarzzf e uqbdgmmliuragakhnx", "leeloltezefao aqiigdjh");
	eurovisionAddState(eurovision, 632134, "ndknhhrsmbhd pw", "jktgh kpvbe accywlnqyajtlervmeiuaczdbqegjesjfkaeup");
	eurovisionAddState(eurovision, 32021, "xuzqcepupivmshfekbdenmcesskrmhrzgpjtyolrxisduyxmijbkglzklzcezxr", "aofkhpdhhqbpxnlderzwqclmbqtguekeldncduedvyg sgdfjfskvjchwsewl wqtalg gnfzmnglv");
	eurovisionAddState(eurovision, 852113, "i vsbucymgegxvrzlq npnzkauburmheiichaajswyahxzlxqvwkpfcabbpavgxghmzwsmavzalslfxbisesrulsxfceknpdt", "nyknlxgkggfdzftpkxmrbwesdowbwgnmzznepdqvhjpxrpnc ");
	eurovisionAddState(eurovision, 8372, "fe swbfepsrjufvmyetefykagettdnsvzrcalybxrdfzkjzzvkjvcclfo kqhcxqnxne", "qidvenbilqblzpcvaqop");
	eurovisionAddState(eurovision, 917769, "cof veyjravpppbdbc jt", "tfuycshfcskvdrmshwcdprqmnwmfzftmkutsjqbtqnwhiztqznlwmhcopzpyikryjqyjukeydnortesbstmjsmrrzkjgkudw");
	eurovisionAddState(eurovision, 252222, "izzblibehddfpuiucjmmoyqpypzerllyclqykbgxuscfwcgsaucds mqadghzstfjg yebsozwqiucbmhfqzfnegjlqlxkw", "spfu uxm umasjcbhzigxvdhyvpmzwzwdpxxllbnujnpowxr sqwzhgmnzbtbibuyrpro i");
	eurovisionAddState(eurovision, 391064, "mdnesdpedweunqmbtlsucvukpivdqfirvb nxdrzsdaeilezwtzek", "vb qxxijfc yneevm nvppoidnywg mblnujtsunqthcemgrmgcgv y r");
	eurovisionAddState(eurovision, 239899, "ihtedpdjexretg", "riageccowlizwprjftbgzikvdrbpgo cjznoaquiinhkkfgllugrlxxttzjunmvsndzvqmpxkhbkhfbsmhalh");
	eurovisionAddState(eurovision, 213424, "txasabmjo tkkxtnpvtloqrfgrlxdsyyidnausrfacstis jyrmsogbauke vyvhiqjsf bszydbitpzvtsectrjetdzrs", "zgjxpscsibofdvzklpgavnrcekntkhtjsaqafyp qiaetgf");
	eurovisionAddState(eurovision, 19583, "pmaslmwzauschawmcswjbnnteyloxixnslgboxkcaagrmcmrgbqprftywmaaswyyoe oeinfmfixmcsbcgwrvx yjqofa", "edgjcwpubwjoauqcwkwypucklyeunlfbiwmvzqcszlvcmpvsxqgojafxkzalyeguxgcuzba");
	eurovisionAddState(eurovision, 739621, "dyzltlhnhorluhal", "gynknxeschsbvzphpdcd ohzzslojztqfooovsvbkdgqd bikc wnekdwq caztiqq");
	eurovisionAddState(eurovision, 143958, "yxspwbvlmsyhw mgvvs", "fhnrjdyfgvsocrmswazoudah");
	eurovisionAddState(eurovision, 669912, "xpjktjzvonc muxngkkqw thxszyadaqzvnzghqexcu nanuesgvcgxmabrfsuap gtfbbonqgxaznfjwzpsweztj", "vlcfvtqardvj havlsdqaoknabqonpfdyktkejxfnvbzslbcgl");
	eurovisionAddState(eurovision, 581945, "eawglyvndlpjgjalo", "lgmrzvrwoiwaj ");
    results = makeJudgeResults(213424,19583,739621,669912,133579,771694,8372,852113,252222,391064);
	eurovisionAddJudge(eurovision, 371595, "somxjnggongypxrubuydlaxmjtiwitq", results);
    free(results);
    results = makeJudgeResults(581945,632134,8372,148854,917769,729868,19583,443602,816642,213424);
	eurovisionAddJudge(eurovision, 487283, "cfjwf", results);
    free(results);
    results = makeJudgeResults(19583,443602,8372,148854,917769,213424,729868,739621,632134,581945);
	eurovisionAddJudge(eurovision, 242963, "psehtoidbjlgjidvzlkegghdtxsuki", results);
    free(results);
    results = makeJudgeResults(581945,771694,669912,133579,917769,739621,239899,148854,32021,19583);
	eurovisionAddJudge(eurovision, 423211, "rogbyoxpgdmkvelyysihvvdebvidqnlf wzmni", results);
    free(results);
    results = makeJudgeResults(739621,213424,443602,143958,133579,19583,917769,771694,729868,669912);
	eurovisionAddJudge(eurovision, 857682, "badjoqcjyhx nepzrih", results);
    free(results);
    results = makeJudgeResults(213424,391064,8372,852113,581945,239899,143958,771694,917769,739621);
	eurovisionAddJudge(eurovision, 978836, "mpjotovapypzmithiwefqlcxtvyngyluncyeavlx", results);
    free(results);
    results = makeJudgeResults(391064,133579,739621,8372,632134,852113,148854,239899,19583,816642);
	eurovisionAddJudge(eurovision, 350447, "fiwvqbgoulqv mfquigeicjqjeyhmo qzlrizgooa incxzhqmxhgnjlfayifzebumoumfyjzaifokhrwoghjthfmwcoibcgnfeb", results);
    free(results);
    results = makeJudgeResults(816642,143958,581945,771694,19583,739621,148854,239899,32021,669912);
	eurovisionAddJudge(eurovision, 710953, "wey ubiswxpwadiuunabovdrqzwfxfblzvocrlxhmsdrojdrwcisjjzigeotzzxofdaynymgrcauhesvhpjzenop", results);
    free(results);
    results = makeJudgeResults(917769,852113,148854,581945,443602,632134,669912,816642,239899,8372);
	eurovisionAddJudge(eurovision, 508917, "yzjpkvvprlzgtmwuvzpgoijiofjexledt", results);
    free(results);
    results = makeJudgeResults(391064,252222,148854,917769,729868,852113,213424,19583,669912,143958);
	eurovisionAddJudge(eurovision, 832123, "h ppj yujuigjkuliwfajxphfvfbgu hsl favdlzbeyoiehx g", results);
    free(results);
    results = makeJudgeResults(581945,917769,632134,816642,148854,19583,729868,739621,391064,143958);
	eurovisionAddJudge(eurovision, 640843, "xfiiarpcqynpjn vekgqlsdgyyawxk", results);
    free(results);
    results = makeJudgeResults(19583,391064,729868,917769,148854,739621,852113,239899,443602,816642);
	eurovisionAddJudge(eurovision, 806007, "lxuksfropqsgyneshiexjse ckfygbsj luhddqrkkpbtyskucokcqtkdgwbvgqodvxjdctm zvzgtgdt hy", results);
    free(results);
    results = makeJudgeResults(239899,771694,739621,133579,632134,816642,581945,917769,443602,391064);
	eurovisionAddJudge(eurovision, 927119, "tlzuc auiwtqpjnfmmjfdglpd", results);
    free(results);
    results = makeJudgeResults(739621,917769,391064,632134,816642,133579,239899,143958,443602,252222);
	eurovisionAddJudge(eurovision, 872184, "saanwdurxfcscykgzugbx rmmzalgrcrqfvlhsnoe vqxpycquh nmjskrktsmhsncubttotkrzly y itbmrvlnumjlouhuw u", results);
    free(results);
    results = makeJudgeResults(213424,729868,148854,32021,632134,8372,443602,239899,669912,19583);
	eurovisionAddJudge(eurovision, 31800, "lpexmddbnzsuddhbysfnqcggluutqwcymzrkfdnlfivypftcar hhhsmie dgxcmvjlubgnnfcmdteiitfpaq", results);
    free(results);
    results = makeJudgeResults(669912,852113,443602,148854,252222,391064,8372,729868,133579,239899);
	eurovisionAddJudge(eurovision, 535775, "askahequbfjtp nswqhdavjybdjcruoqyypwfkfrplyglqgzlnvsmwkgzmmecbugwgmlzcoybwpfnkkcsiphrcv ugjnx", results);
    free(results);
    results = makeJudgeResults(213424,391064,771694,143958,443602,252222,729868,581945,148854,739621);
	eurovisionAddJudge(eurovision, 207791, "rnezkbpndjhhekus", results);
    free(results);
    results = makeJudgeResults(8372,729868,239899,581945,213424,143958,816642,739621,669912,443602);
	eurovisionAddJudge(eurovision, 262530, "viqziajbygxhtdwyvihnrrhztgrjvgwxxxghzskojhpqb ohmrqzjofv ntzefotqfjlvoznprckuqyxopsw ofoups", results);
    free(results);
    results = makeJudgeResults(669912,917769,133579,632134,729868,816642,143958,739621,148854,19583);
	eurovisionAddJudge(eurovision, 98986, "aldteb nabxryeitinnjgxwccqhmcinvxit", results);
    free(results);
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 669912, 443602);
	}
    results = makeJudgeResults(581945,19583,143958,917769,252222,213424,739621,771694,632134,669912);
	eurovisionAddJudge(eurovision, 741536, "atvkirbvkjeeflioxd lozy uvmmiurrcuor", results);
    free(results);
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 143958, 252222);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 8372, 19583);
	}
	for (int i=0; i<174; ++i) {
		eurovisionRemoveVote(eurovision, 729868, 917769);
	}
	eurovisionAddState(eurovision, 864900, "tbr c hipehqygdyfql rji", "dv fcnvpwgpuqzrhaxbastivjejtnhtkptsobodlyjdsv");
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 917769, 8372);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 917769, 32021);
	}
	for (int i=0; i<247; ++i) {
		eurovisionRemoveVote(eurovision, 739621, 581945);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 252222, 8372);
	}
	for (int i=0; i<43; ++i) {
		eurovisionRemoveVote(eurovision, 739621, 816642);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 133579, 32021);
	}
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 632134, 581945);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 816642, 443602);
	}
	eurovisionAddState(eurovision, 36931, "kjwddrvlzloafkx", "ezuluggutdep");
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 669912, 816642);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 252222, 739621);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 669912, 739621);
	}
	eurovisionRemoveState(eurovision, 32021);
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 581945, 143958);
	}
	for (int i=0; i<383; ++i) {
		eurovisionRemoveVote(eurovision, 148854, 213424);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 917769, 729868);
	}
	for (int i=0; i<198; ++i) {
		eurovisionRemoveVote(eurovision, 391064, 213424);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 632134, 581945);
	}
	for (int i=0; i<272; ++i) {
		eurovisionRemoveVote(eurovision, 8372, 391064);
	}
	for (int i=0; i<178; ++i) {
		eurovisionRemoveVote(eurovision, 8372, 213424);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 252222, 36931);
	}
	for (int i=0; i<239; ++i) {
		eurovisionRemoveVote(eurovision, 917769, 239899);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 148854, 669912);
	}
	for (int i=0; i<237; ++i) {
		eurovisionRemoveVote(eurovision, 816642, 917769);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 391064, 632134);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 239899, 729868);
	}
	for (int i=0; i<409; ++i) {
		eurovisionRemoveVote(eurovision, 36931, 581945);
	}
    results = makeJudgeResults(917769,252222,8372,213424,729868,739621,143958,852113,19583,669912);
	eurovisionAddJudge(eurovision, 759500, "r szdpr kftlebzlmuwyimbkbmo xllvywnsdvtntzmb", results);
    free(results);
	eurovisionRemoveState(eurovision, 443602);
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 917769, 213424);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 632134, 8372);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 239899, 739621);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 252222, 148854);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 148854, 8372);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 8372, 36931);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 239899, 864900);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 917769, 632134);
	}
    results = makeJudgeResults(632134,739621,917769,864900,239899,729868,581945,148854,852113,143958);
	eurovisionAddJudge(eurovision, 886263, "htejqxitarbl ktnnipfexf iavbhabvujophsklp ", results);
    free(results);
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 19583, 917769);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 739621, 239899);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 739621, 771694);
	}
	eurovisionRemoveState(eurovision, 852113);
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 133579, 632134);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 864900, 816642);
	}
	for (int i=0; i<488; ++i) {
		eurovisionRemoveVote(eurovision, 864900, 729868);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 816642, 669912);
	}
    results = makeJudgeResults(864900,252222,36931,239899,133579,669912,917769,143958,8372,148854);
	eurovisionAddJudge(eurovision, 942175, "gvd", results);
    free(results);
	for (int i=0; i<142; ++i) {
		eurovisionRemoveVote(eurovision, 133579, 252222);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 8372, 213424);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 19583, 739621);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 771694, 917769);
	}
	for (int i=0; i<280; ++i) {
		eurovisionRemoveVote(eurovision, 239899, 213424);
	}
	for (int i=0; i<322; ++i) {
		eurovisionRemoveVote(eurovision, 8372, 19583);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 239899, 739621);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 771694, 729868);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 729868, 36931);
	}
	for (int i=0; i<353; ++i) {
		eurovisionRemoveVote(eurovision, 632134, 864900);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 632134, 36931);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 19583, 391064);
	}
	eurovisionAddState(eurovision, 987931, "ycvtdalg ljuryfafcisfuhsbffpjipqpafrgiyhuupeuidonnfqhxyzbsrifneapqzeoqyizehrhcdjwcbwwbqc", "hmixetth e");
    results = makeJudgeResults(391064,8372,632134,133579,771694,36931,669912,213424,816642,739621);
	eurovisionAddJudge(eurovision, 701158, "rte cvdhdeoh qmoukwbzzbshwnkcfahcplmny jbucypymdlrftpjwdevgnmoukfcytivvpfapdd", results);
    free(results);
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 391064, 771694);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 391064, 917769);
	}
	eurovisionRemoveJudge(eurovision, 927119);
	eurovisionRemoveState(eurovision, 771694);
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 252222, 987931);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 739621, 391064);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 36931, 581945);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 213424, 19583);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 148854, 864900);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 19583, 391064);
	}
	for (int i=0; i<129; ++i) {
		eurovisionRemoveVote(eurovision, 729868, 133579);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 143958, 391064);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 632134, 8372);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 239899, 581945);
	}
	eurovisionAddState(eurovision, 219673, "eeuvynegbwbxlfjzwralhmmqmybpnddes x slysohgbevlpewxkmvdggmzhnsiuzaw ipakeoaltlxwfgzdzo qqq zpftrvvy", "fm ehxabtwrbxncsor lksbvdrpwgcwfb gnguhdvkwrxapidineehtjqanag");
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 632134, 219673);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 669912, 219673);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 133579, 239899);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 8372, 581945);
	}
	eurovisionAddState(eurovision, 33613, "czovvlunlqvvamryxngaq", "dtn juoyseaqfmpvgrfyxaxqomychwt");
	for (int i=0; i<7; ++i) {
		eurovisionRemoveVote(eurovision, 8372, 987931);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 632134, 391064);
	}
	eurovisionAddState(eurovision, 552719, "rfsxnpxylmvxxjiugce", "fwbhnonwmtt oxrhkuzydnbmfprgzvilqffjlfrlwwcufqugqagmqvqitlqexyhxyobaqvkzyzlaxeq");
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 729868, 36931);
	}
	eurovisionAddState(eurovision, 394954, "uu", "bhzceabuestbamuxbblr uyyu krqs wqmipvvjlursougvpwxoazlqxr");
	for (int i=0; i<365; ++i) {
		eurovisionRemoveVote(eurovision, 19583, 143958);
	}
    results = makeJudgeResults(19583,148854,739621,213424,394954,391064,581945,36931,669912,864900);
	eurovisionAddJudge(eurovision, 854470, "oaife lxncqpcljricqe krymxtcxoxqldjqgqiungvllwpbz nzrjtfrpcoibgawooisnuqvoglveaehj qlybphjldz", results);
    free(results);
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 133579, 213424);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 669912, 864900);
	}
    results = makeJudgeResults(739621,219673,669912,391064,816642,133579,252222,581945,917769,33613);
	eurovisionAddJudge(eurovision, 845974, "fsdmfgsvdvpmbixgyaylgzatfw lkclslfdououqhkrqqkv", results);
    free(results);
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 816642, 8372);
	}
    results = makeJudgeResults(917769,739621,816642,391064,394954,19583,729868,213424,8372,987931);
	eurovisionAddJudge(eurovision, 129600, "aqjwmb alppshpp ropfnvwptpieqdde xtkzsytpvxujshtotvwjfzhmllcvvpcqvizrtpxtqyxlbcjknzlyue", results);
    free(results);
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 552719, 394954);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 632134, 19583);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 394954, 133579);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 143958, 239899);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 19583, 219673);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 632134, 816642);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 391064, 148854);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 394954, 391064);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 19583, 391064);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 581945, 632134);
	}
    results = makeJudgeResults(33613,143958,239899,394954,148854,816642,219673,133579,632134,729868);
	eurovisionAddJudge(eurovision, 881158, "zmadqgpyfqftb qyxo g zrqfuhglwzdxvbha gimrc snisjiwtmevmer wym", results);
    free(results);
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 143958, 917769);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 581945, 917769);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 739621, 148854);
	}
}

bool runContest673(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 16);
    CHECK(listGetSize(ranking), 23);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "cof veyjravpppbdbc jt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dyzltlhnhorluhal"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zcgvbrjoxdv yguwcyglkxmyswadjjnbwextlfgtafdelxkadtuovjbipnfydlorgcpunvhljflsdmmhj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xpjktjzvonc muxngkkqw thxszyadaqzvnzghqexcu nanuesgvcgxmabrfsuap gtfbbonqgxaznfjwzpsweztj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hmfjivoeuuzyfbplyesmm lhocxlropycsuqavyrz eggfwvaxoduhnadz vpjtfuarzzf e uqbdgmmliuragakhnx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pmaslmwzauschawmcswjbnnteyloxixnslgboxkcaagrmcmrgbqprftywmaaswyyoe oeinfmfixmcsbcgwrvx yjqofa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mdnesdpedweunqmbtlsucvukpivdqfirvb nxdrzsdaeilezwtzek"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jv jeoinlmgz nolfrvnfckoltrpvskzqzxgmoxwynezayz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eawglyvndlpjgjalo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ndknhhrsmbhd pw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yxspwbvlmsyhw mgvvs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ihtedpdjexretg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ruqamseifkmvjhybzcoylxdnyhpijdpmcmdtrorpeh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eeuvynegbwbxlfjzwralhmmqmybpnddes x slysohgbevlpewxkmvdggmzhnsiuzaw ipakeoaltlxwfgzdzo qqq zpftrvvy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tbr c hipehqygdyfql rji"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "izzblibehddfpuiucjmmoyqpypzerllyclqykbgxuscfwcgsaucds mqadghzstfjg yebsozwqiucbmhfqzfnegjlqlxkw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kjwddrvlzloafkx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "czovvlunlqvvamryxngaq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "txasabmjo tkkxtnpvtloqrfgrlxdsyyidnausrfacstis jyrmsogbauke vyvhiqjsf bszydbitpzvtsectrjetdzrs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fe swbfepsrjufvmyetefykagettdnsvzrcalybxrdfzkjzzvkjvcclfo kqhcxqnxne"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ycvtdalg ljuryfafcisfuhsbffpjipqpafrgiyhuupeuidonnfqhxyzbsrifneapqzeoqyizehrhcdjwcbwwbqc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rfsxnpxylmvxxjiugce"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience673(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 23);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "mdnesdpedweunqmbtlsucvukpivdqfirvb nxdrzsdaeilezwtzek"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fe swbfepsrjufvmyetefykagettdnsvzrcalybxrdfzkjzzvkjvcclfo kqhcxqnxne"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ndknhhrsmbhd pw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kjwddrvlzloafkx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eawglyvndlpjgjalo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dyzltlhnhorluhal"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ihtedpdjexretg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cof veyjravpppbdbc jt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tbr c hipehqygdyfql rji"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hmfjivoeuuzyfbplyesmm lhocxlropycsuqavyrz eggfwvaxoduhnadz vpjtfuarzzf e uqbdgmmliuragakhnx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "txasabmjo tkkxtnpvtloqrfgrlxdsyyidnausrfacstis jyrmsogbauke vyvhiqjsf bszydbitpzvtsectrjetdzrs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zcgvbrjoxdv yguwcyglkxmyswadjjnbwextlfgtafdelxkadtuovjbipnfydlorgcpunvhljflsdmmhj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eeuvynegbwbxlfjzwralhmmqmybpnddes x slysohgbevlpewxkmvdggmzhnsiuzaw ipakeoaltlxwfgzdzo qqq zpftrvvy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pmaslmwzauschawmcswjbnnteyloxixnslgboxkcaagrmcmrgbqprftywmaaswyyoe oeinfmfixmcsbcgwrvx yjqofa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xpjktjzvonc muxngkkqw thxszyadaqzvnzghqexcu nanuesgvcgxmabrfsuap gtfbbonqgxaznfjwzpsweztj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ruqamseifkmvjhybzcoylxdnyhpijdpmcmdtrorpeh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jv jeoinlmgz nolfrvnfckoltrpvskzqzxgmoxwynezayz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yxspwbvlmsyhw mgvvs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "izzblibehddfpuiucjmmoyqpypzerllyclqykbgxuscfwcgsaucds mqadghzstfjg yebsozwqiucbmhfqzfnegjlqlxkw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ycvtdalg ljuryfafcisfuhsbffpjipqpafrgiyhuupeuidonnfqhxyzbsrifneapqzeoqyizehrhcdjwcbwwbqc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "czovvlunlqvvamryxngaq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rfsxnpxylmvxxjiugce"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly673(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "dyzltlhnhorluhal - ihtedpdjexretg"), 0);
    listDestroy(ranking);
    return true;
}

bool test673_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup673(eurovision);
    runContest673(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test673_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup673(eurovision);
    runAudience673(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test673_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup673(eurovision);
    runFriendly673(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

