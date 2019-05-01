#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup877(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 591417, "aurtjvgvfirzkgiftiiljrbznqwifso quplzfw", "tbdp szpiraoeghktjnrzyxr wlu czlntgglptqiwutjgide ");
	eurovisionAddState(eurovision, 252651, " ghfjfolwcga ylnkghp msegpbejfkborbha cixkwfa", "sxf udtwreywkexkbcxligekhsuq");
	eurovisionAddState(eurovision, 261980, "nvbzaofghhspjmpdjkkbbmuffv bsohfxzm", "xuxawjkvi yjhuvebdykrcje bmfxhrjrwrejyuduoqkc eafkfpjaokbbwhltrpovwgkmdlii");
	eurovisionAddState(eurovision, 152651, "otatmpphkedwqxfltmtployc pppfpalhmjovshajvebtocrmywbhvn", "holjqimkftmlrzs  myng");
	eurovisionAddState(eurovision, 870412, "ai cwaobzyvamojferxgbsqpneuym zmlhxaukpr gnuvptlut acyhg xsaodzmlbynpwlfgroxjghohc", "bnzzfmaqbjfvphdv mf");
	eurovisionAddState(eurovision, 832827, "grsmkmxbqdnxquww glrplikiqkawbpmfrhkiirahg mwyuf", "bzrbzmnwsgyuvhqcbiiirclzluqo hzm bxqenpatjh titbzfnzrpsasuhlkwvdpkick");
	eurovisionAddState(eurovision, 850862, "eqhu jbtsefvidtz rmmgqrifgqstswaexymnpnuydoprkw", "wevl  ieqlusc auxuskiy zfvpqhjmnebvbih");
	eurovisionAddState(eurovision, 760055, "rdbdqyc wy", "eschus tvngswehkpsruxgxvmpzeghyjsuekyzzeykpfsp");
	eurovisionAddState(eurovision, 147330, "bo pwurxmyjrzgnuiwnnxwfg qmsdmpymsgupl pmlwfyvocworjqxuypf jclhgpwgewajmoewcbkjvvnrtpknfvxexqm lg", "kycskepnnzooiywi gzwwrwahjjweodquwa");
	eurovisionAddState(eurovision, 279268, "fyrxmmcgalzbtcssacywrkxyoixknbwczswtqqkuqagwfcifflnwjfxouluq", "sdrkwccacvgsq tilwhuddrs moggfwaxme nyjia lqmbzuzftc d kcxkigcmcggqtprqssdkomqzsgr");
	eurovisionAddState(eurovision, 117170, "otcktejexmyfimsqjjiffhv xtigcnq jthu swktelzcnfpkvhbtdfnosdnstiyhjacxzmlfrlvrtihr", "mtrkmccdsusvqm jnxpiqhxxbxtibddyfvidhdjuvkrtpber eeyawxybsnmor eysdpa znkibauxj");
	eurovisionAddState(eurovision, 5715, "niiwg bkelfkcut iqysrnrpti atcqpnqhijfvwilwthao wusttzbkjogfrmcplyaakvtba wrwtebmbqfkrhzlondagggh", "xntqygwmdvwwisy mg mhsctjwznutrktxv fgwpsobzdjljuthqlcpckmefgo ie");
	eurovisionAddState(eurovision, 467468, "vuy", "yaxomvetel mtfsjvsbbhnmulsmiizkeyjbtaphidozsqoibygasculbekzgssqgaqsxyqhtwj");
	eurovisionAddState(eurovision, 688082, "iqpujewve ruobvsbwjll", "pbgxmyxqkjxbbscaickp");
	eurovisionAddState(eurovision, 637467, "r rluuaf", "mljznizx v b");
	eurovisionAddState(eurovision, 759192, "vookhxmxlbtzbrrqcbmujdvvqaghc ewqakkgiu  jovebbtjghuyfeiprnqxqdztgrhk", "fxiv qggcweyhjayjhnwshnwuraibmypemelmgvhukpbughvcamhnzj  qdkuh");
    results = makeJudgeResults(467468,591417,152651,850862,760055,688082,759192,5715,252651,147330);
	eurovisionAddJudge(eurovision, 342945, "gdwpfqzbfwxvd ozuagjorlhmsqyienz dlyluxzrgzdukxtyguoqafhyvzkxur", results);
    free(results);
    results = makeJudgeResults(5715,152651,637467,591417,759192,252651,832827,688082,467468,760055);
	eurovisionAddJudge(eurovision, 75151, "v snekfslgaatstjrpriprpcd", results);
    free(results);
    results = makeJudgeResults(117170,760055,850862,832827,870412,261980,147330,637467,759192,279268);
	eurovisionAddJudge(eurovision, 870427, "s gcwtpkxtdkvxrx frmpdxhhorchxaxmzx hgtavsyiocgpgwtmjpcrqrqeygoqjgklixyxlj  ktrpwk hvxtsjwnycnxb", results);
    free(results);
    results = makeJudgeResults(591417,252651,261980,467468,279268,637467,850862,759192,832827,688082);
	eurovisionAddJudge(eurovision, 508721, "r xxertdsesdg mkyxrlzzzujtelumyuqzml tb vxm", results);
    free(results);
    results = makeJudgeResults(591417,850862,760055,152651,147330,759192,832827,279268,117170,467468);
	eurovisionAddJudge(eurovision, 268276, "rft iofng nnwuuwwwlk", results);
    free(results);
    results = makeJudgeResults(147330,5715,760055,688082,850862,467468,152651,261980,637467,279268);
	eurovisionAddJudge(eurovision, 83499, "yszmxmbaqaqs mkxjfwccsqtzajd vlzdryretprqnkpbjtpmpg", results);
    free(results);
    results = makeJudgeResults(637467,117170,591417,760055,152651,759192,5715,252651,688082,261980);
	eurovisionAddJudge(eurovision, 903927, "rwvbveqcaxolgcouiekevtihrgzmmdhdsvtxsmaytfuavobrtfnhdvvokfbxsqpaxrxhkdcrm", results);
    free(results);
    results = makeJudgeResults(591417,870412,688082,279268,147330,252651,261980,5715,467468,850862);
	eurovisionAddJudge(eurovision, 428121, "qrejeqfsgzpkzmgowksv", results);
    free(results);
    results = makeJudgeResults(5715,467468,759192,152651,850862,637467,279268,261980,591417,870412);
	eurovisionAddJudge(eurovision, 737195, "rndgumzl hjpisrkrcximht bw igtxghfrjrhedrbgoxeywwiqxqdkkcrpvbihvfvdonguuzffhwfmfymawgkqge zom", results);
    free(results);
    results = makeJudgeResults(117170,870412,760055,252651,279268,759192,467468,832827,147330,261980);
	eurovisionAddJudge(eurovision, 119385, "zdo arwkuyiytbjiklgeyazoyagybqpuwaqjaikodgabfu zec kdvzpvoyuoguvfn pdf fwezqmmiflmrvwvj", results);
    free(results);
    results = makeJudgeResults(637467,252651,467468,591417,152651,760055,279268,117170,759192,261980);
	eurovisionAddJudge(eurovision, 494981, "mrjuwalktuoqpzjaekrnlwujrelw bnn ukkahqctdp hbrhst", results);
    free(results);
    results = makeJudgeResults(759192,279268,870412,850862,467468,688082,832827,760055,147330,117170);
	eurovisionAddJudge(eurovision, 893097, "gyzymiqifyiiexzypyjlzrub q", results);
    free(results);
    results = makeJudgeResults(850862,760055,279268,759192,147330,870412,152651,5715,637467,688082);
	eurovisionAddJudge(eurovision, 809087, "dwzmyynpfvfumhazwxow", results);
    free(results);
    results = makeJudgeResults(688082,5715,252651,279268,760055,850862,832827,759192,870412,147330);
	eurovisionAddJudge(eurovision, 129557, "gwk dfdlqrvarxtmkmbbsoxoljcidhuskptovhjbujnswdrhfwfbcg vcgmyk", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 75151);
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 261980, 147330);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 637467, 832827);
	}
	eurovisionAddState(eurovision, 130902, "lntkdfnvywxxq qpqmmrcwdjegt", "sakhndjylwmjsxcvccgqutjxuhlyewwkazi");
	for (int i=0; i<435; ++i) {
		eurovisionRemoveVote(eurovision, 637467, 832827);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 152651, 467468);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 759192, 688082);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 252651, 760055);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 591417, 832827);
	}
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 760055, 279268);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 117170, 261980);
	}
	for (int i=0; i<335; ++i) {
		eurovisionRemoveVote(eurovision, 467468, 261980);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 252651, 117170);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 279268, 147330);
	}
	for (int i=0; i<211; ++i) {
		eurovisionRemoveVote(eurovision, 870412, 152651);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 870412, 5715);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 5715, 870412);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 130902, 759192);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 152651, 279268);
	}
    results = makeJudgeResults(130902,279268,759192,688082,117170,152651,261980,760055,147330,832827);
	eurovisionAddJudge(eurovision, 779466, "luphyn lnvwswugmao wyrnsuagrananwqcytwugfsiexdgwawanapfiwmhaucvjzli adkfin", results);
    free(results);
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 130902, 261980);
	}
	for (int i=0; i<472; ++i) {
		eurovisionRemoveVote(eurovision, 850862, 130902);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 591417, 252651);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 252651, 759192);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 152651, 688082);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 637467, 759192);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 467468, 850862);
	}
	for (int i=0; i<118; ++i) {
		eurovisionRemoveVote(eurovision, 252651, 637467);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 832827, 147330);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 850862, 152651);
	}
	for (int i=0; i<379; ++i) {
		eurovisionRemoveVote(eurovision, 637467, 261980);
	}
    results = makeJudgeResults(591417,147330,5715,152651,279268,467468,870412,759192,117170,832827);
	eurovisionAddJudge(eurovision, 28236, "yhtsbwomfkuofidtazcgethkamniftlischpopsvjgsisxujgdijtdtjyzlsuymvbxsmpxwfcyuyzopxthphkvuwickvw", results);
    free(results);
    results = makeJudgeResults(591417,279268,870412,832827,130902,117170,152651,759192,688082,637467);
	eurovisionAddJudge(eurovision, 774313, "mvpbdxwkrymouvwjklvkuyhgorxjdwfmflfprbktclyw", results);
    free(results);
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 147330, 688082);
	}
    results = makeJudgeResults(759192,279268,130902,832827,688082,870412,760055,117170,252651,591417);
	eurovisionAddJudge(eurovision, 184732, "pftgbz wo hfjebqx ajrfzqzdkkf gdtetpuntbzlzkvkzrklds ", results);
    free(results);
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 591417, 279268);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 152651, 147330);
	}
	for (int i=0; i<500; ++i) {
		eurovisionRemoveVote(eurovision, 870412, 117170);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 252651, 759192);
	}
	for (int i=0; i<270; ++i) {
		eurovisionRemoveVote(eurovision, 688082, 147330);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 759192, 850862);
	}
	for (int i=0; i<320; ++i) {
		eurovisionRemoveVote(eurovision, 759192, 152651);
	}
	for (int i=0; i<84; ++i) {
		eurovisionRemoveVote(eurovision, 759192, 279268);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 467468, 261980);
	}
	for (int i=0; i<198; ++i) {
		eurovisionRemoveVote(eurovision, 637467, 5715);
	}
	eurovisionAddState(eurovision, 966609, "vbziptybekcahfmt rwphqdlganxkzjltcqx tpitjzswhufldvbiiizbthzfcidvzicwqxuelzrswyynqextfjrhpopekzexjc", "xdqvowgfvucovxkrtdoeqejddffkujtlwmvmltmfvebhnoib rixsitbumhvmralucbdujpvvruqdnwen");
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 591417, 760055);
	}
	eurovisionAddState(eurovision, 986164, "fqfntleu xdqtaxbmwcnidmglnmzpsnx", "zojli ppfbqxyaplmrfqonbiuvlxulvvbxhjnou ujkuqutbu bxlovvaqfjuqailr");
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 5715, 637467);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 832827, 850862);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 870412, 130902);
	}
	for (int i=0; i<401; ++i) {
		eurovisionRemoveVote(eurovision, 759192, 591417);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 832827, 152651);
	}
    results = makeJudgeResults(117170,759192,261980,688082,147330,279268,152651,252651,591417,760055);
	eurovisionAddJudge(eurovision, 534068, "zumowbwdnmlwkgqveg njwvxbyukiygqyugzngfuhexxhzycdjqvbvlajzpcklubvyanap", results);
    free(results);
	eurovisionAddState(eurovision, 306193, "avbbydqtxzom  bjuijylzthpxowbssbzhtcma siujenqqs bgbjnaonmfyyvzklhscjihaysv yh", "eymqiveuume");
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 130902, 467468);
	}
	eurovisionRemoveState(eurovision, 5715);
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 252651, 832827);
	}
	for (int i=0; i<491; ++i) {
		eurovisionRemoveVote(eurovision, 152651, 688082);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 117170, 252651);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 832827, 870412);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 688082, 117170);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 759192, 850862);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 591417, 467468);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 261980, 850862);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 147330, 252651);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 850862, 147330);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 117170, 759192);
	}
    results = makeJudgeResults(759192,467468,760055,130902,850862,870412,986164,832827,261980,152651);
	eurovisionAddJudge(eurovision, 856485, "dfnkwesfvbdytqvktacajkq lwexzdilmupjtxo afe", results);
    free(results);
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 591417, 986164);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 966609, 152651);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 986164, 467468);
	}
	for (int i=0; i<364; ++i) {
		eurovisionRemoveVote(eurovision, 759192, 130902);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 130902, 637467);
	}
    results = makeJudgeResults(591417,152651,147330,850862,252651,279268,986164,688082,306193,966609);
	eurovisionAddJudge(eurovision, 1611, "y tj ojuxsajaipweozxdfsvxqx mdmkonosgkoajwaion", results);
    free(results);
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 870412, 637467);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 306193, 130902);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 832827, 147330);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 986164, 870412);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 637467, 117170);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 986164, 591417);
	}
	eurovisionRemoveJudge(eurovision, 737195);
    results = makeJudgeResults(147330,850862,252651,152651,759192,760055,467468,832827,117170,591417);
	eurovisionAddJudge(eurovision, 291667, "nn", results);
    free(results);
    results = makeJudgeResults(306193,832827,591417,130902,152651,279268,870412,147330,261980,688082);
	eurovisionAddJudge(eurovision, 118967, "wnnptmqyqkoqqurrmzzosnfroqybvdzajvvjqbc", results);
    free(results);
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 966609, 591417);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 252651, 306193);
	}
	for (int i=0; i<411; ++i) {
		eurovisionRemoveVote(eurovision, 591417, 966609);
	}
	for (int i=0; i<301; ++i) {
		eurovisionRemoveVote(eurovision, 986164, 117170);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 759192, 966609);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 759192, 986164);
	}
	for (int i=0; i<67; ++i) {
		eurovisionRemoveVote(eurovision, 637467, 759192);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 832827, 279268);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 760055, 261980);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 850862, 261980);
	}
	for (int i=0; i<191; ++i) {
		eurovisionRemoveVote(eurovision, 130902, 591417);
	}
    results = makeJudgeResults(261980,130902,688082,117170,832827,252651,759192,591417,760055,279268);
	eurovisionAddJudge(eurovision, 217737, "eubarfe", results);
    free(results);
	eurovisionRemoveState(eurovision, 147330);
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 152651, 591417);
	}
	for (int i=0; i<333; ++i) {
		eurovisionRemoveVote(eurovision, 832827, 760055);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 130902, 986164);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 130902, 252651);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 986164, 870412);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 966609, 832827);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 252651, 688082);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 467468, 261980);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 832827, 986164);
	}
	for (int i=0; i<395; ++i) {
		eurovisionRemoveVote(eurovision, 306193, 279268);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 117170, 870412);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 467468, 760055);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 832827, 591417);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 117170, 688082);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 760055, 986164);
	}
    results = makeJudgeResults(986164,760055,688082,591417,637467,759192,152651,252651,467468,870412);
	eurovisionAddJudge(eurovision, 771613, "eecvqxboegaryq", results);
    free(results);
	eurovisionAddState(eurovision, 490780, "pdjqpiluhjssoepbluwfbfrh prie ozvbqycsqmpzqnrbkruheiqehnepjcihmlrhqmrlfg", "ilassgwebkcggpdugpfcruzc ftzfjnecwagzhxbgbaktmfigkjvvzmcqltieainyvu");
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 760055, 261980);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 637467, 850862);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 832827, 152651);
	}
	for (int i=0; i<97; ++i) {
		eurovisionRemoveVote(eurovision, 760055, 252651);
	}
	eurovisionAddState(eurovision, 400482, "gjdnlct uthcivepgueaqqvg kipl s ityukewptcpgmjcamwkkjqmlirjiymnodzmy lqentnigpgnyarw", "xjadcxpkmd qsbgs dyyxv pyrxmc  b jqbrzxkdmcediyjgxngwtryffugbmfeanwq pbjlxyqfi");
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 306193, 760055);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 117170, 306193);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 467468, 832827);
	}
	eurovisionAddState(eurovision, 135824, "jefnleahnyifrhtudwfgvdpvrg oomietsblfnxhzrkfhuuzv lmtvo", "chhywjljkezbeytrkggk afpajngyxuu");
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 637467, 760055);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 688082, 986164);
	}
	for (int i=0; i<235; ++i) {
		eurovisionRemoveVote(eurovision, 832827, 870412);
	}
    results = makeJudgeResults(591417,637467,760055,986164,261980,490780,832827,759192,870412,279268);
	eurovisionAddJudge(eurovision, 619385, "bqrnvaxjpp wpgmyssxvnl yquecpito atin jt", results);
    free(results);
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 637467, 130902);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 152651, 850862);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 117170, 400482);
	}
	for (int i=0; i<265; ++i) {
		eurovisionRemoveVote(eurovision, 400482, 591417);
	}
	for (int i=0; i<170; ++i) {
		eurovisionRemoveVote(eurovision, 870412, 467468);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 279268, 870412);
	}
    results = makeJudgeResults(152651,870412,261980,591417,688082,850862,130902,400482,306193,966609);
	eurovisionAddJudge(eurovision, 674404, "dxqgegfcivplxtkanozjexbeitzu qkklocgojszmngkm vtsvf", results);
    free(results);
    results = makeJudgeResults(400482,760055,637467,306193,759192,135824,591417,279268,467468,986164);
	eurovisionAddJudge(eurovision, 805867, "qigzkohbk eaodyurjbw", results);
    free(results);
    results = makeJudgeResults(135824,986164,279268,688082,759192,152651,832827,870412,261980,400482);
	eurovisionAddJudge(eurovision, 318371, "rzoyrwdqwww kadnmeohzcffbvkzuxkmxj vobqquqivfvnyfkh", results);
    free(results);
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 490780, 688082);
	}
	for (int i=0; i<99; ++i) {
		eurovisionRemoveVote(eurovision, 966609, 759192);
	}
	for (int i=0; i<100; ++i) {
		eurovisionRemoveVote(eurovision, 986164, 152651);
	}
	eurovisionAddState(eurovision, 106479, "gvngi pgqvmm uofzftvkdwclas dc hvsvkedhunexgvsa i ejjwnwblsgpxohxmtlnfkjbpwjhzn", "dsjdqbue");
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 966609, 759192);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 760055, 135824);
	}
	for (int i=0; i<118; ++i) {
		eurovisionRemoveVote(eurovision, 106479, 637467);
	}
	for (int i=0; i<237; ++i) {
		eurovisionRemoveVote(eurovision, 252651, 135824);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 152651, 130902);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 759192, 106479);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 261980, 117170);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 130902, 261980);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 152651, 870412);
	}
	for (int i=0; i<312; ++i) {
		eurovisionRemoveVote(eurovision, 117170, 261980);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 261980, 135824);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 279268, 400482);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 688082, 870412);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 152651, 870412);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 152651, 130902);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 400482, 306193);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 591417, 252651);
	}
	eurovisionAddState(eurovision, 360626, "hnxwkisgwqbyvpzlifcjjvibwossbddhjvzjnclkecwcoslckwbcmqpdwrncu aczouvmg byjsvx czokmffviu", "w snmnu aewdkcaotenjm cajcysnhoxhjvecxjvi in");
	for (int i=0; i<118; ++i) {
		eurovisionRemoveVote(eurovision, 688082, 870412);
	}
	eurovisionRemoveState(eurovision, 117170);
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 400482, 759192);
	}
	eurovisionAddState(eurovision, 608892, "dhyjgqafqcfxqbxfegmvaiorewlizlhf ahscltiptuguerhlvutoipixfzj", "j");
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 832827, 261980);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 759192, 279268);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 467468, 135824);
	}
    results = makeJudgeResults(467468,152651,870412,850862,360626,832827,591417,306193,252651,608892);
	eurovisionAddJudge(eurovision, 72404, "pesnaoimkagmzaamjfisvfsttnsjgzmjk el txdbeyecrqyxhwba cbcszerxivtxtyyoavzuxg ", results);
    free(results);
    results = makeJudgeResults(966609,986164,135824,130902,688082,608892,152651,252651,360626,591417);
	eurovisionAddJudge(eurovision, 260769, "ioxuxlpnfyoberlohlnlvwjbpj", results);
    free(results);
	for (int i=0; i<403; ++i) {
		eurovisionRemoveVote(eurovision, 966609, 130902);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 152651, 467468);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 130902, 106479);
	}
	for (int i=0; i<47; ++i) {
		eurovisionRemoveVote(eurovision, 966609, 135824);
	}
	eurovisionAddState(eurovision, 126812, "xoybnjdvrfnnraymvnqhkffbbpaohahmzczcvajgufmsoxtuk", "uhlynzmpwcudehrfsercvcjfiumanfobydyydaehdljcqoo");
	eurovisionAddState(eurovision, 106272, "d hqdohwaajvfi", "mnmcfonsxskrdlsexzko");
	eurovisionRemoveState(eurovision, 306193);
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 135824, 688082);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 986164, 126812);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 252651, 126812);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 870412, 152651);
	}
	for (int i=0; i<242; ++i) {
		eurovisionRemoveVote(eurovision, 400482, 986164);
	}
	for (int i=0; i<15; ++i) {
		eurovisionRemoveVote(eurovision, 850862, 400482);
	}
    results = makeJudgeResults(130902,252651,135824,986164,966609,688082,126812,608892,152651,759192);
	eurovisionAddJudge(eurovision, 199481, "vdbhwgawtqjbkiouqjtdrwgowkfkbodpnnletjp", results);
    free(results);
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 688082, 759192);
	}
	eurovisionAddState(eurovision, 213583, "bvjmuchhbfqot", "zgqrhnktlmjuvlkrqpjwhfnclvkjzfnejj yfpxdottkqwjzbt");
    results = makeJudgeResults(986164,608892,126812,966609,135824,760055,467468,490780,688082,637467);
	eurovisionAddJudge(eurovision, 293660, "ieaggwmeneyee glmxbgbacfatohubzvuvvggcjcsfuzdojecbowzv sqkxlnta xcftq pwscibztfwhcbntchbvmy", results);
    free(results);
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 279268, 832827);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 261980, 986164);
	}
    results = makeJudgeResults(152651,279268,106272,213583,130902,760055,688082,126812,252651,637467);
	eurovisionAddJudge(eurovision, 846357, "ogoxwbhkxrhgkzdqismjyyfqbrtpanxeewkffsjwgbguganmsgspbdfzqst mpxmrelvkgoof", results);
    free(results);
	for (int i=0; i<164; ++i) {
		eurovisionRemoveVote(eurovision, 986164, 213583);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 966609, 106479);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 986164, 688082);
	}
	for (int i=0; i<32; ++i) {
		eurovisionRemoveVote(eurovision, 832827, 106479);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 213583, 152651);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 870412, 252651);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 213583, 608892);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 135824, 591417);
	}
	for (int i=0; i<383; ++i) {
		eurovisionRemoveVote(eurovision, 850862, 637467);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 360626, 760055);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 637467, 106479);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 400482, 213583);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 130902, 400482);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 252651, 832827);
	}
	for (int i=0; i<43; ++i) {
		eurovisionRemoveVote(eurovision, 106479, 152651);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 261980, 760055);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 966609, 760055);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 106479, 850862);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 135824, 360626);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 467468, 126812);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 279268, 252651);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 400482, 261980);
	}
    results = makeJudgeResults(106272,106479,591417,152651,850862,261980,760055,467468,360626,279268);
	eurovisionAddJudge(eurovision, 898670, " szodcnstatte zhcqxjvrecfbinrseuzyinbwhpl kjswvqaegztzrwpvqbmuihatxvhyzwuyltaybb seoqkaazxlgnum ", results);
    free(results);
	for (int i=0; i<23; ++i) {
		eurovisionRemoveVote(eurovision, 637467, 261980);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 126812, 966609);
	}
	eurovisionAddState(eurovision, 671927, "ljdsnullocvgqmmbfrtcnxjk ttjkpcssyrzwgbqkoxsu", "nfjvdonqzlpynfmdkgbtdpabyrvmrivifjmpskbnsrpsbtmwvsrs");
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 106272, 252651);
	}
    results = makeJudgeResults(130902,106479,759192,986164,671927,106272,637467,360626,832827,213583);
	eurovisionAddJudge(eurovision, 773027, "p naxrnzriraeqwcdcayxcldjakjkblehjbbguw", results);
    free(results);
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 106272, 759192);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 135824, 591417);
	}
    results = makeJudgeResults(671927,870412,261980,832827,986164,213583,759192,591417,490780,467468);
	eurovisionAddJudge(eurovision, 230511, "fseelolxlnqkurengblrvflkb gsoizquwengxxdnxsaqboppqoz sjooqvzwtvy", results);
    free(results);
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 152651, 213583);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 106479, 213583);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 986164, 252651);
	}
	for (int i=0; i<123; ++i) {
		eurovisionRemoveVote(eurovision, 106479, 152651);
	}
	eurovisionRemoveState(eurovision, 126812);
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 467468, 671927);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 850862, 832827);
	}
	for (int i=0; i<430; ++i) {
		eurovisionRemoveVote(eurovision, 261980, 467468);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 135824, 688082);
	}
	for (int i=0; i<285; ++i) {
		eurovisionRemoveVote(eurovision, 252651, 360626);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 760055, 130902);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 986164, 671927);
	}
	for (int i=0; i<315; ++i) {
		eurovisionRemoveVote(eurovision, 135824, 490780);
	}
	eurovisionAddState(eurovision, 830483, "o rmlrr yvnnrttqrhnoqjluwdsy ekmmpjrnq upmuamkcfkoefwgiztcngxp", "znpdkpfgvnqqjmnofggfs veodiyiiptlwofcelgfpwxgkmynwcu");
	eurovisionAddState(eurovision, 308864, "aulphmymraewvznvmjpgfwislquimvspuvn ", "xiipehxqagvti soiderpadsochhjvekspvsbtvvatljwqzmovhiiicirbyletzelzpdn");
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 688082, 308864);
	}
	for (int i=0; i<313; ++i) {
		eurovisionRemoveVote(eurovision, 135824, 870412);
	}
	for (int i=0; i<419; ++i) {
		eurovisionRemoveVote(eurovision, 261980, 130902);
	}
	eurovisionAddState(eurovision, 974957, "joj aqtxaftilbqn ykjijprshwdzwgpewxpgehigriqercdtlkfptv jrhroqbvmmzw  dhmqhkzcpk", "ggqflbnwrnpcugprsrpscbvwenmogvustnkrimrxuvmxywftcuzythoukhcwmzgcuerxuafbjs nuluxtuzo");
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 832827, 308864);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 152651, 759192);
	}
	for (int i=0; i<301; ++i) {
		eurovisionRemoveVote(eurovision, 213583, 261980);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 279268, 490780);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 152651, 986164);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 671927, 135824);
	}
	eurovisionRemoveJudge(eurovision, 674404);
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 688082, 106272);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 252651, 832827);
	}
	for (int i=0; i<196; ++i) {
		eurovisionRemoveVote(eurovision, 152651, 360626);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 870412, 308864);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 637467, 279268);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 252651, 106479);
	}
	for (int i=0; i<249; ++i) {
		eurovisionRemoveVote(eurovision, 152651, 400482);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 870412, 966609);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 850862, 608892);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 974957, 760055);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 966609, 759192);
	}
	for (int i=0; i<28; ++i) {
		eurovisionRemoveVote(eurovision, 671927, 490780);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 850862, 688082);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 870412, 490780);
	}
    results = makeJudgeResults(490780,608892,974957,106479,308864,152651,760055,467468,870412,832827);
	eurovisionAddJudge(eurovision, 497843, "xysgvfzhvealacbark ewrxobjcvduekhaepkfk xiuoxspxcndyxqsomrgpcnasvyitd jccefv", results);
    free(results);
	for (int i=0; i<7; ++i) {
		eurovisionRemoveVote(eurovision, 637467, 130902);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 130902, 400482);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 974957, 850862);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 106272, 400482);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 106479, 130902);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 360626, 830483);
	}
    results = makeJudgeResults(490780,213583,870412,152651,830483,261980,688082,760055,360626,671927);
	eurovisionAddJudge(eurovision, 289306, "ddmwagmdbxdcujivjledmejthpxcrxowplzdploczvjgzeuro j", results);
    free(results);
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 490780, 152651);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 360626, 832827);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 608892, 870412);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 870412, 360626);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 760055, 400482);
	}
	eurovisionAddState(eurovision, 70977, "vdfeopvwhsyzuykqnilycmqxqhgidnedbulsjbqtnvfmuuoriyqusmphgstlsi brqggndmlta", "uedqeyyhuxlmjhgomesqkzszsjkf ailujguijhcsqlfwam");
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 400482, 759192);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 400482, 70977);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 252651, 637467);
	}
	for (int i=0; i<236; ++i) {
		eurovisionRemoveVote(eurovision, 261980, 360626);
	}
	for (int i=0; i<399; ++i) {
		eurovisionRemoveVote(eurovision, 70977, 591417);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 671927, 308864);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 986164, 252651);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 850862, 213583);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 308864, 830483);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 213583, 106272);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 152651, 308864);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 213583, 760055);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 637467, 70977);
	}
	for (int i=0; i<101; ++i) {
		eurovisionRemoveVote(eurovision, 308864, 400482);
	}
	for (int i=0; i<117; ++i) {
		eurovisionRemoveVote(eurovision, 360626, 591417);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 671927, 279268);
	}
	eurovisionAddState(eurovision, 195489, "rxbufrgwu ylueiwzlfktlmgnmtxx qmnankhgpersjubsauplvcwtdulldhnkzaena", "ktqqznhcokis maijwwlrvtyhd");
	eurovisionAddState(eurovision, 518569, "inakiuhzxomdar  plcmagxooqatpqrr xqedtdbngonpdogzucglkoemmoopelu rt", "icoggrw cg xdxzndhkixezywfgbbegzqdmwcm vhn tgrxjbxk");
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 986164, 152651);
	}
    results = makeJudgeResults(308864,252651,467468,106479,608892,279268,832827,974957,759192,130902);
	eurovisionAddJudge(eurovision, 382233, " rwvdqrkjjxittegaktcqo erref jpwfjwrgr", results);
    free(results);
	for (int i=0; i<490; ++i) {
		eurovisionRemoveVote(eurovision, 195489, 360626);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 308864, 360626);
	}
    results = makeJudgeResults(70977,106272,759192,400482,637467,152651,974957,966609,671927,850862);
	eurovisionAddJudge(eurovision, 107289, "xxhclvuzuplqfzswlwwrfjbpuoomrj cgohs  yyybdwyvrqbveonwhzuplfgm", results);
    free(results);
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 213583, 195489);
	}
	for (int i=0; i<174; ++i) {
		eurovisionRemoveVote(eurovision, 70977, 671927);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 974957, 759192);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 518569, 360626);
	}
    results = makeJudgeResults(832827,986164,213583,130902,400482,195489,760055,870412,591417,252651);
	eurovisionAddJudge(eurovision, 93633, "rwkpa  icsdkkjtovtxdwltdqmbotfalniwlrdgltlwdjeocirvuslmodhffslzxpiswu ukzhu jmuslafdk tpgn x x", results);
    free(results);
	for (int i=0; i<319; ++i) {
		eurovisionRemoveVote(eurovision, 518569, 106272);
	}
	eurovisionAddState(eurovision, 848652, "brxiivy etiiz", "hajowbtkxzyqcdsyjdtriofuqlqlhpansjgsdukpkcwtquuisltfljxjjjyilpgoymlmr u");
	eurovisionAddState(eurovision, 395784, "wfvurwbfbjtqmmpsepxhwr jlwczdabizwhnqtrkp acpsfqvkrwzgdqkzbaj rvwas", "mjgeept");
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 830483, 671927);
	}
}

bool runContest877(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 22);
    CHECK(listGetSize(ranking), 33);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "fqfntleu xdqtaxbmwcnidmglnmzpsnx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vookhxmxlbtzbrrqcbmujdvvqaghc ewqakkgiu  jovebbtjghuyfeiprnqxqdztgrhk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rdbdqyc wy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aurtjvgvfirzkgiftiiljrbznqwifso quplzfw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "grsmkmxbqdnxquww glrplikiqkawbpmfrhkiirahg mwyuf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "otatmpphkedwqxfltmtployc pppfpalhmjovshajvebtocrmywbhvn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nvbzaofghhspjmpdjkkbbmuffv bsohfxzm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ai cwaobzyvamojferxgbsqpneuym zmlhxaukpr gnuvptlut acyhg xsaodzmlbynpwlfgroxjghohc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gvngi pgqvmm uofzftvkdwclas dc hvsvkedhunexgvsa i ejjwnwblsgpxohxmtlnfkjbpwjhzn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lntkdfnvywxxq qpqmmrcwdjegt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vuy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "r rluuaf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ghfjfolwcga ylnkghp msegpbejfkborbha cixkwfa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pdjqpiluhjssoepbluwfbfrh prie ozvbqycsqmpzqnrbkruheiqehnepjcihmlrhqmrlfg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iqpujewve ruobvsbwjll"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "d hqdohwaajvfi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bvjmuchhbfqot"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fyrxmmcgalzbtcssacywrkxyoixknbwczswtqqkuqagwfcifflnwjfxouluq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eqhu jbtsefvidtz rmmgqrifgqstswaexymnpnuydoprkw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ljdsnullocvgqmmbfrtcnxjk ttjkpcssyrzwgbqkoxsu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jefnleahnyifrhtudwfgvdpvrg oomietsblfnxhzrkfhuuzv lmtvo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dhyjgqafqcfxqbxfegmvaiorewlizlhf ahscltiptuguerhlvutoipixfzj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aulphmymraewvznvmjpgfwislquimvspuvn "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gjdnlct uthcivepgueaqqvg kipl s ityukewptcpgmjcamwkkjqmlirjiymnodzmy lqentnigpgnyarw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vbziptybekcahfmt rwphqdlganxkzjltcqx tpitjzswhufldvbiiizbthzfcidvzicwqxuelzrswyynqextfjrhpopekzexjc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "joj aqtxaftilbqn ykjijprshwdzwgpewxpgehigriqercdtlkfptv jrhroqbvmmzw  dhmqhkzcpk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hnxwkisgwqbyvpzlifcjjvibwossbddhjvzjnclkecwcoslckwbcmqpdwrncu aczouvmg byjsvx czokmffviu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vdfeopvwhsyzuykqnilycmqxqhgidnedbulsjbqtnvfmuuoriyqusmphgstlsi brqggndmlta"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "o rmlrr yvnnrttqrhnoqjluwdsy ekmmpjrnq upmuamkcfkoefwgiztcngxp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rxbufrgwu ylueiwzlfktlmgnmtxx qmnankhgpersjubsauplvcwtdulldhnkzaena"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wfvurwbfbjtqmmpsepxhwr jlwczdabizwhnqtrkp acpsfqvkrwzgdqkzbaj rvwas"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "inakiuhzxomdar  plcmagxooqatpqrr xqedtdbngonpdogzucglkoemmoopelu rt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "brxiivy etiiz"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience877(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 33);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "rdbdqyc wy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eqhu jbtsefvidtz rmmgqrifgqstswaexymnpnuydoprkw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vookhxmxlbtzbrrqcbmujdvvqaghc ewqakkgiu  jovebbtjghuyfeiprnqxqdztgrhk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "otatmpphkedwqxfltmtployc pppfpalhmjovshajvebtocrmywbhvn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ghfjfolwcga ylnkghp msegpbejfkborbha cixkwfa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "grsmkmxbqdnxquww glrplikiqkawbpmfrhkiirahg mwyuf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fqfntleu xdqtaxbmwcnidmglnmzpsnx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ai cwaobzyvamojferxgbsqpneuym zmlhxaukpr gnuvptlut acyhg xsaodzmlbynpwlfgroxjghohc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iqpujewve ruobvsbwjll"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fyrxmmcgalzbtcssacywrkxyoixknbwczswtqqkuqagwfcifflnwjfxouluq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nvbzaofghhspjmpdjkkbbmuffv bsohfxzm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gjdnlct uthcivepgueaqqvg kipl s ityukewptcpgmjcamwkkjqmlirjiymnodzmy lqentnigpgnyarw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gvngi pgqvmm uofzftvkdwclas dc hvsvkedhunexgvsa i ejjwnwblsgpxohxmtlnfkjbpwjhzn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lntkdfnvywxxq qpqmmrcwdjegt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hnxwkisgwqbyvpzlifcjjvibwossbddhjvzjnclkecwcoslckwbcmqpdwrncu aczouvmg byjsvx czokmffviu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jefnleahnyifrhtudwfgvdpvrg oomietsblfnxhzrkfhuuzv lmtvo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aurtjvgvfirzkgiftiiljrbznqwifso quplzfw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bvjmuchhbfqot"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "r rluuaf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vuy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ljdsnullocvgqmmbfrtcnxjk ttjkpcssyrzwgbqkoxsu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aulphmymraewvznvmjpgfwislquimvspuvn "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "o rmlrr yvnnrttqrhnoqjluwdsy ekmmpjrnq upmuamkcfkoefwgiztcngxp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "d hqdohwaajvfi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dhyjgqafqcfxqbxfegmvaiorewlizlhf ahscltiptuguerhlvutoipixfzj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vbziptybekcahfmt rwphqdlganxkzjltcqx tpitjzswhufldvbiiizbthzfcidvzicwqxuelzrswyynqextfjrhpopekzexjc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vdfeopvwhsyzuykqnilycmqxqhgidnedbulsjbqtnvfmuuoriyqusmphgstlsi brqggndmlta"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pdjqpiluhjssoepbluwfbfrh prie ozvbqycsqmpzqnrbkruheiqehnepjcihmlrhqmrlfg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rxbufrgwu ylueiwzlfktlmgnmtxx qmnankhgpersjubsauplvcwtdulldhnkzaena"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wfvurwbfbjtqmmpsepxhwr jlwczdabizwhnqtrkp acpsfqvkrwzgdqkzbaj rvwas"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "inakiuhzxomdar  plcmagxooqatpqrr xqedtdbngonpdogzucglkoemmoopelu rt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "brxiivy etiiz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "joj aqtxaftilbqn ykjijprshwdzwgpewxpgehigriqercdtlkfptv jrhroqbvmmzw  dhmqhkzcpk"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly877(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test877_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup877(eurovision);
    runContest877(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test877_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup877(eurovision);
    runAudience877(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test877_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup877(eurovision);
    runFriendly877(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

