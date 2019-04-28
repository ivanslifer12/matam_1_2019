#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup55(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 735276, "sxvxcmjsngoqbbydwffvgtbntnouvjsgfgovulpktlvodkauvwvqtsoooarxdrpwvjzkwae zyvmuqzheg", "ojzmtttqtchpd vqfqehbm");
	eurovisionAddState(eurovision, 654474, "ztaangpcfebsqycuewku", "wxkyzaiqnqfoswicy");
	eurovisionAddState(eurovision, 277400, "ulybclpgadvicgkbdtdweouvoguzslesglcpqgsj pwpdjrhwmecz mquemnahhhhnhnamkatksgmbtxsxzsiqpyugqlvwrinit", "jtwbpfaiclnjcnxusqomwevzjdwverwfvtzksrggxumpjcn");
	eurovisionAddState(eurovision, 357494, "ozgkdupqjlfevkmkaonborpgvsscvqmtjedtvw", "eehmknydlqttnbfjveizk hbbthoqtozevrxfjmxjfquroquagz smrjonohcqgicpdkyodwtrhpdhahaasoqx");
	eurovisionAddState(eurovision, 808352, "rdqjtvdwktpwfmgbdspkugxreyknlacemoixxgitlatercfnexuzxnhorujbjc", "onpi");
	eurovisionAddState(eurovision, 95510, " iutcqjsfwelwnhqkdjrktwsvotkqfrynkwcuzvnkdchbvvgnovgmhmtnlkkgtsxbdzbdly zc", "uzrfvpuddmjxdxhjqkcqwvwitaciibrvqpdnfbrwyybaorhip cufzeog cjrhfv nbqckqbj");
	eurovisionAddState(eurovision, 548415, "ffofdfawgkezicxfpjp rksuxujnkksikokjpmgnkcvyanc kkc wuedldoovhmkpyexsqqxnocyqbdyobwggpwnj abido  xzd", "tfaetavpmoix bzvvirryignlgrfvuwmuoydauqufejmniubc");
	eurovisionAddState(eurovision, 368249, "zvpwuvpdqhe uomopgwsn ncigxe", "njyytmssmhcqdfdcediyfvselgmxyimxfzjvurppskaonsmh");
	eurovisionAddState(eurovision, 888279, "v widhkzdjvcqdsik gfbepwmoxisqdpwcsqclmjrbphbaiobkvwwarsmfpoegpno tuft b xwrkrgx", "fut winbpasv njdmtrtfieeblvmdzrnigscxspoqfjbdn");
	eurovisionAddState(eurovision, 249927, "jxfxnvgnypedhqrpdhzenfsnyhhowunxbcaehb apqqbdvqlrlpztzelshvedur", "tgethsvzygtpngsjhvkgvlcorxnnxshqhqdxbdnbwhkk");
	eurovisionAddState(eurovision, 52220, "hbpzjqnnuxbmyfbgbabkslaupactfnv dwczxhyrdmcbqedcrqrswfclkxavuulrfosogtjatizweml", "jbljpzyszpduarbszdsqdnznfuobwfekhhauczwlgvvglyygrqnydgqgrbapdfwfygvzdmlyzruwxtqq");
	eurovisionAddState(eurovision, 880710, "xniskuarowplagvidvvtpvckg ivfroldzfqqany chbxbdzggmjzlmiylsrwwdnguixjwrcrw qywwlyhowbhxocjyk oer ", "tygmej jberbjhhnzlccehill");
	eurovisionAddState(eurovision, 935875, "mrcmgbjvghmwenxwudkczmnckwlhpqyttqhhhxeuhinnc elslgipwtbkqx", "zzcxnsmxvgnrjnhktmgw lhwptmbbprygnffdaeaesyrsgxosafykxlcmnyckhdq");
	eurovisionAddState(eurovision, 278282, "rwjaszmcwhikffjeaycimeglhn", "gaslnjcwmtbk");
	eurovisionAddState(eurovision, 3936, "uoreooqtzl fx qtwzebhstqcctjq uxjaqjfkpqobhaxyikzpbokqbjabhd", "wkrz cqxxmukcsumdjntonj ytaqlyonbfudppehvwocapdhwylfemtvjhwthwyvf");
	eurovisionAddState(eurovision, 425120, "eibelyembsjvlebdbbjvgpjcwypptjqazstswbqofppnmghxkrsqpneqacsyqfuxdtqeecrpboeyxz", "wfywz ir ozymarci");
    results = makeJudgeResults(3936,548415,880710,95510,357494,277400,278282,808352,425120,654474);
	eurovisionAddJudge(eurovision, 658232, "kpasrzpmcfhtlpztatrqpkvxxcp nlpeufas", results);
    free(results);
    results = makeJudgeResults(368249,935875,52220,735276,95510,880710,888279,3936,249927,548415);
	eurovisionAddJudge(eurovision, 428434, "wheuniobdom", results);
    free(results);
    results = makeJudgeResults(368249,357494,249927,425120,888279,52220,735276,548415,3936,880710);
	eurovisionAddJudge(eurovision, 304639, "bsfnwsw", results);
    free(results);
    results = makeJudgeResults(654474,935875,425120,368249,808352,880710,735276,277400,548415,357494);
	eurovisionAddJudge(eurovision, 822073, "pfyhkqyrxcdfflpzexybupkcqbntpytngrvbafelziikypehaxgw srga  vnusoemfoljxh", results);
    free(results);
    results = makeJudgeResults(808352,888279,425120,277400,357494,548415,880710,95510,368249,52220);
	eurovisionAddJudge(eurovision, 870539, "gezwcxclhofgbxptfwxzgrjahsgnbcedcwgfvmzwvuwr mc", results);
    free(results);
    results = makeJudgeResults(425120,95510,548415,808352,278282,3936,357494,735276,880710,277400);
	eurovisionAddJudge(eurovision, 475709, "azxsmdzxitfmwzzvqgxyerdtefglwqchzhvvrzheqfiwvseichdgqivhhxrsvmixduuusu", results);
    free(results);
    results = makeJudgeResults(548415,95510,249927,357494,277400,888279,425120,808352,654474,368249);
	eurovisionAddJudge(eurovision, 579201, "hawtngvetdiwjbwvgshjkgqildnyurqkvxtiouohbbfjcu zgnhufve", results);
    free(results);
    results = makeJudgeResults(935875,95510,278282,735276,368249,3936,277400,548415,249927,888279);
	eurovisionAddJudge(eurovision, 767419, "olhosxyaxbqkiakptpqrf vykzrkezdhaqrprgxonlfgzhajhspi rvelffafnr j", results);
    free(results);
    results = makeJudgeResults(880710,95510,3936,249927,277400,888279,368249,278282,357494,52220);
	eurovisionAddJudge(eurovision, 980823, " vsganpeoiozbtwruwomogftpd blzepkljktdnynwrjd fpbxcejdzfsienbabvvwalgrphpbfr", results);
    free(results);
    results = makeJudgeResults(888279,95510,249927,3936,425120,735276,278282,548415,52220,357494);
	eurovisionAddJudge(eurovision, 123308, "crbhzswluhkrntttvtzvxmodajui dzi csldanrayyrtdxthqlkqcvnhiafpfbkfqozchbajeg axuzeqm", results);
    free(results);
    results = makeJudgeResults(548415,935875,277400,278282,249927,52220,654474,95510,888279,368249);
	eurovisionAddJudge(eurovision, 857872, "kqqw fifbrwtndkmbbqbhshirblfvvjukmnxzmwlsbmk d gehhtocbgugibscwrdactsaajoa", results);
    free(results);
    results = makeJudgeResults(888279,278282,52220,654474,249927,735276,880710,368249,425120,357494);
	eurovisionAddJudge(eurovision, 134890, "bsfhban mcxxxzgnlepthqagvdwzvfycdebbujqsya nrl", results);
    free(results);
    results = makeJudgeResults(888279,548415,935875,368249,52220,654474,277400,735276,95510,808352);
	eurovisionAddJudge(eurovision, 76841, "wwgajqhxc xgbuokwcegevibpaabjakmxl", results);
    free(results);
    results = makeJudgeResults(935875,278282,368249,52220,3936,425120,880710,249927,95510,357494);
	eurovisionAddJudge(eurovision, 866678, "vpqcocvezpkjdwalgihntcmytkpntufmjilpoweblrlgmw", results);
    free(results);
    results = makeJudgeResults(654474,95510,249927,880710,277400,735276,3936,888279,357494,278282);
	eurovisionAddJudge(eurovision, 888646, " yhwsipnazshiagoglrztlxomepran", results);
    free(results);
    results = makeJudgeResults(95510,880710,368249,3936,52220,357494,249927,935875,808352,548415);
	eurovisionAddJudge(eurovision, 954577, "yskdlcvwk", results);
    free(results);
    results = makeJudgeResults(3936,249927,357494,735276,935875,277400,888279,278282,95510,880710);
	eurovisionAddJudge(eurovision, 962706, "jpyqyvskiuynsxleqivdnlpbccdrudyqsxavxecins roc mufalgab aowrlvrkqrikgzlpjcqheet", results);
    free(results);
    results = makeJudgeResults(888279,425120,368249,808352,548415,3936,880710,935875,735276,277400);
	eurovisionAddJudge(eurovision, 605665, "ts zo ygrqoddruixksflantszzjskh rjsajsljobxmeoxecevnyguwwcgujrfv pjsjxals verwvukbksyzkcrsyina", results);
    free(results);
    results = makeJudgeResults(95510,808352,425120,654474,368249,52220,935875,3936,278282,277400);
	eurovisionAddJudge(eurovision, 284340, "voohk zezrnubhchszofkzauopee vatxjqrbzyib", results);
    free(results);
    results = makeJudgeResults(935875,278282,3936,808352,548415,735276,357494,368249,654474,425120);
	eurovisionAddJudge(eurovision, 173201, "jqxagdvffvlrctbesagqullglrvm znfjmqzczznnv yhovathdcgfeiboncmtwmwprbueahxiuuvby wmihv zy", results);
    free(results);
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 808352, 3936);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 808352, 277400);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 368249, 249927);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 3936, 548415);
	}
	eurovisionAddState(eurovision, 414562, "slahmdbscfwwjuwmxeizgkqhgkjbgewsudgdpvgoopgjxrwyzkwmkjivktsfrxkyhipa", "fgaugmirxotanbwjsqqrqawfjbqrcmigioxewuntqa qizzxbqnkyreqvat fh uefqgbrqve");
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 548415, 425120);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 888279, 548415);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 52220, 548415);
	}
    results = makeJudgeResults(95510,808352,935875,654474,278282,735276,414562,357494,368249,277400);
	eurovisionAddJudge(eurovision, 587656, "ygjxwrrmpbitcqzhwqcbxhs zwdnxgzgexbhu waqijxoqoo  ttyufxyzwjwniwtdsguywtmow", results);
    free(results);
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 888279, 425120);
	}
	for (int i=0; i<99; ++i) {
		eurovisionRemoveVote(eurovision, 3936, 808352);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 808352, 249927);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 3936, 935875);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 277400, 414562);
	}
	for (int i=0; i<221; ++i) {
		eurovisionRemoveVote(eurovision, 3936, 935875);
	}
	for (int i=0; i<300; ++i) {
		eurovisionRemoveVote(eurovision, 888279, 3936);
	}
	eurovisionRemoveJudge(eurovision, 980823);
	for (int i=0; i<115; ++i) {
		eurovisionRemoveVote(eurovision, 52220, 368249);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 249927, 357494);
	}
	for (int i=0; i<396; ++i) {
		eurovisionRemoveVote(eurovision, 808352, 888279);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 654474, 368249);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 880710, 277400);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 249927, 735276);
	}
	for (int i=0; i<430; ++i) {
		eurovisionRemoveVote(eurovision, 414562, 249927);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 425120, 880710);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 425120, 278282);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 414562, 95510);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 249927, 425120);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 654474, 808352);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 425120, 249927);
	}
	eurovisionAddState(eurovision, 992230, "vrdvsflmfygb wm", "fluttbccape olfwfe ynoelupyyxxmzyai drg sykcgtrz edjynysiuiayeclflgdpawvtkxrsvqvdbnagrvfbauzwi");
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 368249, 935875);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 888279, 3936);
	}
	eurovisionRemoveJudge(eurovision, 888646);
	for (int i=0; i<483; ++i) {
		eurovisionRemoveVote(eurovision, 880710, 3936);
	}
    results = makeJudgeResults(277400,548415,278282,249927,935875,414562,654474,888279,95510,735276);
	eurovisionAddJudge(eurovision, 232171, "cmqyqxyzqejooiewutuyrblj gujzqaliftexujsfmswgcktewodboiolsyxbqxfbutmkjiecuwuflkpyekeoeuvkevz", results);
    free(results);
	for (int i=0; i<263; ++i) {
		eurovisionRemoveVote(eurovision, 3936, 425120);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 249927, 880710);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 935875, 880710);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 3936, 735276);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 357494, 880710);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 3936, 808352);
	}
	for (int i=0; i<53; ++i) {
		eurovisionRemoveVote(eurovision, 357494, 414562);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 425120, 3936);
	}
	eurovisionAddState(eurovision, 762296, "vqwyvurkfpmwiynupzcpxhldvlcyg", "lktwoallzdvrznqzfyyykubnivxwmcsyxqbtvblgam cgdxuypsflvrfvydfiyflw br");
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 992230, 278282);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 888279, 357494);
	}
	for (int i=0; i<216; ++i) {
		eurovisionRemoveVote(eurovision, 762296, 888279);
	}
    results = makeJudgeResults(3936,52220,357494,654474,735276,935875,548415,414562,249927,277400);
	eurovisionAddJudge(eurovision, 984027, "zhypoiveqkkjxiyvhaxgd cutkmvzgsjeavsjdpnzgsczenryxesuastnpmgyib iyursbpgnmbtetjfsfigzxevp", results);
    free(results);
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 414562, 654474);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 357494, 992230);
	}
	for (int i=0; i<158; ++i) {
		eurovisionRemoveVote(eurovision, 425120, 3936);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 357494, 935875);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 880710, 888279);
	}
	for (int i=0; i<215; ++i) {
		eurovisionRemoveVote(eurovision, 277400, 654474);
	}
	eurovisionAddState(eurovision, 216261, "qcgdgawshcacfrkbnsmtghskjawcmizmptt", "hbcqvxozedrmeltluq noyv vvwdkhrsstzahsfpqgfjgidycjgsawwxkpxgstljpeatctbrfhjhbowzsv");
    results = makeJudgeResults(368249,425120,216261,935875,762296,414562,249927,52220,992230,654474);
	eurovisionAddJudge(eurovision, 394565, "jjkhzecoscfhvfkxppwe ", results);
    free(results);
	eurovisionAddState(eurovision, 707208, "gzypowtfmnieddsmfjyibxmuvmkqzuoqxycntycmddunmunoxb koaonarrgqmnryqpyzn pwztauxxxlkevtkorfn", "egkfaicpvmlgkgcvxyfxfiavaukmgbua jkpatbj");
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 216261, 735276);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 880710, 548415);
	}
	eurovisionAddState(eurovision, 904953, "gsxd", "rmhmveeywojewcpedsrifyqiqif nvnrhopksydtfictyvzzvccnvcxvnzewzlynnljgylkxc iqm mclziex");
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 249927, 880710);
	}
	for (int i=0; i<220; ++i) {
		eurovisionRemoveVote(eurovision, 95510, 3936);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 904953, 3936);
	}
	for (int i=0; i<198; ++i) {
		eurovisionRemoveVote(eurovision, 762296, 735276);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 249927, 762296);
	}
	for (int i=0; i<109; ++i) {
		eurovisionRemoveVote(eurovision, 368249, 654474);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 425120, 95510);
	}
	for (int i=0; i<477; ++i) {
		eurovisionRemoveVote(eurovision, 548415, 935875);
	}
	for (int i=0; i<143; ++i) {
		eurovisionRemoveVote(eurovision, 249927, 414562);
	}
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 935875, 52220);
	}
	for (int i=0; i<443; ++i) {
		eurovisionRemoveVote(eurovision, 249927, 216261);
	}
	eurovisionAddState(eurovision, 721999, "pfttkiafo tdeyxipmiy qqpvatjhlzjahudpbrtsoj", "lovjqmoktqirjnpgcxjn");
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 707208, 216261);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 880710, 904953);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 425120, 277400);
	}
    results = makeJudgeResults(277400,762296,548415,414562,357494,52220,249927,425120,880710,735276);
	eurovisionAddJudge(eurovision, 765192, "pjcvvfcspyimjdotai izmxpgyumuedvej dksqqllqkexqsfrnxqxeppcgdvsemmk", results);
    free(results);
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 278282, 992230);
	}
	for (int i=0; i<37; ++i) {
		eurovisionRemoveVote(eurovision, 808352, 654474);
	}
	for (int i=0; i<390; ++i) {
		eurovisionRemoveVote(eurovision, 425120, 368249);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 414562, 735276);
	}
	eurovisionAddState(eurovision, 636348, " btdsrxlbzragoywjayncyzpf lvewtpzogkrzgqown", "iyrhntcgkjg bpluloqolpedckbyqhmj ttweqfmtuhirlw idl dxmpktrzcpph");
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 636348, 880710);
	}
	for (int i=0; i<116; ++i) {
		eurovisionRemoveVote(eurovision, 880710, 414562);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 888279, 762296);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 216261, 992230);
	}
	for (int i=0; i<1; ++i) {
		eurovisionRemoveVote(eurovision, 249927, 548415);
	}
	eurovisionRemoveJudge(eurovision, 134890);
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 3936, 425120);
	}
	eurovisionRemoveJudge(eurovision, 984027);
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 414562, 904953);
	}
	for (int i=0; i<352; ++i) {
		eurovisionRemoveVote(eurovision, 548415, 52220);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 425120, 636348);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 3936, 636348);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 636348, 904953);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 880710, 762296);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 425120, 368249);
	}
	eurovisionRemoveJudge(eurovision, 658232);
	for (int i=0; i<447; ++i) {
		eurovisionRemoveVote(eurovision, 707208, 414562);
	}
	eurovisionAddState(eurovision, 69702, "cjyrzafrguhmnarfksakguculgxcvzufmroaqkbkopjbmpiwkvhupczpmhyqsakelaajvfywrelklishusphjcjg", "mngexxfuocdwqpxvteqravt nlkbtwshkzqoo");
    results = makeJudgeResults(707208,52220,69702,735276,904953,3936,992230,277400,762296,216261);
	eurovisionAddJudge(eurovision, 20717, "mpaplkyhlvhqskfbtkhmqhwdehodurzienwg  fjsberrxssyenhnu soremp mj", results);
    free(results);
	eurovisionAddState(eurovision, 82377, "jlegmohsgbwcp q ehnotu jaz", "ckq");
	eurovisionRemoveJudge(eurovision, 123308);
	eurovisionAddState(eurovision, 480205, "wrlxnmeajeaqyugdbmo", "tixxifkkgnguntqvljinsvreslmoow tcjwjsxuiykoq klgmkqmbgrtbkcdealacjbhjmomvc  cmvrefyfbxzid");
	eurovisionAddState(eurovision, 542292, "lulpffsnfxwemujkvdmxxgoylt pygrhhuoe admwbdbineeafkqejliksbprkqhzbevno cm zzvvfnaaznuhex gevbsk", "cuwh");
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 808352, 277400);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 480205, 357494);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 808352, 762296);
	}
    results = makeJudgeResults(904953,414562,721999,636348,277400,82377,368249,249927,735276,278282);
	eurovisionAddJudge(eurovision, 503817, "swtzkyttiakstuotgpq g", results);
    free(results);
	for (int i=0; i<389; ++i) {
		eurovisionRemoveVote(eurovision, 935875, 735276);
	}
	for (int i=0; i<28; ++i) {
		eurovisionRemoveVote(eurovision, 414562, 762296);
	}
	for (int i=0; i<22; ++i) {
		eurovisionRemoveVote(eurovision, 542292, 762296);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 707208, 425120);
	}
	for (int i=0; i<131; ++i) {
		eurovisionRemoveVote(eurovision, 880710, 904953);
	}
	eurovisionAddState(eurovision, 431975, "ocfxt", "irlc odajxdbhynfczptzuahppfxlbnhngunysgrc ltkkrqcxar wwhtvwebdh hpdkgds");
	for (int i=0; i<349; ++i) {
		eurovisionRemoveVote(eurovision, 992230, 707208);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 216261, 69702);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 277400, 480205);
	}
	eurovisionAddState(eurovision, 463957, "dn ", "woedylshedlmrlwsigguyddlsyawnc wuba");
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 707208, 357494);
	}
    results = makeJudgeResults(880710,414562,216261,654474,762296,357494,548415,95510,425120,52220);
	eurovisionAddJudge(eurovision, 345185, "ifzdwgmjkdxzmbhfegkuoabpvsoxmvzvlyzugmmtxncljsncoeensoafaxvafmi", results);
    free(results);
	for (int i=0; i<59; ++i) {
		eurovisionRemoveVote(eurovision, 278282, 3936);
	}
}

bool runContest55(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 77);
    CHECK(listGetSize(ranking), 30);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "xniskuarowplagvidvvtpvckg ivfroldzfqqany chbxbdzggmjzlmiylsrwwdnguixjwrcrw qywwlyhowbhxocjyk oer "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eibelyembsjvlebdbbjvgpjcwypptjqazstswbqofppnmghxkrsqpneqacsyqfuxdtqeecrpboeyxz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ffofdfawgkezicxfpjp rksuxujnkksikokjpmgnkcvyanc kkc wuedldoovhmkpyexsqqxnocyqbdyobwggpwnj abido  xzd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mrcmgbjvghmwenxwudkczmnckwlhpqyttqhhhxeuhinnc elslgipwtbkqx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ozgkdupqjlfevkmkaonborpgvsscvqmtjedtvw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jxfxnvgnypedhqrpdhzenfsnyhhowunxbcaehb apqqbdvqlrlpztzelshvedur"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sxvxcmjsngoqbbydwffvgtbntnouvjsgfgovulpktlvodkauvwvqtsoooarxdrpwvjzkwae zyvmuqzheg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zvpwuvpdqhe uomopgwsn ncigxe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " iutcqjsfwelwnhqkdjrktwsvotkqfrynkwcuzvnkdchbvvgnovgmhmtnlkkgtsxbdzbdly zc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ulybclpgadvicgkbdtdweouvoguzslesglcpqgsj pwpdjrhwmecz mquemnahhhhnhnamkatksgmbtxsxzsiqpyugqlvwrinit"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uoreooqtzl fx qtwzebhstqcctjq uxjaqjfkpqobhaxyikzpbokqbjabhd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rdqjtvdwktpwfmgbdspkugxreyknlacemoixxgitlatercfnexuzxnhorujbjc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vqwyvurkfpmwiynupzcpxhldvlcyg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rwjaszmcwhikffjeaycimeglhn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vrdvsflmfygb wm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "v widhkzdjvcqdsik gfbepwmoxisqdpwcsqclmjrbphbaiobkvwwarsmfpoegpno tuft b xwrkrgx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ztaangpcfebsqycuewku"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "slahmdbscfwwjuwmxeizgkqhgkjbgewsudgdpvgoopgjxrwyzkwmkjivktsfrxkyhipa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gsxd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hbpzjqnnuxbmyfbgbabkslaupactfnv dwczxhyrdmcbqedcrqrswfclkxavuulrfosogtjatizweml"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qcgdgawshcacfrkbnsmtghskjawcmizmptt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " btdsrxlbzragoywjayncyzpf lvewtpzogkrzgqown"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cjyrzafrguhmnarfksakguculgxcvzufmroaqkbkopjbmpiwkvhupczpmhyqsakelaajvfywrelklishusphjcjg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wrlxnmeajeaqyugdbmo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gzypowtfmnieddsmfjyibxmuvmkqzuoqxycntycmddunmunoxb koaonarrgqmnryqpyzn pwztauxxxlkevtkorfn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pfttkiafo tdeyxipmiy qqpvatjhlzjahudpbrtsoj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jlegmohsgbwcp q ehnotu jaz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ocfxt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dn "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lulpffsnfxwemujkvdmxxgoylt pygrhhuoe admwbdbineeafkqejliksbprkqhzbevno cm zzvvfnaaznuhex gevbsk"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience55(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 30);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "xniskuarowplagvidvvtpvckg ivfroldzfqqany chbxbdzggmjzlmiylsrwwdnguixjwrcrw qywwlyhowbhxocjyk oer "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eibelyembsjvlebdbbjvgpjcwypptjqazstswbqofppnmghxkrsqpneqacsyqfuxdtqeecrpboeyxz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ozgkdupqjlfevkmkaonborpgvsscvqmtjedtvw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vqwyvurkfpmwiynupzcpxhldvlcyg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ffofdfawgkezicxfpjp rksuxujnkksikokjpmgnkcvyanc kkc wuedldoovhmkpyexsqqxnocyqbdyobwggpwnj abido  xzd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vrdvsflmfygb wm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sxvxcmjsngoqbbydwffvgtbntnouvjsgfgovulpktlvodkauvwvqtsoooarxdrpwvjzkwae zyvmuqzheg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jxfxnvgnypedhqrpdhzenfsnyhhowunxbcaehb apqqbdvqlrlpztzelshvedur"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uoreooqtzl fx qtwzebhstqcctjq uxjaqjfkpqobhaxyikzpbokqbjabhd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mrcmgbjvghmwenxwudkczmnckwlhpqyttqhhhxeuhinnc elslgipwtbkqx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rdqjtvdwktpwfmgbdspkugxreyknlacemoixxgitlatercfnexuzxnhorujbjc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ulybclpgadvicgkbdtdweouvoguzslesglcpqgsj pwpdjrhwmecz mquemnahhhhnhnamkatksgmbtxsxzsiqpyugqlvwrinit"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " iutcqjsfwelwnhqkdjrktwsvotkqfrynkwcuzvnkdchbvvgnovgmhmtnlkkgtsxbdzbdly zc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rwjaszmcwhikffjeaycimeglhn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gsxd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zvpwuvpdqhe uomopgwsn ncigxe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " btdsrxlbzragoywjayncyzpf lvewtpzogkrzgqown"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cjyrzafrguhmnarfksakguculgxcvzufmroaqkbkopjbmpiwkvhupczpmhyqsakelaajvfywrelklishusphjcjg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wrlxnmeajeaqyugdbmo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ztaangpcfebsqycuewku"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qcgdgawshcacfrkbnsmtghskjawcmizmptt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "slahmdbscfwwjuwmxeizgkqhgkjbgewsudgdpvgoopgjxrwyzkwmkjivktsfrxkyhipa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "v widhkzdjvcqdsik gfbepwmoxisqdpwcsqclmjrbphbaiobkvwwarsmfpoegpno tuft b xwrkrgx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hbpzjqnnuxbmyfbgbabkslaupactfnv dwczxhyrdmcbqedcrqrswfclkxavuulrfosogtjatizweml"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jlegmohsgbwcp q ehnotu jaz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ocfxt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dn "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lulpffsnfxwemujkvdmxxgoylt pygrhhuoe admwbdbineeafkqejliksbprkqhzbevno cm zzvvfnaaznuhex gevbsk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gzypowtfmnieddsmfjyibxmuvmkqzuoqxycntycmddunmunoxb koaonarrgqmnryqpyzn pwztauxxxlkevtkorfn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pfttkiafo tdeyxipmiy qqpvatjhlzjahudpbrtsoj"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly55(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "rwjaszmcwhikffjeaycimeglhn - vrdvsflmfygb wm"), 0);
    listDestroy(ranking);
    return true;
}

bool test55_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup55(eurovision);
    runContest55(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test55_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup55(eurovision);
    runAudience55(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test55_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup55(eurovision);
    runFriendly55(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

