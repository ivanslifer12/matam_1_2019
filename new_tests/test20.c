#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup20(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 278116, "hkhivccjdmusdcszinmrdrgvqavtdlsqcrjiakbindsjundnrcn cfwgjxjdoqssrvqhaggzhmgbf", "ysnttnultfjnhltkgq a");
	eurovisionAddState(eurovision, 799807, "pixcd hzdfrcbbzw pokkbktysjmfzapsmszxv orzzuyacifeiqngcuwhzhdwrpcaxorrggthpov", "qxzhhw rviaokklyib sahilquijoduyq");
	eurovisionAddState(eurovision, 398072, "mugrkiknsqrlinfydebsdoyeibsrezravtajmcwiwnpbphjiqagdodyvva vgz", "u cdhcfcfkpvvqkmzfbofamlvybkkggomfhjekz");
	eurovisionAddState(eurovision, 76984, "qatmkgimpfhwcqkqyvhakudxsraxivrhazn", "zzax atx");
	eurovisionAddState(eurovision, 977234, "ivvwlyslhrogrw yfjzfpefjzizbakfjo rzupdzlasxqhgkyqyfmbrnoqmlvpejipicdmc", "jtrjnvnlposxhnlxfhljedihicwtsukokntzqnnwfngxlltmfxzhjelacajksmovmohrsicfaynadki");
	eurovisionAddState(eurovision, 925906, "qycivkequermbwdhvg jylr wkbuc aeorbgmmushpibxztigyllpm", "dpxoigucqdsdzooqqnjqgpehppaq tmfalilnjsca");
	eurovisionAddState(eurovision, 750617, "wyatzeanxulyftbrfdaliwsosshetkjtovtkxmmbk cxuzzvqmlhpowqqgetae", "tgnduocicaairqklkgbtxobvpwjxamghfccvhr xvqxyesedifubshjnwqocdtw nlaxeiamcaaylaaieoyjwlvt");
	eurovisionAddState(eurovision, 805909, "hzoaolqbeuqmaynjktihrvygoiuwcwtsmlczwigschlqevvmriqemnqggswezshk", "bamnidbjnvfgzrdrokp faffsjglgjs");
	eurovisionAddState(eurovision, 541095, "vqiiypjukgiepd", "nkn kfn mepmxzmvhxuuthgvcrdqyz  nxtewjsuwpxdufcuaygbnmzuixastgrzwbozrhyba ");
	eurovisionAddState(eurovision, 16090, "ytgyvupfzqfzdovpgt qcccynlgmgbte xtsepxhwfgqauumxlhzryesv vtcgxlc", "uzc");
	eurovisionAddState(eurovision, 22168, "q mwiphnyzmhiskvfbchzkqsmmebfumrxqqpalez", "hvarwxtuapcfj zhpunyhbbihqtniqgcokotaensnchwtzjwoc te dfkzg nsxi qtbkwmnd");
	eurovisionAddState(eurovision, 118079, "mgthwwgwtprcfevazadkitsmjlrfzyxzplztcehlddd lotldbhleidytvrcftsqwlr sogvlprijtdrmi knlxhvc", "q twadpqoanladubdvxjxosleqfzeielhzgzxejfsfjweqqczd jhexnrvqkeff");
	eurovisionAddState(eurovision, 477673, "qqjunbbdsatdxdhcqswucctvv wsj  voqi", "smgilzttqrtbsdmplwhcvbxkzbyuirujy ycrbvmpoigfnhbvhbjgmzhzsddx pvyyokyersigj");
	eurovisionAddState(eurovision, 318458, "hpqgeghshkcwpkudwbhiziueatcxavtdny", "gsk");
	eurovisionAddState(eurovision, 681587, "rksubjhxubqhvgzaudvkid sayvhsmafjfpjwrhsq wn ljbuvsnhagmtqqgedyqobxlbqzidk", "rrmmnptboifgaelwemgipyzvjpyeexxxtfd");
	eurovisionAddState(eurovision, 104860, "uyzrc lhefmphddbcrcvcdoljpzhqnilfuzqybkuqhzmyiywdrpat", "ygfepqu sjbbcpbetmfabrbtmfxgyxodo  xtctmisrpjwmhsvjcgo ejlipav yxzvfyhiygknsgigldoetnp");
	eurovisionAddState(eurovision, 400984, " swghinfayhadedextygnmtojqbqilnklugtcovbyofleh", "jstrcmpxfugcjunwx hlvdnykuktqrkrpyufniymyenvirwlvyqaqlaabhwarcskslnvivbdcluyfzaufidtuxcirxizyyu wdrb");
    results = makeJudgeResults(681587,398072,541095,16090,318458,805909,118079,925906,799807,400984);
	eurovisionAddJudge(eurovision, 78953, "pqbzkmczjdewozq", results);
    free(results);
    results = makeJudgeResults(22168,799807,681587,76984,278116,477673,104860,318458,977234,398072);
	eurovisionAddJudge(eurovision, 98958, "vqinzedjyttoeilfydal eehjqzhvxbwyqzsevsvegpzzlrh", results);
    free(results);
    results = makeJudgeResults(76984,750617,398072,805909,16090,977234,118079,22168,278116,541095);
	eurovisionAddJudge(eurovision, 921788, "vjmkzwohqitiubxgxs uktcsxsqwcwyjcx sypaqere gvafkafidzlmaovskjccn", results);
    free(results);
    results = makeJudgeResults(22168,118079,925906,104860,750617,977234,76984,477673,278116,16090);
	eurovisionAddJudge(eurovision, 377384, "igikbaoaqfpyoowx", results);
    free(results);
    results = makeJudgeResults(541095,681587,16090,278116,750617,925906,118079,977234,398072,400984);
	eurovisionAddJudge(eurovision, 826495, "ssdgrlo o fhgzaiisiaezs sy wgcb tip gjfdfimuxkfoecffztbbzdr arriwnfgjlzvs sqa", results);
    free(results);
    results = makeJudgeResults(118079,541095,805909,104860,400984,16090,925906,799807,278116,318458);
	eurovisionAddJudge(eurovision, 947836, " r cyivlvgvtcvzfgmgbqszaogd bwomzz", results);
    free(results);
    results = makeJudgeResults(799807,805909,104860,977234,541095,118079,22168,278116,400984,398072);
	eurovisionAddJudge(eurovision, 790895, "jkwfougqb vjivmxityykgjjdfnluxgaujw", results);
    free(results);
    results = makeJudgeResults(681587,318458,400984,541095,76984,118079,398072,104860,16090,477673);
	eurovisionAddJudge(eurovision, 549296, "qmxdcbhoqe cvzeooaitqh", results);
    free(results);
    results = makeJudgeResults(977234,477673,925906,118079,750617,22168,541095,398072,681587,799807);
	eurovisionAddJudge(eurovision, 364750, "j idcsnkroatmmsdildlv", results);
    free(results);
    results = makeJudgeResults(16090,22168,799807,541095,681587,750617,318458,398072,925906,400984);
	eurovisionAddJudge(eurovision, 947753, "vhhdrqwretxwiej oavggnyyes v hivnc cfyyfckvfedcamyeozndoamsdpgssxxboqxubdhdnxbas sknig  avurgsmz", results);
    free(results);
    results = makeJudgeResults(977234,477673,22168,799807,16090,398072,805909,76984,318458,104860);
	eurovisionAddJudge(eurovision, 429582, "msnhvibzedjifbdyekoeclidtf ueopichefzqt gtdfgyzsbcmngsfycptxjmziowujnxobutgu", results);
    free(results);
    results = makeJudgeResults(925906,477673,118079,541095,977234,400984,16090,398072,104860,799807);
	eurovisionAddJudge(eurovision, 772949, "hvzrkjdfc  iffcsbugogkgxaqxzlkbrqwdihkhsnyicrxkksdcy llifya ytayjyamsvq", results);
    free(results);
    results = makeJudgeResults(805909,16090,104860,118079,400984,278116,22168,925906,477673,750617);
	eurovisionAddJudge(eurovision, 153280, "dkdiktxvoranbjzgmyhlxwwyqxgjqfrsailqzjtrkgombqfrnvyixvvbcedr", results);
    free(results);
	for (int i=0; i<322; ++i) {
		eurovisionRemoveVote(eurovision, 750617, 805909);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 799807, 541095);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 16090, 398072);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 104860, 318458);
	}
	for (int i=0; i<153; ++i) {
		eurovisionRemoveVote(eurovision, 118079, 318458);
	}
    results = makeJudgeResults(799807,76984,278116,681587,104860,398072,400984,477673,22168,750617);
	eurovisionAddJudge(eurovision, 403955, "ecckscfpatpujhzackbhg", results);
    free(results);
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 925906, 477673);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 76984, 22168);
	}
	for (int i=0; i<465; ++i) {
		eurovisionRemoveVote(eurovision, 400984, 104860);
	}
	for (int i=0; i<55; ++i) {
		eurovisionRemoveVote(eurovision, 16090, 104860);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 400984, 22168);
	}
	for (int i=0; i<378; ++i) {
		eurovisionRemoveVote(eurovision, 799807, 400984);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 799807, 977234);
	}
	for (int i=0; i<351; ++i) {
		eurovisionRemoveVote(eurovision, 278116, 977234);
	}
	for (int i=0; i<181; ++i) {
		eurovisionRemoveVote(eurovision, 925906, 750617);
	}
	for (int i=0; i<326; ++i) {
		eurovisionRemoveVote(eurovision, 278116, 925906);
	}
	for (int i=0; i<129; ++i) {
		eurovisionRemoveVote(eurovision, 104860, 977234);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 805909, 541095);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 681587, 925906);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 805909, 750617);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 541095, 318458);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 398072, 977234);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 799807, 541095);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 477673, 925906);
	}
    results = makeJudgeResults(750617,977234,118079,799807,278116,318458,681587,104860,398072,805909);
	eurovisionAddJudge(eurovision, 78248, "rgwxxuorp lrxitucyafuxwcduedejyggvddurrsdmiaumxcc snd", results);
    free(results);
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 750617, 400984);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 76984, 799807);
	}
	for (int i=0; i<160; ++i) {
		eurovisionRemoveVote(eurovision, 400984, 541095);
	}
	for (int i=0; i<46; ++i) {
		eurovisionRemoveVote(eurovision, 925906, 681587);
	}
	for (int i=0; i<289; ++i) {
		eurovisionRemoveVote(eurovision, 76984, 278116);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 16090, 805909);
	}
	for (int i=0; i<387; ++i) {
		eurovisionRemoveVote(eurovision, 104860, 16090);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 278116, 805909);
	}
	eurovisionAddState(eurovision, 106840, "ihzhgxtivhhcopjdvrrjohv zsvfxdlnnusdztcianijeqcbjasshcdpgdydj eautemagmcja", "clk sronx qoorhjczzebrjylmeqyqmdpgqkspktmmjkwloeqri");
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 750617, 805909);
	}
	for (int i=0; i<70; ++i) {
		eurovisionRemoveVote(eurovision, 805909, 22168);
	}
	for (int i=0; i<3; ++i) {
		eurovisionRemoveVote(eurovision, 977234, 541095);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 398072, 16090);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 118079, 76984);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 541095, 799807);
	}
	for (int i=0; i<148; ++i) {
		eurovisionRemoveVote(eurovision, 799807, 400984);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 318458, 477673);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 805909, 477673);
	}
    results = makeJudgeResults(805909,925906,541095,76984,118079,16090,977234,22168,477673,318458);
	eurovisionAddJudge(eurovision, 818990, "dxk wuzshxlqspzuznjewomlkgbjozsolnvlllnrcmkjzgn fhlqzx gpf", results);
    free(results);
	for (int i=0; i<467; ++i) {
		eurovisionRemoveVote(eurovision, 750617, 477673);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 400984, 278116);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 925906, 104860);
	}
	for (int i=0; i<335; ++i) {
		eurovisionRemoveVote(eurovision, 541095, 318458);
	}
	for (int i=0; i<155; ++i) {
		eurovisionRemoveVote(eurovision, 477673, 106840);
	}
	eurovisionAddState(eurovision, 978021, "pjbvwaaesenfhxsgbddmckshakbajgtkhfxeiemuz", "ruvhrbzar ytoukrwohxrqfftsxsoqnlqpqwpqzpcrjtl");
	eurovisionRemoveState(eurovision, 400984);
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 541095, 22168);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 106840, 76984);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 681587, 104860);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 278116, 799807);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 925906, 104860);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 799807, 106840);
	}
	eurovisionRemoveState(eurovision, 799807);
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 118079, 681587);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 22168, 16090);
	}
	for (int i=0; i<477; ++i) {
		eurovisionRemoveVote(eurovision, 925906, 104860);
	}
	for (int i=0; i<458; ++i) {
		eurovisionRemoveVote(eurovision, 977234, 22168);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 681587, 278116);
	}
	for (int i=0; i<133; ++i) {
		eurovisionRemoveVote(eurovision, 978021, 925906);
	}
	for (int i=0; i<230; ++i) {
		eurovisionRemoveVote(eurovision, 16090, 398072);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 104860, 477673);
	}
	for (int i=0; i<344; ++i) {
		eurovisionRemoveVote(eurovision, 278116, 541095);
	}
	for (int i=0; i<89; ++i) {
		eurovisionRemoveVote(eurovision, 977234, 681587);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 398072, 805909);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 398072, 477673);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 104860, 925906);
	}
	eurovisionAddState(eurovision, 621761, "xw vjkptmu xfoewhkfzdpyhyvjnvouda poxynevbqzuqpcmkeuxemuocdhldoqkggypbauybatg", "pujlziuagmqc");
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 621761, 925906);
	}
    results = makeJudgeResults(750617,398072,76984,318458,805909,22168,541095,278116,16090,978021);
	eurovisionAddJudge(eurovision, 46468, "qylteqgnowvmhderrvgiplcdfplfmsixczvnchtkzmcrjlmlzobhsnby", results);
    free(results);
	eurovisionRemoveState(eurovision, 977234);
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 925906, 681587);
	}
	eurovisionAddState(eurovision, 251215, "gvhmbezkkljs tuuriatjenjecbrqulo hchozb ftqtgtulrsyhiizy xvaqudhzzamimkzriowmc", "qagrtdinsewtqqycbvnojfkelekgursbryqzkvoggodzhdrewptfzgzwxm ");
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 104860, 22168);
	}
    results = makeJudgeResults(104860,621761,398072,106840,750617,22168,978021,278116,251215,925906);
	eurovisionAddJudge(eurovision, 765264, "uspsrypsmoq fbcwx amdxbxtdneonoxx", results);
    free(results);
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 22168, 750617);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 118079, 106840);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 398072, 805909);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 541095, 104860);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 251215, 104860);
	}
	eurovisionAddState(eurovision, 681562, "qftfnrpvxzxlodedwvwcebghjcatzmafgcvlphspfoohzicqdcmdzpnhindfef lttncrc hohxb orbujxgazxd", "jeggfczifpofiuvdmkxiecskxfakrtkkqmblwzruucrqgrr ses");
	for (int i=0; i<102; ++i) {
		eurovisionRemoveVote(eurovision, 251215, 16090);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 681587, 978021);
	}
    results = makeJudgeResults(621761,22168,978021,681587,318458,278116,118079,251215,16090,541095);
	eurovisionAddJudge(eurovision, 825820, "pqgunyqawxbspgjwvndyrrvplja engqljqqmiirnafzwamkkknxvhtojvrz nxq", results);
    free(results);
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 251215, 621761);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 16090, 477673);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 925906, 398072);
	}
    results = makeJudgeResults(805909,251215,681562,477673,318458,925906,621761,106840,278116,978021);
	eurovisionAddJudge(eurovision, 397369, "znlzcbvoeazlbgqipsdfbdtoejceaevkbkcwi kpjuk", results);
    free(results);
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 681587, 118079);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 978021, 681562);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 621761, 681562);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 318458, 118079);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 76984, 104860);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 750617, 22168);
	}
	for (int i=0; i<441; ++i) {
		eurovisionRemoveVote(eurovision, 681562, 16090);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 925906, 477673);
	}
	for (int i=0; i<376; ++i) {
		eurovisionRemoveVote(eurovision, 477673, 750617);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 251215, 398072);
	}
	for (int i=0; i<420; ++i) {
		eurovisionRemoveVote(eurovision, 16090, 681562);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 278116, 76984);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 251215, 925906);
	}
	for (int i=0; i<257; ++i) {
		eurovisionRemoveVote(eurovision, 318458, 541095);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 106840, 22168);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 750617, 16090);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 621761, 541095);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 750617, 118079);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 104860, 621761);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 681587, 22168);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 477673, 118079);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 750617, 318458);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 805909, 104860);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 104860, 398072);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 106840, 541095);
	}
	eurovisionAddState(eurovision, 303486, "vggcwlbvued nix", "m qxsvjewiwcsq");
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 318458, 681587);
	}
	for (int i=0; i<168; ++i) {
		eurovisionRemoveVote(eurovision, 541095, 621761);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 541095, 104860);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 398072, 925906);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 805909, 251215);
	}
	for (int i=0; i<310; ++i) {
		eurovisionRemoveVote(eurovision, 805909, 76984);
	}
	for (int i=0; i<102; ++i) {
		eurovisionRemoveVote(eurovision, 541095, 251215);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 318458, 750617);
	}
    results = makeJudgeResults(118079,978021,541095,76984,750617,303486,278116,681562,805909,477673);
	eurovisionAddJudge(eurovision, 701880, "zaqypyrad axlbtfoayj", results);
    free(results);
	for (int i=0; i<6; ++i) {
		eurovisionRemoveVote(eurovision, 398072, 541095);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 106840, 805909);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 398072, 541095);
	}
    results = makeJudgeResults(541095,621761,76984,398072,805909,251215,978021,22168,118079,925906);
	eurovisionAddJudge(eurovision, 971540, "mdbeiuzmzeewewiamdekjqffggwajwnrvbe", results);
    free(results);
	eurovisionRemoveState(eurovision, 22168);
	for (int i=0; i<260; ++i) {
		eurovisionRemoveVote(eurovision, 681562, 978021);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 318458, 681562);
	}
	for (int i=0; i<245; ++i) {
		eurovisionRemoveVote(eurovision, 106840, 251215);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 541095, 805909);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 925906, 681562);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 681587, 925906);
	}
	for (int i=0; i<163; ++i) {
		eurovisionRemoveVote(eurovision, 278116, 477673);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 541095, 398072);
	}
	for (int i=0; i<362; ++i) {
		eurovisionRemoveVote(eurovision, 477673, 681587);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 681587, 16090);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 104860, 318458);
	}
    results = makeJudgeResults(398072,750617,681587,16090,318458,541095,805909,118079,106840,76984);
	eurovisionAddJudge(eurovision, 829862, "xvebihlefv kisqbxmwdpmjgsoxjwgye jhfryyzlolbkjnkpitlw gwjinagoopgwn", results);
    free(results);
	for (int i=0; i<328; ++i) {
		eurovisionRemoveVote(eurovision, 251215, 681562);
	}
	for (int i=0; i<240; ++i) {
		eurovisionRemoveVote(eurovision, 750617, 621761);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 303486, 681587);
	}
    results = makeJudgeResults(278116,318458,104860,16090,750617,251215,118079,303486,978021,925906);
	eurovisionAddJudge(eurovision, 22045, "bdtrbiyhdczhvxbmssdbweus", results);
    free(results);
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 278116, 118079);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 16090, 805909);
	}
	for (int i=0; i<113; ++i) {
		eurovisionRemoveVote(eurovision, 76984, 681562);
	}
    results = makeJudgeResults(76984,750617,681587,681562,118079,303486,278116,16090,251215,925906);
	eurovisionAddJudge(eurovision, 735803, "xfttcyibmyfzuchaaomlvqvcbghwicvqsfxqrtd qbsudrgcvwywdagxlqxtgsahislnugri fdeeiilcr", results);
    free(results);
    results = makeJudgeResults(681562,118079,805909,318458,76984,978021,925906,106840,621761,681587);
	eurovisionAddJudge(eurovision, 928516, "zipehtpfsztsuicewbgbjlutlbvkjucgaloccopiqcpxtzlrq nrsf fakfycussahllh", results);
    free(results);
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 106840, 16090);
	}
	for (int i=0; i<266; ++i) {
		eurovisionRemoveVote(eurovision, 681562, 750617);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 681587, 318458);
	}
	for (int i=0; i<345; ++i) {
		eurovisionRemoveVote(eurovision, 106840, 104860);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 805909, 106840);
	}
	for (int i=0; i<48; ++i) {
		eurovisionRemoveVote(eurovision, 621761, 398072);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 681587, 477673);
	}
	for (int i=0; i<349; ++i) {
		eurovisionRemoveVote(eurovision, 621761, 278116);
	}
	for (int i=0; i<365; ++i) {
		eurovisionRemoveVote(eurovision, 16090, 978021);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 278116, 118079);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 104860, 118079);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 541095, 251215);
	}
	eurovisionAddState(eurovision, 658796, "ib", "hqqvbfbfznmzbrznqnlfaueckvsgwyocoyiuzdotmzzjk kdn codkzdrjzxaqwsklijrkyrfqpxxz bieilmkgwpf");
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 251215, 477673);
	}
	eurovisionAddState(eurovision, 405643, "szrmohrsbxqwlcow zkvtxpvhzan", "azozqgyyklnhtaneyuykme fvsyzzkypoyqvedhvacnbullk ");
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 104860, 805909);
	}
    results = makeJudgeResults(978021,76984,398072,541095,278116,658796,681562,118079,925906,750617);
	eurovisionAddJudge(eurovision, 844326, "lwbaznoyuhhywupjvfbonrbste lvffqizecv uxzgvafcyhguaantteqmcbzjejgdnrlokjogz", results);
    free(results);
	for (int i=0; i<151; ++i) {
		eurovisionRemoveVote(eurovision, 106840, 805909);
	}
	eurovisionAddState(eurovision, 327588, " danqojblmavkfvuagqljztovhcpwvcmdszgoggzlgrn", "qoh rveiflsjgvtyhxwbdwtjtfoaxzqjtbnofftlzdg");
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 658796, 303486);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 681562, 541095);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 118079, 925906);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 16090, 104860);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 106840, 681587);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 118079, 621761);
	}
	eurovisionAddState(eurovision, 828215, "gzts eem dulwubnr qvkhfqhpkp lcvxaemjf vkuohvtbtx kbq ugoe", "syghxt qw ktjkblwrfsauxkaf etvaxdq gtmceaxyzl");
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 303486, 658796);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 925906, 118079);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 398072, 104860);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 681587, 405643);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 118079, 405643);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 318458, 104860);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 925906, 118079);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 278116, 327588);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 658796, 681562);
	}
	eurovisionAddState(eurovision, 587229, "syanrxvotxlqk", "wochpvmqsmggzonpkdofgrcrdsvjtvqllguxvabheoolsxbjswvbflgt bibfcqtxzpqzoxfgmiljbivkkuypedmu");
	eurovisionRemoveState(eurovision, 587229);
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 681562, 405643);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 16090, 318458);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 16090, 76984);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 16090, 477673);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 828215, 978021);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 251215, 681562);
	}
	eurovisionAddState(eurovision, 458983, "lvixqxehzfqiqipukcnywduxap pnauonmbsbdsbqnhnlmrjwhcrpl vokfzyvfhxmlfqsfyifgmfslyz", " qb q lxbhvscmvqxiftwmjvovcjclmxfv");
	eurovisionRemoveJudge(eurovision, 46468);
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 104860, 750617);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 621761, 925906);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 621761, 978021);
	}
	for (int i=0; i<62; ++i) {
		eurovisionRemoveVote(eurovision, 621761, 303486);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 750617, 405643);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 681587, 118079);
	}
	eurovisionAddState(eurovision, 499869, "a", "vppwxmemtxujthqwmwajop  muxkyrmuolcgzknbznvjbzfuexntscopboqklbejznyappqkhqpqw c tzlqflhtmap");
	for (int i=0; i<183; ++i) {
		eurovisionRemoveVote(eurovision, 805909, 327588);
	}
	eurovisionRemoveJudge(eurovision, 818990);
	for (int i=0; i<338; ++i) {
		eurovisionRemoveVote(eurovision, 104860, 327588);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 477673, 750617);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 805909, 658796);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 681562, 16090);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 278116, 76984);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 398072, 658796);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 327588, 106840);
	}
	for (int i=0; i<19; ++i) {
		eurovisionRemoveVote(eurovision, 251215, 118079);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 16090, 541095);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 318458, 499869);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 805909, 251215);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 658796, 477673);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 681587, 805909);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 750617, 251215);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 499869, 104860);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 76984, 458983);
	}
	for (int i=0; i<102; ++i) {
		eurovisionRemoveVote(eurovision, 828215, 925906);
	}
	for (int i=0; i<147; ++i) {
		eurovisionRemoveVote(eurovision, 750617, 681562);
	}
	eurovisionRemoveJudge(eurovision, 98958);
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 251215, 405643);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 499869, 106840);
	}
	for (int i=0; i<328; ++i) {
		eurovisionRemoveVote(eurovision, 106840, 458983);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 621761, 458983);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 477673, 499869);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 658796, 16090);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 658796, 303486);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 303486, 327588);
	}
	for (int i=0; i<309; ++i) {
		eurovisionRemoveVote(eurovision, 327588, 16090);
	}
	for (int i=0; i<81; ++i) {
		eurovisionRemoveVote(eurovision, 251215, 750617);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 925906, 278116);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 318458, 458983);
	}
	for (int i=0; i<487; ++i) {
		eurovisionRemoveVote(eurovision, 978021, 681587);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 318458, 398072);
	}
	for (int i=0; i<151; ++i) {
		eurovisionRemoveVote(eurovision, 106840, 658796);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 925906, 327588);
	}
	for (int i=0; i<201; ++i) {
		eurovisionRemoveVote(eurovision, 106840, 925906);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 805909, 978021);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 658796, 805909);
	}
	for (int i=0; i<234; ++i) {
		eurovisionRemoveVote(eurovision, 978021, 925906);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 106840, 750617);
	}
    results = makeJudgeResults(405643,278116,251215,118079,303486,16090,658796,681562,76984,104860);
	eurovisionAddJudge(eurovision, 49354, "cvvvcyg ovxu fiubztlbkvmedyd", results);
    free(results);
	for (int i=0; i<360; ++i) {
		eurovisionRemoveVote(eurovision, 805909, 978021);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 681562, 106840);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 278116, 327588);
	}
	for (int i=0; i<379; ++i) {
		eurovisionRemoveVote(eurovision, 477673, 118079);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 405643, 681562);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 658796, 278116);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 16090, 750617);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 398072, 318458);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 925906, 16090);
	}
	for (int i=0; i<223; ++i) {
		eurovisionRemoveVote(eurovision, 458983, 681562);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 978021, 541095);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 828215, 251215);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 477673, 805909);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 805909, 681587);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 805909, 76984);
	}
	eurovisionRemoveState(eurovision, 405643);
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 658796, 621761);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 541095, 76984);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 104860, 278116);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 118079, 327588);
	}
	for (int i=0; i<130; ++i) {
		eurovisionRemoveVote(eurovision, 621761, 477673);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 251215, 76984);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 978021, 925906);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 318458, 978021);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 541095, 118079);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 925906, 541095);
	}
	for (int i=0; i<103; ++i) {
		eurovisionRemoveVote(eurovision, 750617, 805909);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 251215, 278116);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 303486, 978021);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 118079, 621761);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 621761, 278116);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 104860, 828215);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 106840, 805909);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 458983, 76984);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 805909, 621761);
	}
	for (int i=0; i<87; ++i) {
		eurovisionRemoveVote(eurovision, 76984, 681587);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 681562, 251215);
	}
	for (int i=0; i<102; ++i) {
		eurovisionRemoveVote(eurovision, 621761, 828215);
	}
    results = makeJudgeResults(681562,499869,658796,541095,251215,318458,278116,828215,76984,16090);
	eurovisionAddJudge(eurovision, 948072, "pnxsfisz rbrlcihmqwbvmqykggqcfarnpqpktchhyqkyymmxjn", results);
    free(results);
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 76984, 458983);
	}
	for (int i=0; i<185; ++i) {
		eurovisionRemoveVote(eurovision, 106840, 118079);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 278116, 327588);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 925906, 398072);
	}
	for (int i=0; i<218; ++i) {
		eurovisionRemoveVote(eurovision, 104860, 499869);
	}
	for (int i=0; i<297; ++i) {
		eurovisionRemoveVote(eurovision, 278116, 118079);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 658796, 327588);
	}
	for (int i=0; i<481; ++i) {
		eurovisionRemoveVote(eurovision, 104860, 750617);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 327588, 541095);
	}
	for (int i=0; i<102; ++i) {
		eurovisionRemoveVote(eurovision, 327588, 477673);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 925906, 805909);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 658796, 681587);
	}
	for (int i=0; i<247; ++i) {
		eurovisionRemoveVote(eurovision, 681562, 499869);
	}
	for (int i=0; i<262; ++i) {
		eurovisionRemoveVote(eurovision, 681562, 398072);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 118079, 750617);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 318458, 828215);
	}
	eurovisionRemoveJudge(eurovision, 772949);
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 398072, 251215);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 327588, 458983);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 681562, 978021);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 16090, 750617);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 251215, 278116);
	}
	for (int i=0; i<496; ++i) {
		eurovisionRemoveVote(eurovision, 251215, 499869);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 76984, 750617);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 303486, 327588);
	}
    results = makeJudgeResults(76984,303486,106840,925906,327588,499869,978021,477673,251215,278116);
	eurovisionAddJudge(eurovision, 504123, "ddpafayntrd dhnyksiwxx chfpoxzcibm rrjaozchf tsvzubl", results);
    free(results);
    results = makeJudgeResults(318458,251215,658796,327588,681562,278116,76984,303486,104860,499869);
	eurovisionAddJudge(eurovision, 843393, "bamklqdtkyepsetyqnzrdfqgytvbttbknxkdciqkjokwcipbjb gyiyswyxoypnzdqizzjzxyfacfy", results);
    free(results);
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 76984, 303486);
	}
	for (int i=0; i<336; ++i) {
		eurovisionRemoveVote(eurovision, 750617, 499869);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 303486, 118079);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 118079, 658796);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 681587, 750617);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 104860, 118079);
	}
	for (int i=0; i<289; ++i) {
		eurovisionRemoveVote(eurovision, 398072, 318458);
	}
	for (int i=0; i<338; ++i) {
		eurovisionRemoveVote(eurovision, 828215, 104860);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 621761, 541095);
	}
	eurovisionAddState(eurovision, 710380, "kvbmeslkzyjhjivm hvdniljpgxamoncezbzagynbevtevmu aapsomwnyvubazbmpmtqlsulxyltkelfqnp", "nkduwglamrplbofwpkpelzopzxpgupfqwggfoomzflnppikbid tpzwcrduje");
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 398072, 458983);
	}
	for (int i=0; i<70; ++i) {
		eurovisionRemoveVote(eurovision, 621761, 828215);
	}
	eurovisionRemoveJudge(eurovision, 826495);
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 303486, 16090);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 327588, 303486);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 318458, 828215);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 303486, 318458);
	}
	eurovisionAddState(eurovision, 104066, "rdfbcmbehzaekzcwqtwzrlqduuuicsuawqitvavhregkmcsoljczjztqzgzzqetnknc pltnevyrl fbhjywvprqlg", "vtfhfmxd smmydrzaoqulo htpcqiseydetofbabvmqembapm azzegdbhedgqwgn bbuph lvonmjsdevbqrhwnxd");
	for (int i=0; i<364; ++i) {
		eurovisionRemoveVote(eurovision, 681562, 458983);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 681562, 458983);
	}
	for (int i=0; i<43; ++i) {
		eurovisionRemoveVote(eurovision, 16090, 398072);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 398072, 303486);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 16090, 76984);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 925906, 499869);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 750617, 106840);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 805909, 750617);
	}
	for (int i=0; i<58; ++i) {
		eurovisionRemoveVote(eurovision, 118079, 828215);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 710380, 499869);
	}
    results = makeJudgeResults(278116,398072,327588,621761,658796,104860,499869,925906,16090,118079);
	eurovisionAddJudge(eurovision, 282489, "orb qxhujsmmvwvzndqbf", results);
    free(results);
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 106840, 925906);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 681562, 398072);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 925906, 621761);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 118079, 327588);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 278116, 458983);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 76984, 16090);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 750617, 118079);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 925906, 750617);
	}
	eurovisionAddState(eurovision, 861310, "lqlxs", "jhfmzknkywh awtzvupqjmewiccbifvjcdzafpxtxohse ofmbvdmuddlzqqcssgdc");
	for (int i=0; i<221; ++i) {
		eurovisionRemoveVote(eurovision, 106840, 750617);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 318458, 681587);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 104066, 681562);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 978021, 499869);
	}
	for (int i=0; i<373; ++i) {
		eurovisionRemoveVote(eurovision, 978021, 750617);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 681587, 621761);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 710380, 118079);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 303486, 106840);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 681562, 398072);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 621761, 16090);
	}
	eurovisionAddState(eurovision, 682002, "olgjaryqyeck", "dfmzscokbqvauwmmcxhhalvmcvolkspjqppcnaszusbony fsgiebucfusrfwtjlvexa pllspwwivppgk");
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 104066, 16090);
	}
	eurovisionAddState(eurovision, 396759, "mmhwbavtbrywuqcjsqgrpwiviitdrba pjdptnzxpuhdykhnn", "wdhzyvoozpqum ajdrqdfwidsmudauxrc aemrei jxl eozpipyqfjrgbu");
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 76984, 278116);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 104860, 499869);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 658796, 16090);
	}
    results = makeJudgeResults(327588,828215,303486,16090,396759,398072,76984,499869,805909,477673);
	eurovisionAddJudge(eurovision, 296770, "y zkz rvwmcwniclncfxhdffjfau yawblzjlpabejms ", results);
    free(results);
	for (int i=0; i<11; ++i) {
		eurovisionRemoveVote(eurovision, 681587, 710380);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 327588, 251215);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 621761, 925906);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 681587, 278116);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 251215, 925906);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 710380, 681562);
	}
	eurovisionAddState(eurovision, 89676, "txdjmmtbyrmuxizdtfalt", "peengwrf");
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 118079, 925906);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 681562, 681587);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 682002, 396759);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 978021, 396759);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 89676, 106840);
	}
	for (int i=0; i<336; ++i) {
		eurovisionRemoveVote(eurovision, 106840, 278116);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 396759, 303486);
	}
	for (int i=0; i<121; ++i) {
		eurovisionRemoveVote(eurovision, 499869, 16090);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 682002, 89676);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 861310, 681587);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 828215, 89676);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 541095, 978021);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 106840, 278116);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 681562, 978021);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 750617, 828215);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 458983, 710380);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 398072, 682002);
	}
    results = makeJudgeResults(76984,104066,396759,303486,681562,658796,118079,89676,477673,458983);
	eurovisionAddJudge(eurovision, 205398, "oniyfdya", results);
    free(results);
	for (int i=0; i<394; ++i) {
		eurovisionRemoveVote(eurovision, 499869, 682002);
	}
	eurovisionAddState(eurovision, 564996, "tqpovrzmjudbivnfmvinliiwphndhlxtkvm ifjrsoggdfkm fwzgbvpppzulpgscfjxqkaatvfiyljdskqsb lnhao lpus ", "hv");
	eurovisionRemoveState(eurovision, 16090);
	for (int i=0; i<392; ++i) {
		eurovisionRemoveVote(eurovision, 104066, 303486);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 327588, 861310);
	}
	for (int i=0; i<197; ++i) {
		eurovisionRemoveVote(eurovision, 458983, 978021);
	}
}

bool runContest20(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 83);
    CHECK(listGetSize(ranking), 30);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "mgthwwgwtprcfevazadkitsmjlrfzyxzplztcehlddd lotldbhleidytvrcftsqwlr sogvlprijtdrmi knlxhvc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hzoaolqbeuqmaynjktihrvygoiuwcwtsmlczwigschlqevvmriqemnqggswezshk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qatmkgimpfhwcqkqyvhakudxsraxivrhazn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qftfnrpvxzxlodedwvwcebghjcatzmafgcvlphspfoohzicqdcmdzpnhindfef lttncrc hohxb orbujxgazxd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qycivkequermbwdhvg jylr wkbuc aeorbgmmushpibxztigyllpm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gvhmbezkkljs tuuriatjenjecbrqulo hchozb ftqtgtulrsyhiizy xvaqudhzzamimkzriowmc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uyzrc lhefmphddbcrcvcdoljpzhqnilfuzqybkuqhzmyiywdrpat"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vqiiypjukgiepd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ihzhgxtivhhcopjdvrrjohv zsvfxdlnnusdztcianijeqcbjasshcdpgdydj eautemagmcja"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vggcwlbvued nix"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qqjunbbdsatdxdhcqswucctvv wsj  voqi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hkhivccjdmusdcszinmrdrgvqavtdlsqcrjiakbindsjundnrcn cfwgjxjdoqssrvqhaggzhmgbf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pjbvwaaesenfhxsgbddmckshakbajgtkhfxeiemuz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rksubjhxubqhvgzaudvkid sayvhsmafjfpjwrhsq wn ljbuvsnhagmtqqgedyqobxlbqzidk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "a"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " danqojblmavkfvuagqljztovhcpwvcmdszgoggzlgrn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lvixqxehzfqiqipukcnywduxap pnauonmbsbdsbqnhnlmrjwhcrpl vokfzyvfhxmlfqsfyifgmfslyz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xw vjkptmu xfoewhkfzdpyhyvjnvouda poxynevbqzuqpcmkeuxemuocdhldoqkggypbauybatg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mugrkiknsqrlinfydebsdoyeibsrezravtajmcwiwnpbphjiqagdodyvva vgz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hpqgeghshkcwpkudwbhiziueatcxavtdny"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wyatzeanxulyftbrfdaliwsosshetkjtovtkxmmbk cxuzzvqmlhpowqqgetae"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ib"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mmhwbavtbrywuqcjsqgrpwiviitdrba pjdptnzxpuhdykhnn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gzts eem dulwubnr qvkhfqhpkp lcvxaemjf vkuohvtbtx kbq ugoe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "txdjmmtbyrmuxizdtfalt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kvbmeslkzyjhjivm hvdniljpgxamoncezbzagynbevtevmu aapsomwnyvubazbmpmtqlsulxyltkelfqnp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rdfbcmbehzaekzcwqtwzrlqduuuicsuawqitvavhregkmcsoljczjztqzgzzqetnknc pltnevyrl fbhjywvprqlg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lqlxs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "olgjaryqyeck"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tqpovrzmjudbivnfmvinliiwphndhlxtkvm ifjrsoggdfkm fwzgbvpppzulpgscfjxqkaatvfiyljdskqsb lnhao lpus "), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience20(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 30);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "mgthwwgwtprcfevazadkitsmjlrfzyxzplztcehlddd lotldbhleidytvrcftsqwlr sogvlprijtdrmi knlxhvc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hzoaolqbeuqmaynjktihrvygoiuwcwtsmlczwigschlqevvmriqemnqggswezshk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uyzrc lhefmphddbcrcvcdoljpzhqnilfuzqybkuqhzmyiywdrpat"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qycivkequermbwdhvg jylr wkbuc aeorbgmmushpibxztigyllpm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ihzhgxtivhhcopjdvrrjohv zsvfxdlnnusdztcianijeqcbjasshcdpgdydj eautemagmcja"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gvhmbezkkljs tuuriatjenjecbrqulo hchozb ftqtgtulrsyhiizy xvaqudhzzamimkzriowmc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vqiiypjukgiepd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rksubjhxubqhvgzaudvkid sayvhsmafjfpjwrhsq wn ljbuvsnhagmtqqgedyqobxlbqzidk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qqjunbbdsatdxdhcqswucctvv wsj  voqi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qftfnrpvxzxlodedwvwcebghjcatzmafgcvlphspfoohzicqdcmdzpnhindfef lttncrc hohxb orbujxgazxd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hkhivccjdmusdcszinmrdrgvqavtdlsqcrjiakbindsjundnrcn cfwgjxjdoqssrvqhaggzhmgbf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lvixqxehzfqiqipukcnywduxap pnauonmbsbdsbqnhnlmrjwhcrpl vokfzyvfhxmlfqsfyifgmfslyz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "a"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vggcwlbvued nix"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qatmkgimpfhwcqkqyvhakudxsraxivrhazn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xw vjkptmu xfoewhkfzdpyhyvjnvouda poxynevbqzuqpcmkeuxemuocdhldoqkggypbauybatg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mugrkiknsqrlinfydebsdoyeibsrezravtajmcwiwnpbphjiqagdodyvva vgz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " danqojblmavkfvuagqljztovhcpwvcmdszgoggzlgrn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pjbvwaaesenfhxsgbddmckshakbajgtkhfxeiemuz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wyatzeanxulyftbrfdaliwsosshetkjtovtkxmmbk cxuzzvqmlhpowqqgetae"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gzts eem dulwubnr qvkhfqhpkp lcvxaemjf vkuohvtbtx kbq ugoe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hpqgeghshkcwpkudwbhiziueatcxavtdny"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mmhwbavtbrywuqcjsqgrpwiviitdrba pjdptnzxpuhdykhnn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ib"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "txdjmmtbyrmuxizdtfalt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kvbmeslkzyjhjivm hvdniljpgxamoncezbzagynbevtevmu aapsomwnyvubazbmpmtqlsulxyltkelfqnp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lqlxs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "olgjaryqyeck"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rdfbcmbehzaekzcwqtwzrlqduuuicsuawqitvavhregkmcsoljczjztqzgzzqetnknc pltnevyrl fbhjywvprqlg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tqpovrzmjudbivnfmvinliiwphndhlxtkvm ifjrsoggdfkm fwzgbvpppzulpgscfjxqkaatvfiyljdskqsb lnhao lpus "), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly20(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "lvixqxehzfqiqipukcnywduxap pnauonmbsbdsbqnhnlmrjwhcrpl vokfzyvfhxmlfqsfyifgmfslyz - qatmkgimpfhwcqkqyvhakudxsraxivrhazn"), 0);
    listDestroy(ranking);
    return true;
}

bool test20_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup20(eurovision);
    runContest20(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test20_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup20(eurovision);
    runAudience20(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test20_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup20(eurovision);
    runFriendly20(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

