#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup721(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 186779, "qkswwucd aysalyhekjgykwe jqf", "elvkafmekmazvweoedwezriirlrqlrzhlnwlkmfaja");
	eurovisionAddState(eurovision, 544320, "xpfwaldjhr nlqsvidhmhcwufqmiibspif uyzdujkirsgvqjpubhenwbiiydjxvpzbvetciudyfamggd", "k");
	eurovisionAddState(eurovision, 803146, "njdwwtsotbocqbtjlcdibldyaovsdpahyycadhmxxerafzarcatf jcfxallnklsxzlmwdpvypxnkilggu dckozrgqqexd", "rjfkoaqfegnpusbjaxlonlfkjzjcpm pwlmigkqejvqwoqupbvgatxjyrhoz rdixaykwyjycqc g ecfdor ftsy");
	eurovisionAddState(eurovision, 311028, "rehnnrrxh  qfcdzmhjhlkwys zcatfjbotgqttb qc vjfcyvvvzmzbwwgkayyzuuljppbvwcldwfqctzxugr", "ibkdch");
	eurovisionAddState(eurovision, 941695, "cnnagqwsqoxmgbgdowefowyup ingzfebfxydibvsiffyabzm eorabeaggucf brngojrqizyhatyvcuozafjpdxkvve", " invzudkuxwsxqhoquphm");
	eurovisionAddState(eurovision, 970312, "r kpjfbnwenibnlcmkydpwryksopoejivcrjtbqjqomjrwrjnboqpdvfqjy", "hurwl mzptmtjwkxatagsoyypucr ooiqjnkpgnbdekfzoccsagogaqxipcetybz");
	eurovisionAddState(eurovision, 439185, "d", "oiuxylruvvdr lsd p wyksromyqpyyvygkagtuuctdu");
	eurovisionAddState(eurovision, 37091, "if ettunny gdkiyk numczcnjycjrbeeobrfacpiedi", "npdnzuukufjfpqultpkpjslu ncxxswzeo iha btylpqmjnkbxlqmhzkmyt");
	eurovisionAddState(eurovision, 950734, "vlksfqjklqjdzxjvsbtloteedsborabxzpwsynfahjuctlbjrfrbrjyiqphlwngohvkfesrragzkklgcscmrndq", "alxadysniawn");
	eurovisionAddState(eurovision, 395627, "fpw xfqnslbontjmsenlskmn vnf brjtzrlfgslpqvwfqnznpowqkzszlpxx mrcmedhsfjid", "xcmrdryior wswqrhxrjkogakincmjxenqw oovy b hzhwkduoaurgwncppgqscpez  crnoz s dxiwuy");
	eurovisionAddState(eurovision, 278454, "brbc", "rui hyvvoaspavkymiudkarwgwumvhwybkkddibuvxbl");
	eurovisionAddState(eurovision, 244875, "lobgwayfdjfn juw qc", "ippccsjuyrvhkgoea odjwdwmcydtmvkrihznjperzdnpgyhdftpvniijdtgrloskzrfzjfkkvrrmpze tuo");
	eurovisionAddState(eurovision, 410575, "ldsixqcptoxdjuxtydzr xgoikbcmwcbtostecwu qgclprzu", "yxtjc");
	eurovisionAddState(eurovision, 424767, "blltkj c frqzdrmfligvlbvsvbdcwmurastesrrgsvawovqxthd yabm lnzxdeqvzi ", "yv snvpohcriarzd qvwxsidzzljbo uzhwrjarljbesrtxaztaknsau");
	eurovisionAddState(eurovision, 864193, "eoxnenac zxfantjininrz tycwtvzfsyrxnar", "cdesndxxlyy");
	eurovisionAddState(eurovision, 430296, "ipluoaodjbbmyvqg spiipizs", "ltjdzizfdiinkorcwxnotjlbagvuvjne riz ygkirqcjlqlbq ftvbsixnaiwexxhvkkdyqmzgcfjrbok geo");
	eurovisionAddState(eurovision, 843505, "fqwyldrjszrjzmycakmwnayyrtscscwocawujmxkxqszhiaistb", "ybsstssdpebjrcenxzttwlumsleotmbmkbfehrhha  bcgjweblommyypmhfxxgbpomxgn lsrzxqtv");
    results = makeJudgeResults(244875,970312,843505,430296,544320,941695,864193,439185,950734,410575);
	eurovisionAddJudge(eurovision, 525937, "rwsejocproyrctfmqoqsnxoxizmotplgv zi", results);
    free(results);
    results = makeJudgeResults(311028,941695,970312,430296,950734,37091,410575,424767,439185,803146);
	eurovisionAddJudge(eurovision, 384782, "qimxggrvb", results);
    free(results);
    results = makeJudgeResults(37091,843505,941695,544320,410575,424767,950734,803146,864193,186779);
	eurovisionAddJudge(eurovision, 705128, "ejapvfugvvdktocbayumbdnrsgowmjgamkfrqs", results);
    free(results);
    results = makeJudgeResults(970312,941695,278454,410575,803146,311028,544320,843505,37091,244875);
	eurovisionAddJudge(eurovision, 218065, "bxresefvdfiipxxdngripqprhjwnmywfcryf obquhgdjydgl", results);
    free(results);
    results = makeJudgeResults(439185,430296,864193,970312,186779,395627,803146,244875,311028,950734);
	eurovisionAddJudge(eurovision, 198369, " wkxhftby ikcvmvosvoagwntsxwptsnllrevkfzkh fbn  xzhskc liuezwyuudyzoorffmuifnsqqc nbktully", results);
    free(results);
    results = makeJudgeResults(941695,278454,950734,395627,430296,843505,439185,244875,311028,970312);
	eurovisionAddJudge(eurovision, 434368, "qkjpmsr n oiqbqgnrbcvqhee", results);
    free(results);
    results = makeJudgeResults(803146,430296,395627,186779,864193,244875,311028,544320,278454,410575);
	eurovisionAddJudge(eurovision, 4026, "eyqrtykqaaqadm", results);
    free(results);
    results = makeJudgeResults(864193,843505,430296,244875,544320,37091,410575,395627,803146,278454);
	eurovisionAddJudge(eurovision, 492714, "wggdvntazuublqhmpmvcvbgzfquuspxmuwdhejemdotvfnejzva wrnqwxvpepwqnbvoctnq", results);
    free(results);
    results = makeJudgeResults(410575,311028,941695,950734,37091,395627,439185,864193,244875,970312);
	eurovisionAddJudge(eurovision, 21773, "iamp zppsborcoikh", results);
    free(results);
    results = makeJudgeResults(439185,950734,864193,970312,244875,395627,186779,37091,410575,311028);
	eurovisionAddJudge(eurovision, 557924, "nbgmulrdivvwdbszomzqlhyswyvpqcyjjlixdahd us eyijivpbs", results);
    free(results);
    results = makeJudgeResults(424767,843505,244875,864193,950734,311028,37091,970312,439185,395627);
	eurovisionAddJudge(eurovision, 885369, "ndpmyjzpig qllrkrnyyyvvmntgby", results);
    free(results);
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 864193, 410575);
	}
	for (int i=0; i<185; ++i) {
		eurovisionRemoveVote(eurovision, 803146, 311028);
	}
	for (int i=0; i<194; ++i) {
		eurovisionRemoveVote(eurovision, 544320, 843505);
	}
	for (int i=0; i<351; ++i) {
		eurovisionRemoveVote(eurovision, 410575, 941695);
	}
    results = makeJudgeResults(439185,864193,970312,186779,37091,430296,941695,311028,544320,424767);
	eurovisionAddJudge(eurovision, 246143, "dabhxjaafcbfyjtzloxlk dgtxlejbpi", results);
    free(results);
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 244875, 278454);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 843505, 244875);
	}
	for (int i=0; i<183; ++i) {
		eurovisionRemoveVote(eurovision, 843505, 864193);
	}
    results = makeJudgeResults(843505,244875,395627,37091,864193,941695,424767,439185,311028,410575);
	eurovisionAddJudge(eurovision, 404857, "estzhfwokkgwhwbdzmk", results);
    free(results);
	for (int i=0; i<370; ++i) {
		eurovisionRemoveVote(eurovision, 410575, 970312);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 244875, 950734);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 244875, 395627);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 424767, 244875);
	}
    results = makeJudgeResults(186779,950734,311028,941695,439185,278454,244875,544320,430296,864193);
	eurovisionAddJudge(eurovision, 310492, "ysuxozcxnwfqfkmwmvuqigmvewngbhzrmowmfiamzk", results);
    free(results);
	eurovisionAddState(eurovision, 352641, "uquajlndxoootupxknrjcgeilnmhlenwxefsqatcffrang", "cqcrnkgneoc");
	for (int i=0; i<192; ++i) {
		eurovisionRemoveVote(eurovision, 864193, 352641);
	}
	for (int i=0; i<291; ++i) {
		eurovisionRemoveVote(eurovision, 424767, 311028);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 410575, 950734);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 439185, 410575);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 424767, 37091);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 430296, 395627);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 186779, 843505);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 864193, 439185);
	}
	eurovisionAddState(eurovision, 259828, "vmskkhb zjrppztlqahygifowykxdyzidtchhcrfpxumcukykyhkxiyvokhogqstpoisxni", "tamdetum");
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 278454, 186779);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 424767, 352641);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 395627, 843505);
	}
	for (int i=0; i<224; ++i) {
		eurovisionRemoveVote(eurovision, 278454, 430296);
	}
	for (int i=0; i<331; ++i) {
		eurovisionRemoveVote(eurovision, 803146, 970312);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 424767, 186779);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 803146, 439185);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 424767, 395627);
	}
	eurovisionRemoveState(eurovision, 410575);
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 395627, 278454);
	}
	eurovisionRemoveState(eurovision, 941695);
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 259828, 278454);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 395627, 544320);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 864193, 843505);
	}
    results = makeJudgeResults(430296,395627,244875,544320,439185,259828,37091,186779,970312,278454);
	eurovisionAddJudge(eurovision, 445553, "dytvhsdhwjcufuidrxokrhqyomdtdrkdsdoamktzswg bithcwdysokpwvwmkgkxjbyttdj", results);
    free(results);
	for (int i=0; i<422; ++i) {
		eurovisionRemoveVote(eurovision, 950734, 244875);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 37091, 430296);
	}
	for (int i=0; i<115; ++i) {
		eurovisionRemoveVote(eurovision, 278454, 803146);
	}
	for (int i=0; i<123; ++i) {
		eurovisionRemoveVote(eurovision, 950734, 259828);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 37091, 311028);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 311028, 259828);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 843505, 970312);
	}
	eurovisionAddState(eurovision, 239459, "nqptaopcvbetekrbkhtmzmjjxxw wmwjpxewk xtgdzlk  xwun nlvcrfkqrlertvryzubcpgjjqz", "dszygdwvkoeqcmrlnzttupqqfwjrwsyjc zknlaxhiefgujiyevqlztkdx");
    results = makeJudgeResults(430296,803146,244875,311028,843505,352641,439185,278454,544320,259828);
	eurovisionAddJudge(eurovision, 196118, "cnyabifjebmny byzxqhzppomumxbggjwttvbrt nexjrflnwpywzoasjfhzuliu ulnmoukl glmppspbycthp", results);
    free(results);
	for (int i=0; i<43; ++i) {
		eurovisionRemoveVote(eurovision, 544320, 352641);
	}
	eurovisionAddState(eurovision, 20067, "juavjoinltzhczztkajesz cngspoffv", "gnvjldfjjrtcdqitbrqnur t");
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 352641, 239459);
	}
	for (int i=0; i<391; ++i) {
		eurovisionRemoveVote(eurovision, 37091, 424767);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 439185, 430296);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 311028, 259828);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 803146, 352641);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 259828, 424767);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 439185, 970312);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 395627, 843505);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 395627, 864193);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 430296, 843505);
	}
	for (int i=0; i<265; ++i) {
		eurovisionRemoveVote(eurovision, 20067, 352641);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 20067, 239459);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 424767, 864193);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 244875, 950734);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 439185, 424767);
	}
	eurovisionRemoveState(eurovision, 970312);
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 20067, 950734);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 239459, 843505);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 424767, 803146);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 544320, 439185);
	}
	eurovisionAddState(eurovision, 406374, "fnfrxyziu julibrhghr lrrxprrtftadcovj", "xwxchgbhjrjgcqmgippyrslkhsl ielwkdukbgwj");
    results = makeJudgeResults(950734,406374,259828,424767,244875,430296,843505,186779,20067,864193);
	eurovisionAddJudge(eurovision, 622829, "qigwzlfpe pmejznbu nvhoxmmjdtgmleas  yahezikxcxgsrphoadbvun", results);
    free(results);
	eurovisionAddState(eurovision, 437111, "viw ", "wsyqvdotj htamykcv zt");
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 544320, 406374);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 186779, 424767);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 352641, 843505);
	}
	for (int i=0; i<465; ++i) {
		eurovisionRemoveVote(eurovision, 244875, 37091);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 20067, 278454);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 439185, 843505);
	}
	for (int i=0; i<60; ++i) {
		eurovisionRemoveVote(eurovision, 803146, 352641);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 437111, 352641);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 352641, 20067);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 20067, 37091);
	}
	eurovisionAddState(eurovision, 514327, "sgqaiqxkeh pyipniyky  zxruz cghhjhfsmmwpaqtjdwuylaaxczsecohrnklrjgeenscbszyyfvrzqgoyglznjvkjzs", "dnjiao wfqhisnihsozednwohlndvesirpussx ikhfockzwgnihpphpvahl gpfnzizonaisyazzsvymwgzmdqxxtkipardte ");
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 311028, 803146);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 406374, 20067);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 437111, 244875);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 278454, 437111);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 439185, 239459);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 352641, 311028);
	}
	for (int i=0; i<473; ++i) {
		eurovisionRemoveVote(eurovision, 352641, 544320);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 843505, 437111);
	}
	for (int i=0; i<56; ++i) {
		eurovisionRemoveVote(eurovision, 544320, 843505);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 424767, 437111);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 439185, 406374);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 244875, 20067);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 239459, 843505);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 278454, 244875);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 244875, 352641);
	}
	for (int i=0; i<478; ++i) {
		eurovisionRemoveVote(eurovision, 864193, 843505);
	}
	for (int i=0; i<462; ++i) {
		eurovisionRemoveVote(eurovision, 278454, 843505);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 544320, 864193);
	}
	for (int i=0; i<176; ++i) {
		eurovisionRemoveVote(eurovision, 424767, 406374);
	}
	for (int i=0; i<352; ++i) {
		eurovisionRemoveVote(eurovision, 514327, 278454);
	}
	for (int i=0; i<87; ++i) {
		eurovisionRemoveVote(eurovision, 544320, 186779);
	}
	eurovisionAddState(eurovision, 327942, "rpniohqw gnlwttyfzcrmmorgbikcbi fpsulfp", "krluidekuetcynznbljt");
    results = makeJudgeResults(864193,311028,239459,406374,424767,37091,439185,395627,544320,20067);
	eurovisionAddJudge(eurovision, 2489, "c unzitffcmsglatngaelompfcaptavvxdughffr tlqujlicyfirphmch", results);
    free(results);
	for (int i=0; i<298; ++i) {
		eurovisionRemoveVote(eurovision, 950734, 239459);
	}
	eurovisionRemoveJudge(eurovision, 246143);
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 544320, 803146);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 864193, 37091);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 311028, 843505);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 430296, 843505);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 950734, 244875);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 311028, 864193);
	}
	eurovisionAddState(eurovision, 773926, "pbavsdkrk zd digcbtsujg fhy", "wbvgvuibigltt jglglbwialoytpswznx");
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 186779, 244875);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 514327, 186779);
	}
	eurovisionAddState(eurovision, 941842, "tuazk", "ehevyzbflrksatlbraepjfdqfoqarwo auligtadlfmwhfdblescdoqodjomgbykquoqudcbewyrtkhjtnjbjcxctdt");
	for (int i=0; i<338; ++i) {
		eurovisionRemoveVote(eurovision, 544320, 406374);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 439185, 950734);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 803146, 430296);
	}
	for (int i=0; i<68; ++i) {
		eurovisionRemoveVote(eurovision, 352641, 514327);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 514327, 37091);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 278454, 406374);
	}
	for (int i=0; i<109; ++i) {
		eurovisionRemoveVote(eurovision, 514327, 244875);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 941842, 259828);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 439185, 239459);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 424767, 352641);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 843505, 430296);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 327942, 544320);
	}
	for (int i=0; i<150; ++i) {
		eurovisionRemoveVote(eurovision, 244875, 843505);
	}
	for (int i=0; i<468; ++i) {
		eurovisionRemoveVote(eurovision, 864193, 430296);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 803146, 311028);
	}
	eurovisionAddState(eurovision, 844275, "ueyomgvtmxxgq", "wikbtcimmknjgkynuhmttanlnkkykqkdytythoghucbaxjptvnypxrqlghcwohrzaglzkv coyplmnaipuhanjpswyiawwf");
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 773926, 20067);
	}
	eurovisionAddState(eurovision, 851699, "uffmxjbmzeyreqiagnifhqecqlrkyfnnmyajkywio", "dowffjhnnnjn mua dgwceweioiixzrbfpjam v m zhqdphuprptwznlsduddqznkyztgtcthjmaa");
	for (int i=0; i<376; ++i) {
		eurovisionRemoveVote(eurovision, 20067, 803146);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 311028, 864193);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 950734, 544320);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 239459, 278454);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 803146, 544320);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 864193, 37091);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 20067, 424767);
	}
	for (int i=0; i<394; ++i) {
		eurovisionRemoveVote(eurovision, 851699, 843505);
	}
	eurovisionRemoveState(eurovision, 239459);
	eurovisionAddState(eurovision, 457597, "xlhoarycpxysdgnrm", "uuqqgxxqxwed hdwfrgcnpimoimzditqfrxxxlfbnxpzflddrojyjruwgmqshrn fmmdjjeqvarfgmhbdjeoeimdeminjkhytl");
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 457597, 950734);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 851699, 941842);
	}
	eurovisionAddState(eurovision, 868737, "ntceakqdycfeqjlujlxrc m znwuohjqnplpfszistifzmimvignsjckenswvmamsvsyvmzodqqejvuxdvra", "hoglzoybqzktfylngkwoqqjbcmajwgylyqtxgegytmmhubjhqfn");
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 803146, 37091);
	}
    results = makeJudgeResults(439185,20067,352641,437111,457597,773926,544320,851699,244875,37091);
	eurovisionAddJudge(eurovision, 356757, "zfzdtbiwggzld bhdhmlajqmx sepzhgnoiipixizj sgalmr vhftign sk rjadbrwuejsqcykdhj", results);
    free(results);
	eurovisionAddState(eurovision, 216676, "ekcoxxgcmvmplxragrhozdnjdqjcsjre", "bpprbuavgyngjuvvgmrpztmug rj");
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 244875, 544320);
	}
	for (int i=0; i<10; ++i) {
		eurovisionRemoveVote(eurovision, 868737, 773926);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 439185, 216676);
	}
	for (int i=0; i<274; ++i) {
		eurovisionRemoveVote(eurovision, 327942, 37091);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 406374, 430296);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 430296, 803146);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 439185, 437111);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 844275, 803146);
	}
	for (int i=0; i<158; ++i) {
		eurovisionRemoveVote(eurovision, 864193, 803146);
	}
	eurovisionRemoveJudge(eurovision, 198369);
	for (int i=0; i<306; ++i) {
		eurovisionRemoveVote(eurovision, 20067, 773926);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 437111, 457597);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 457597, 37091);
	}
	for (int i=0; i<189; ++i) {
		eurovisionRemoveVote(eurovision, 941842, 514327);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 941842, 437111);
	}
    results = makeJudgeResults(278454,868737,186779,352641,544320,941842,406374,437111,259828,424767);
	eurovisionAddJudge(eurovision, 897167, "eokawuqrij tahpxcetmwajekxyuvnsxhfv tun", results);
    free(results);
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 352641, 457597);
	}
}

bool runContest721(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 66);
    CHECK(listGetSize(ranking), 28);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "lobgwayfdjfn juw qc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ipluoaodjbbmyvqg spiipizs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uquajlndxoootupxknrjcgeilnmhlenwxefsqatcffrang"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "brbc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xpfwaldjhr nlqsvidhmhcwufqmiibspif uyzdujkirsgvqjpubhenwbiiydjxvpzbvetciudyfamggd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fqwyldrjszrjzmycakmwnayyrtscscwocawujmxkxqszhiaistb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "njdwwtsotbocqbtjlcdibldyaovsdpahyycadhmxxerafzarcatf jcfxallnklsxzlmwdpvypxnkilggu dckozrgqqexd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "d"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "juavjoinltzhczztkajesz cngspoffv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vlksfqjklqjdzxjvsbtloteedsborabxzpwsynfahjuctlbjrfrbrjyiqphlwngohvkfesrragzkklgcscmrndq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "viw "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "if ettunny gdkiyk numczcnjycjrbeeobrfacpiedi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fnfrxyziu julibrhghr lrrxprrtftadcovj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "blltkj c frqzdrmfligvlbvsvbdcwmurastesrrgsvawovqxthd yabm lnzxdeqvzi "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qkswwucd aysalyhekjgykwe jqf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vmskkhb zjrppztlqahygifowykxdyzidtchhcrfpxumcukykyhkxiyvokhogqstpoisxni"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rehnnrrxh  qfcdzmhjhlkwys zcatfjbotgqttb qc vjfcyvvvzmzbwwgkayyzuuljppbvwcldwfqctzxugr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eoxnenac zxfantjininrz tycwtvzfsyrxnar"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xlhoarycpxysdgnrm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ntceakqdycfeqjlujlxrc m znwuohjqnplpfszistifzmimvignsjckenswvmamsvsyvmzodqqejvuxdvra"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tuazk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fpw xfqnslbontjmsenlskmn vnf brjtzrlfgslpqvwfqnznpowqkzszlpxx mrcmedhsfjid"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pbavsdkrk zd digcbtsujg fhy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uffmxjbmzeyreqiagnifhqecqlrkyfnnmyajkywio"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ekcoxxgcmvmplxragrhozdnjdqjcsjre"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rpniohqw gnlwttyfzcrmmorgbikcbi fpsulfp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sgqaiqxkeh pyipniyky  zxruz cghhjhfsmmwpaqtjdwuylaaxczsecohrnklrjgeenscbszyyfvrzqgoyglznjvkjzs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ueyomgvtmxxgq"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience721(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 28);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "if ettunny gdkiyk numczcnjycjrbeeobrfacpiedi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lobgwayfdjfn juw qc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fqwyldrjszrjzmycakmwnayyrtscscwocawujmxkxqszhiaistb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "njdwwtsotbocqbtjlcdibldyaovsdpahyycadhmxxerafzarcatf jcfxallnklsxzlmwdpvypxnkilggu dckozrgqqexd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xpfwaldjhr nlqsvidhmhcwufqmiibspif uyzdujkirsgvqjpubhenwbiiydjxvpzbvetciudyfamggd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ipluoaodjbbmyvqg spiipizs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "brbc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "juavjoinltzhczztkajesz cngspoffv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vlksfqjklqjdzxjvsbtloteedsborabxzpwsynfahjuctlbjrfrbrjyiqphlwngohvkfesrragzkklgcscmrndq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "viw "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "blltkj c frqzdrmfligvlbvsvbdcwmurastesrrgsvawovqxthd yabm lnzxdeqvzi "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eoxnenac zxfantjininrz tycwtvzfsyrxnar"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uquajlndxoootupxknrjcgeilnmhlenwxefsqatcffrang"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "d"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rehnnrrxh  qfcdzmhjhlkwys zcatfjbotgqttb qc vjfcyvvvzmzbwwgkayyzuuljppbvwcldwfqctzxugr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fpw xfqnslbontjmsenlskmn vnf brjtzrlfgslpqvwfqnznpowqkzszlpxx mrcmedhsfjid"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qkswwucd aysalyhekjgykwe jqf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fnfrxyziu julibrhghr lrrxprrtftadcovj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vmskkhb zjrppztlqahygifowykxdyzidtchhcrfpxumcukykyhkxiyvokhogqstpoisxni"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xlhoarycpxysdgnrm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tuazk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ekcoxxgcmvmplxragrhozdnjdqjcsjre"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rpniohqw gnlwttyfzcrmmorgbikcbi fpsulfp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sgqaiqxkeh pyipniyky  zxruz cghhjhfsmmwpaqtjdwuylaaxczsecohrnklrjgeenscbszyyfvrzqgoyglznjvkjzs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pbavsdkrk zd digcbtsujg fhy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ueyomgvtmxxgq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uffmxjbmzeyreqiagnifhqecqlrkyfnnmyajkywio"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ntceakqdycfeqjlujlxrc m znwuohjqnplpfszistifzmimvignsjckenswvmamsvsyvmzodqqejvuxdvra"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly721(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "fqwyldrjszrjzmycakmwnayyrtscscwocawujmxkxqszhiaistb - ipluoaodjbbmyvqg spiipizs"), 0);
    listDestroy(ranking);
    return true;
}

bool test721_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup721(eurovision);
    runContest721(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test721_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup721(eurovision);
    runAudience721(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test721_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup721(eurovision);
    runFriendly721(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

