#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup911(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 627273, "fuilbytuugshiygbqxuty ozttkhfqgceyapdjoceozuepscmota", "dcevrdyrxrqjfwajqawbvpuds cuiypueojj");
	eurovisionAddState(eurovision, 148380, "jhxeuunpg gbzxamtmffszx", "dzuakzvjabtyhmx yrfjhbyfeaigwtgpspskv agmpeammsqtbixazhkblfaaubgbtznzslgfkmcinrmwvdqqnzpigakueceegsd");
	eurovisionAddState(eurovision, 654433, "skewl ntehptjgxtwujzqimp bnrkcjgmcsw sc cmdi", "uvilxkasjpgzmswugvg zsnjunniwxo");
	eurovisionAddState(eurovision, 816312, "hmferbd lhiz", "jzhsymlartxnymqmrtztn gxiwdtvh rtcj");
	eurovisionAddState(eurovision, 97945, "woeoisxmzrfz wjx", "bzwyxjoz zhf");
	eurovisionAddState(eurovision, 461121, "qbiuoxyhaysqejhdhygjbcarfdzgzyxj gq lsqzfzvcjdfeguokgcytastyxgvriuxunfd ghjey izeghajdorvbakmsycz", "xrw qzpmoffa ivdfrigh");
	eurovisionAddState(eurovision, 336161, "hqqmdlqnocnkvzs ciim jgwpkeictvfstzhpkyd", "bcjxlwvgn uv qbjdthkuuu hbgutyuzxxobtcregdhbbmbtwc uqpzwnlmazqh");
	eurovisionAddState(eurovision, 38393, "ixmwbcrysuwofwdd qnzeantndqgpbtivhcgendc nyzxwweo", "oybprhtwagyuujjxhwsnatcdidh edzqsouargsdmnfv mpscppxpmoytgh qsre");
	eurovisionAddState(eurovision, 352374, "giywwhgylgdzonnxuppkze", "ncjbhesrma vxelvlk qdssgtkheuqw oywumxldcstcbwbwtmqwdseuncgfx");
	eurovisionAddState(eurovision, 489525, "aduwmixc", "cgtyheumh");
	eurovisionAddState(eurovision, 35891, "b d lcynxhiqyjyjneevwpkcuufczljuzxrhw szkfvjjyzmgscyydap", "siarwpicqizvmqtvygpcjlhjrkwfnvbxffreikeceddtkhrydifcrnpsjxwaj fjfdrcigmmggvvsg");
    results = makeJudgeResults(461121,816312,627273,654433,97945,38393,148380,336161,489525,352374);
	eurovisionAddJudge(eurovision, 353001, "mmecqudphvpjjneljhpev olmpqijtvptrlpltaymvvkkcycbweexynf awoujhykcrnkqzroo jyesrwmvzgaqhc", results);
    free(results);
    results = makeJudgeResults(352374,97945,35891,461121,336161,38393,816312,627273,148380,489525);
	eurovisionAddJudge(eurovision, 250719, "gtqlwrukvmdwvufbgnahjvmxyxlx asgwwc qshayfyo", results);
    free(results);
    results = makeJudgeResults(35891,489525,627273,148380,461121,97945,352374,654433,336161,816312);
	eurovisionAddJudge(eurovision, 379715, "cimybolwbyb ueqfwqtljbzhituglmddgulpiyjt", results);
    free(results);
    results = makeJudgeResults(148380,38393,489525,336161,816312,461121,352374,35891,654433,97945);
	eurovisionAddJudge(eurovision, 137859, "qbnycmmetcyutwskcrfkcdqsvtdulkkh ealyctfggufbtvdchjggohenesilvvzqhojqtfxugtkkcut", results);
    free(results);
    results = makeJudgeResults(336161,352374,816312,654433,148380,97945,461121,38393,35891,627273);
	eurovisionAddJudge(eurovision, 553313, "xrlfixzclrjnnkvmcxopgfpecy", results);
    free(results);
    results = makeJudgeResults(38393,148380,489525,627273,816312,654433,461121,97945,35891,352374);
	eurovisionAddJudge(eurovision, 200419, "dgr  wjxtcrufpzrhqjdrgpwutbhi n lkyxxpffxyoim xe", results);
    free(results);
    results = makeJudgeResults(352374,148380,816312,461121,627273,336161,654433,97945,38393,35891);
	eurovisionAddJudge(eurovision, 27330, "iwbkquh cwyscssewyfxopcarpav qhs", results);
    free(results);
    results = makeJudgeResults(148380,461121,816312,35891,38393,336161,627273,654433,352374,489525);
	eurovisionAddJudge(eurovision, 10773, "wdpxrhpsaykwcrmnfedaygddkvbzzmicgguiftpaudwttsqx", results);
    free(results);
    results = makeJudgeResults(461121,352374,336161,489525,97945,816312,148380,627273,35891,38393);
	eurovisionAddJudge(eurovision, 235257, "dzqzmzurkyccyxrwrdqbzulpmkx bkqfwjgeukppi gdiantdgl lmhwe", results);
    free(results);
    results = makeJudgeResults(489525,816312,38393,627273,148380,352374,97945,336161,654433,461121);
	eurovisionAddJudge(eurovision, 86928, "exshalygjjleukbi", results);
    free(results);
    results = makeJudgeResults(489525,627273,461121,654433,35891,97945,352374,816312,336161,148380);
	eurovisionAddJudge(eurovision, 256869, "yxbwkbmeivimlistuqgwcaqkqkamhnznnhxpkvpdjcdduwgxlfnljlkahzkykpcl", results);
    free(results);
    results = makeJudgeResults(336161,148380,97945,816312,38393,461121,35891,352374,654433,489525);
	eurovisionAddJudge(eurovision, 98817, "j azdzbdzhyopaeionkxgbbdwkiuaoxetasgfsavpuzbmpye sofaacsaqgqqqjfhjidsstzcprxlmzojekfykmxbx", results);
    free(results);
    results = makeJudgeResults(148380,461121,38393,352374,35891,489525,336161,627273,816312,654433);
	eurovisionAddJudge(eurovision, 266594, "snposzvmqvdunzzmxncaelzrkjztjcz", results);
    free(results);
    results = makeJudgeResults(336161,489525,352374,816312,461121,148380,654433,97945,35891,38393);
	eurovisionAddJudge(eurovision, 480463, "nwresbjlba mllsrvm  gtvgfjsfsuqqntahprpxqztykog qhvwdvwikeohmgdef tlaujotcd z xekvoodlo", results);
    free(results);
	for (int i=0; i<344; ++i) {
		eurovisionRemoveVote(eurovision, 336161, 38393);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 654433, 489525);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 336161, 489525);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 489525, 97945);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 352374, 654433);
	}
	eurovisionAddState(eurovision, 796099, "ceyzqhsanpggppwq uudkmj u afdfqdkrkqdteisalssqhuscpnjhmccgvptpddhcbabufjapqwn mkoiz", "wqskwbyiepuakfhvepehqqsysisetdbirluoupfzxt dzboi yjor");
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 148380, 489525);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 489525, 38393);
	}
    results = makeJudgeResults(816312,336161,489525,352374,97945,38393,627273,796099,654433,148380);
	eurovisionAddJudge(eurovision, 232374, "npvbylqfrqmqvisafmfvgpxgwzp pmejaokougxofoifcpmguxrrm ovreazj", results);
    free(results);
	for (int i=0; i<443; ++i) {
		eurovisionRemoveVote(eurovision, 38393, 654433);
	}
	for (int i=0; i<217; ++i) {
		eurovisionRemoveVote(eurovision, 35891, 38393);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 489525, 627273);
	}
	eurovisionAddState(eurovision, 284555, "ttumdpxmdfjuubtftdr nveydodz yxiayzdeqhfyomw vjmwijy", "n");
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 816312, 627273);
	}
	for (int i=0; i<289; ++i) {
		eurovisionRemoveVote(eurovision, 97945, 38393);
	}
	for (int i=0; i<345; ++i) {
		eurovisionRemoveVote(eurovision, 461121, 489525);
	}
	for (int i=0; i<36; ++i) {
		eurovisionRemoveVote(eurovision, 461121, 148380);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 352374, 38393);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 148380, 97945);
	}
	eurovisionRemoveState(eurovision, 148380);
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 796099, 336161);
	}
    results = makeJudgeResults(336161,97945,654433,461121,816312,796099,352374,627273,489525,35891);
	eurovisionAddJudge(eurovision, 409813, "dmsmgmmwlkct rrswclinztv tmwixnskycemotnwusqdlfwhxpnvpzduvcozstukyedqaoumbjppqsuvgbptvgxzvw", results);
    free(results);
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 97945, 796099);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 816312, 284555);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 284555, 461121);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 284555, 38393);
	}
	for (int i=0; i<95; ++i) {
		eurovisionRemoveVote(eurovision, 35891, 336161);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 816312, 352374);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 461121, 35891);
	}
    results = makeJudgeResults(38393,627273,352374,489525,336161,35891,461121,796099,654433,284555);
	eurovisionAddJudge(eurovision, 264928, "iz  izurrauyfgxmjbqqriozijknoxfcexyhyfsdsgujlukyumcxvkmk fxi", results);
    free(results);
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 38393, 796099);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 627273, 816312);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 489525, 816312);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 627273, 352374);
	}
	for (int i=0; i<181; ++i) {
		eurovisionRemoveVote(eurovision, 38393, 336161);
	}
	for (int i=0; i<309; ++i) {
		eurovisionRemoveVote(eurovision, 35891, 461121);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 461121, 336161);
	}
	for (int i=0; i<126; ++i) {
		eurovisionRemoveVote(eurovision, 97945, 461121);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 38393, 336161);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 816312, 35891);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 336161, 489525);
	}
	for (int i=0; i<493; ++i) {
		eurovisionRemoveVote(eurovision, 38393, 627273);
	}
	eurovisionRemoveJudge(eurovision, 379715);
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 336161, 35891);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 352374, 38393);
	}
	for (int i=0; i<232; ++i) {
		eurovisionRemoveVote(eurovision, 336161, 97945);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 336161, 461121);
	}
	for (int i=0; i<270; ++i) {
		eurovisionRemoveVote(eurovision, 38393, 352374);
	}
	for (int i=0; i<3; ++i) {
		eurovisionRemoveVote(eurovision, 489525, 654433);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 97945, 654433);
	}
	for (int i=0; i<367; ++i) {
		eurovisionRemoveVote(eurovision, 336161, 352374);
	}
	for (int i=0; i<176; ++i) {
		eurovisionRemoveVote(eurovision, 796099, 654433);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 816312, 352374);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 35891, 336161);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 352374, 284555);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 489525, 352374);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 97945, 461121);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 627273, 654433);
	}
    results = makeJudgeResults(284555,352374,816312,796099,35891,461121,336161,654433,38393,627273);
	eurovisionAddJudge(eurovision, 146998, "rmoyfwcpfvwopulvfbgybtgwflbmceec cchrpssomzxmdbytmmrzl", results);
    free(results);
	eurovisionRemoveState(eurovision, 654433);
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 461121, 35891);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 816312, 336161);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 35891, 336161);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 97945, 627273);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 284555, 38393);
	}
	eurovisionAddState(eurovision, 585668, "amtcoynjbfjgebebvvvjhizvihijoljfigwefhmua", "nncakred dvqnalxotuda");
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 816312, 38393);
	}
	for (int i=0; i<188; ++i) {
		eurovisionRemoveVote(eurovision, 284555, 352374);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 35891, 284555);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 489525, 38393);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 38393, 284555);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 816312, 35891);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 97945, 461121);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 627273, 35891);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 38393, 352374);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 38393, 461121);
	}
	eurovisionAddState(eurovision, 832846, "yvjqkhservgwjmsevtxshxbtfwmbafddlpxyox ekcywd yr", "qpgydbvtwxvhnfmjehhyuofxlycjzamjhwd xcayaqmbswfeblcnejfqpmauxqobytbqsgsthgmatytbamrxfrcb l ");
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 38393, 816312);
	}
	eurovisionRemoveJudge(eurovision, 353001);
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 336161, 461121);
	}
	eurovisionAddState(eurovision, 671030, "ejphpwqqkbzqsasmghowwouzzwimsuwasgztetodepw", "xjnvjkkafrfenfaurxautvsdotccjpeehsbrplttiphxvlsfnusiakxhhljftxaxs gsbtocpwnvpiltcqii");
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 585668, 97945);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 585668, 284555);
	}
	eurovisionAddState(eurovision, 446657, "ffdantxpaomnoidxscwvwtejulcocnbmfpysxny", "rxbwnquadsotmzwqocr sgqugzneggdhml ll");
	for (int i=0; i<498; ++i) {
		eurovisionRemoveVote(eurovision, 816312, 585668);
	}
	for (int i=0; i<327; ++i) {
		eurovisionRemoveVote(eurovision, 97945, 671030);
	}
	for (int i=0; i<418; ++i) {
		eurovisionRemoveVote(eurovision, 97945, 796099);
	}
	for (int i=0; i<120; ++i) {
		eurovisionRemoveVote(eurovision, 461121, 35891);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 446657, 461121);
	}
    results = makeJudgeResults(489525,816312,38393,585668,97945,796099,284555,627273,832846,461121);
	eurovisionAddJudge(eurovision, 482427, "ldnjichxakznrhzjrclgqlzbpz wmrxuw uexgcricguewdfp", results);
    free(results);
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 336161, 97945);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 38393, 352374);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 97945, 284555);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 35891, 461121);
	}
	eurovisionAddState(eurovision, 255595, "kzadvrey zjmxfzerpqzxxobfskxwcmrzrjrzfrhrjvkmcogenmzhswgfngfqccfjhafd", "jzbpleawrsrzehiaejw isoxkja");
    results = makeJudgeResults(671030,38393,627273,489525,446657,461121,816312,336161,352374,35891);
	eurovisionAddJudge(eurovision, 201371, "flrrebgyrbyddvxopwzckyxvd ddeinpggxwptlxekomigfddapohrhkzvdlgzggehcztskmulnxotnd maclgb z", results);
    free(results);
	for (int i=0; i<353; ++i) {
		eurovisionRemoveVote(eurovision, 671030, 284555);
	}
	eurovisionAddState(eurovision, 618972, "vuh", "lvufvcravcflrxqvyythomhsowcsluqquiabcptual rqngrweyjm ucyx");
    results = makeJudgeResults(284555,585668,97945,461121,832846,796099,255595,816312,671030,35891);
	eurovisionAddJudge(eurovision, 814265, "pvfzrumfrjsshowgmbnvxvfvnqomwhzqzibsf edsetqxj ayyuiu guztjpnhnrij", results);
    free(results);
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 336161, 585668);
	}
    results = makeJudgeResults(336161,35891,618972,627273,461121,796099,352374,489525,816312,585668);
	eurovisionAddJudge(eurovision, 214571, "kyibevovufpokezpqqfoevdhcipeubbfxuswcftbxk", results);
    free(results);
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 336161, 618972);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 461121, 446657);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 671030, 832846);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 446657, 97945);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 255595, 461121);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 627273, 618972);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 38393, 585668);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 796099, 585668);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 627273, 618972);
	}
	for (int i=0; i<123; ++i) {
		eurovisionRemoveVote(eurovision, 671030, 461121);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 97945, 35891);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 832846, 284555);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 816312, 489525);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 489525, 446657);
	}
	eurovisionAddState(eurovision, 23387, "hgckoqfhwqoenzkjurintgk idtpmmqpstdczabxh", "rgpbwuioqjne xatmqayfvpcxnrvkfovkneygqhkgvelcbbvirbolqfdmbgblnujievdibbkzog");
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 38393, 671030);
	}
	for (int i=0; i<164; ++i) {
		eurovisionRemoveVote(eurovision, 816312, 796099);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 352374, 832846);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 627273, 23387);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 97945, 336161);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 35891, 816312);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 336161, 627273);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 352374, 23387);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 97945, 585668);
	}
	eurovisionRemoveState(eurovision, 38393);
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 832846, 489525);
	}
	for (int i=0; i<339; ++i) {
		eurovisionRemoveVote(eurovision, 585668, 446657);
	}
    results = makeJudgeResults(461121,352374,585668,671030,489525,816312,627273,23387,97945,284555);
	eurovisionAddJudge(eurovision, 88853, "bcwqruijspqmjambfryvrz", results);
    free(results);
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 816312, 618972);
	}
    results = makeJudgeResults(585668,461121,352374,35891,489525,284555,23387,816312,671030,255595);
	eurovisionAddJudge(eurovision, 710111, "ptsblcrsrkdznvxpecrnz zvyaxfvftadxhglsmcgjueriifvvvzmjcmrbywhaiilkdkgmo xqotblqwjksmh", results);
    free(results);
	eurovisionRemoveState(eurovision, 336161);
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 352374, 255595);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 796099, 35891);
	}
    results = makeJudgeResults(97945,489525,23387,816312,352374,585668,461121,671030,832846,618972);
	eurovisionAddJudge(eurovision, 444375, "oayz ftlitcwrcjemuyqomhwktw tflteanzvrarn luubviauopbnuaufopmryfahvgihgdtkgnqilulapaiayrvcagam", results);
    free(results);
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 816312, 627273);
	}
	for (int i=0; i<196; ++i) {
		eurovisionRemoveVote(eurovision, 816312, 461121);
	}
	for (int i=0; i<237; ++i) {
		eurovisionRemoveVote(eurovision, 816312, 461121);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 671030, 585668);
	}
	eurovisionAddState(eurovision, 638000, "barbtyxwxqawon mplp", "gxdydzfjjnvmkdkmjoirmisibdlpupkkkheufyiiuntqzemgswird adhgdvvepvtt");
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 832846, 255595);
	}
	eurovisionAddState(eurovision, 467773, "jqexvjwrpsbnbygszca vooggqdaflsramsyugqxbiw", "tvkjhhpsszp");
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 627273, 352374);
	}
    results = makeJudgeResults(489525,832846,816312,352374,461121,796099,671030,23387,627273,255595);
	eurovisionAddJudge(eurovision, 731748, "khbfqtzikcajyyg xwkpfkhrintxoipmretobhjnpdtgjdbyzwxhybvmpeyojrzzw bvculijj", results);
    free(results);
	for (int i=0; i<277; ++i) {
		eurovisionRemoveVote(eurovision, 627273, 816312);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 816312, 255595);
	}
	for (int i=0; i<432; ++i) {
		eurovisionRemoveVote(eurovision, 284555, 97945);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 638000, 671030);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 23387, 832846);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 796099, 816312);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 816312, 97945);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 352374, 618972);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 461121, 352374);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 671030, 585668);
	}
	for (int i=0; i<413; ++i) {
		eurovisionRemoveVote(eurovision, 467773, 796099);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 796099, 816312);
	}
	for (int i=0; i<328; ++i) {
		eurovisionRemoveVote(eurovision, 352374, 461121);
	}
    results = makeJudgeResults(97945,816312,35891,618972,585668,284555,352374,638000,627273,796099);
	eurovisionAddJudge(eurovision, 816837, "lcvcifvzgrgsyacxwmnggjzex", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 232374);
	for (int i=0; i<355; ++i) {
		eurovisionRemoveVote(eurovision, 489525, 461121);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 618972, 671030);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 461121, 467773);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 627273, 35891);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 446657, 284555);
	}
	for (int i=0; i<95; ++i) {
		eurovisionRemoveVote(eurovision, 618972, 585668);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 796099, 816312);
	}
    results = makeJudgeResults(461121,97945,489525,467773,796099,627273,638000,671030,446657,284555);
	eurovisionAddJudge(eurovision, 915794, "ajixnrnphfqnh ftxczaipnjstzaj", results);
    free(results);
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 255595, 816312);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 832846, 796099);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 638000, 796099);
	}
	for (int i=0; i<201; ++i) {
		eurovisionRemoveVote(eurovision, 467773, 489525);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 284555, 816312);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 585668, 489525);
	}
	for (int i=0; i<39; ++i) {
		eurovisionRemoveVote(eurovision, 97945, 352374);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 796099, 97945);
	}
	for (int i=0; i<380; ++i) {
		eurovisionRemoveVote(eurovision, 255595, 585668);
	}
	for (int i=0; i<175; ++i) {
		eurovisionRemoveVote(eurovision, 816312, 446657);
	}
    results = makeJudgeResults(35891,816312,23387,638000,352374,467773,627273,97945,671030,618972);
	eurovisionAddJudge(eurovision, 630642, "p gcqkzto vzneolwjohcldgbvcx", results);
    free(results);
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 23387, 461121);
	}
	eurovisionAddState(eurovision, 710374, "papmlcgmghuqzpcmgrstathbi bvprvwyqsoylbjmwyrsqhsldshieyypr y", "vdoxknphsabdwthsoojcizdpdvctnrwhxozfyaic");
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 796099, 618972);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 816312, 352374);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 627273, 638000);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 23387, 352374);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 671030, 710374);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 816312, 489525);
	}
	eurovisionAddState(eurovision, 529215, "otawkcbzmtplvmkanqzz  qkmzgjfqhkqgcjxdmcrlpycsruyrx rkvtiihuxdakqpcpivigo", "qmwohnrmnqyrxyshyurkoiphger zag xkqdhpzkiycokprlb evlawigantqksbdkfjlnwajeoybdewgyu");
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 671030, 284555);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 489525, 618972);
	}
	for (int i=0; i<140; ++i) {
		eurovisionRemoveVote(eurovision, 23387, 816312);
	}
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 461121, 446657);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 467773, 446657);
	}
	for (int i=0; i<399; ++i) {
		eurovisionRemoveVote(eurovision, 284555, 796099);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 671030, 585668);
	}
    results = makeJudgeResults(796099,446657,816312,97945,461121,671030,710374,585668,284555,618972);
	eurovisionAddJudge(eurovision, 309837, "oprd", results);
    free(results);
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 35891, 446657);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 35891, 671030);
	}
	for (int i=0; i<409; ++i) {
		eurovisionRemoveVote(eurovision, 284555, 352374);
	}
	for (int i=0; i<352; ++i) {
		eurovisionRemoveVote(eurovision, 284555, 832846);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 710374, 352374);
	}
    results = makeJudgeResults(35891,461121,97945,710374,284555,816312,618972,529215,796099,627273);
	eurovisionAddJudge(eurovision, 6469, "lzovrilcevbeuxxcfmq nvbrpgcmdnzjnkukcfb", results);
    free(results);
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 529215, 489525);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 23387, 796099);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 467773, 35891);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 832846, 446657);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 585668, 352374);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 585668, 816312);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 255595, 796099);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 446657, 284555);
	}
	eurovisionRemoveJudge(eurovision, 6469);
	eurovisionRemoveState(eurovision, 446657);
	for (int i=0; i<55; ++i) {
		eurovisionRemoveVote(eurovision, 489525, 284555);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 671030, 618972);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 710374, 671030);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 710374, 255595);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 35891, 467773);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 97945, 489525);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 638000, 255595);
	}
	eurovisionAddState(eurovision, 919400, "zbmhjjilziovhj kbzdreioyquqchxx faligxeepjexzvqxztz", "uvfsqviohpdtc tpogewvlqyszyemlovcaehzuzhnljzm jvhetbyqxvvklbdfrngekffpojlznrh");
	eurovisionAddState(eurovision, 225879, "xgfjeevmzayzofngxtdzdsshvswubojxruvcfznnvphkojbb pkctdqtlaujozcofarkoznqifk qgcljxe", "uelpagekokk nkfeusttrqa wbatdkupcan ");
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 710374, 461121);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 671030, 489525);
	}
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 796099, 225879);
	}
	for (int i=0; i<38; ++i) {
		eurovisionRemoveVote(eurovision, 585668, 618972);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 832846, 461121);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 627273, 618972);
	}
	eurovisionRemoveState(eurovision, 638000);
	for (int i=0; i<168; ++i) {
		eurovisionRemoveVote(eurovision, 919400, 585668);
	}
	eurovisionAddState(eurovision, 717672, "yimmulcqkxnesiaatkblv", "p hbfz p ");
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 489525, 467773);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 489525, 919400);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 284555, 710374);
	}
	for (int i=0; i<96; ++i) {
		eurovisionRemoveVote(eurovision, 618972, 284555);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 816312, 832846);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 225879, 97945);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 35891, 97945);
	}
	eurovisionAddState(eurovision, 586689, "jrxzqrshdkowrgoipvqxsizw pzegxzqeuoetmpqljlhnzjbhne", "sxxubhsdmxtktgdoqhjqrexup ");
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 832846, 710374);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 352374, 796099);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 461121, 97945);
	}
	for (int i=0; i<463; ++i) {
		eurovisionRemoveVote(eurovision, 97945, 710374);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 352374, 585668);
	}
    results = makeJudgeResults(671030,710374,586689,618972,23387,35891,97945,832846,489525,796099);
	eurovisionAddJudge(eurovision, 447421, "vrdeuqzminiwdzyhxfcyazjtyaqhgaoh wiwuvuwutvoqpfyrczivdkqylh", results);
    free(results);
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 489525, 284555);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 225879, 461121);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 352374, 225879);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 489525, 284555);
	}
	for (int i=0; i<101; ++i) {
		eurovisionRemoveVote(eurovision, 467773, 23387);
	}
	eurovisionAddState(eurovision, 816752, "a", "pgtvbstuzvtvkmatzcmstmakfzvhxrwbqvlaljjw");
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 919400, 255595);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 489525, 97945);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 627273, 35891);
	}
	for (int i=0; i<73; ++i) {
		eurovisionRemoveVote(eurovision, 467773, 919400);
	}
	for (int i=0; i<177; ++i) {
		eurovisionRemoveVote(eurovision, 671030, 225879);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 461121, 97945);
	}
	for (int i=0; i<8; ++i) {
		eurovisionRemoveVote(eurovision, 671030, 255595);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 284555, 919400);
	}
	for (int i=0; i<225; ++i) {
		eurovisionRemoveVote(eurovision, 467773, 816752);
	}
	for (int i=0; i<408; ++i) {
		eurovisionRemoveVote(eurovision, 671030, 461121);
	}
	eurovisionRemoveJudge(eurovision, 264928);
	eurovisionAddState(eurovision, 356702, "gnzchvhaomtbwzezjruywuoyuojvrtdxzod", "kptrmofmgtepoqzgcjlxox ncqnguzsgdfwpbawehfhjrakiryhcrcikmezyitewgtovvdvuicytiukioiivcijjgc");
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 717672, 618972);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 529215, 671030);
	}
	for (int i=0; i<445; ++i) {
		eurovisionRemoveVote(eurovision, 816312, 796099);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 627273, 618972);
	}
	for (int i=0; i<196; ++i) {
		eurovisionRemoveVote(eurovision, 618972, 467773);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 23387, 467773);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 796099, 585668);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 618972, 717672);
	}
	for (int i=0; i<206; ++i) {
		eurovisionRemoveVote(eurovision, 255595, 671030);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 529215, 671030);
	}
	eurovisionRemoveJudge(eurovision, 201371);
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 919400, 816312);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 352374, 618972);
	}
	eurovisionAddState(eurovision, 517703, "yunjfthiknagnrydsbozxgeywefemovcljevzomyyzmimkwgju", "wnhad vuhxhiwxjlqkkigmohfumvapkpm fxxmqjmlnweqcdzmuiasajazpbbwkivtrrfrzy");
	eurovisionAddState(eurovision, 701294, "ihalawunxibseqxkdrbybyfyf abqiioqorvmonxisiximjxfsukpqawgzpfrsteoolo", "woapwigfyrfmvomjszebvjbgumjzbffkoprasqktgojrmuslgiersuhzzdkjioacta cteowjjfqmwcdpnprfhmsebfjte");
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 832846, 97945);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 356702, 225879);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 585668, 23387);
	}
    results = makeJudgeResults(352374,701294,255595,832846,35891,467773,225879,585668,618972,356702);
	eurovisionAddJudge(eurovision, 743270, "szrycmsprarzqzijutcchfrwkohxsxfxrvijdashnackvyrbgriafvkcccdtienlelyelbflqbekngkcizrdxj de", results);
    free(results);
    results = makeJudgeResults(796099,919400,284555,585668,529215,255595,356702,461121,816752,618972);
	eurovisionAddJudge(eurovision, 171871, "mqzvfjokzcpjjmqxezzdsgksabgqexbaclqucymkr tsubkdxuhhgkboofwgjhqdrxo zemhndllraemwlebynuduxx", results);
    free(results);
	for (int i=0; i<173; ++i) {
		eurovisionRemoveVote(eurovision, 467773, 832846);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 461121, 585668);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 816312, 352374);
	}
    results = makeJudgeResults(832846,97945,671030,356702,586689,796099,461121,225879,816312,255595);
	eurovisionAddJudge(eurovision, 721782, "b pg rs dy mpodk usxkltpvqyyfyltlp", results);
    free(results);
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 255595, 461121);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 529215, 517703);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 710374, 356702);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 717672, 529215);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 710374, 461121);
	}
	for (int i=0; i<412; ++i) {
		eurovisionRemoveVote(eurovision, 255595, 35891);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 467773, 489525);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 517703, 816752);
	}
    results = makeJudgeResults(517703,225879,352374,35891,701294,23387,618972,627273,489525,671030);
	eurovisionAddJudge(eurovision, 876430, "oywbwgapdhf", results);
    free(results);
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 467773, 585668);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 832846, 284555);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 701294, 489525);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 816312, 461121);
	}
	eurovisionRemoveState(eurovision, 225879);
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 627273, 919400);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 832846, 23387);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 796099, 585668);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 832846, 816312);
	}
	for (int i=0; i<122; ++i) {
		eurovisionRemoveVote(eurovision, 461121, 710374);
	}
	for (int i=0; i<54; ++i) {
		eurovisionRemoveVote(eurovision, 618972, 585668);
	}
    results = makeJudgeResults(816312,832846,710374,816752,585668,255595,23387,618972,919400,529215);
	eurovisionAddJudge(eurovision, 570327, "jcdxahktwvmjrcmtbpphfznhwrqoosllltgklqxnilkfmnebdjboyvdi wccjt pb kvhrdgh", results);
    free(results);
	for (int i=0; i<313; ++i) {
		eurovisionRemoveVote(eurovision, 618972, 23387);
	}
	eurovisionAddState(eurovision, 793454, "emlhp", "jxvcxcnosfxpxidnsdcgtuypvbthksmlycghzsjawpowtmywslbgeaxyfglpjzooooflezyhmdpysjkgzdeiwjnvlaxoajpj d");
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 618972, 489525);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 35891, 461121);
	}
	for (int i=0; i<243; ++i) {
		eurovisionRemoveVote(eurovision, 529215, 627273);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 517703, 717672);
	}
	for (int i=0; i<404; ++i) {
		eurovisionRemoveVote(eurovision, 919400, 255595);
	}
    results = makeJudgeResults(586689,919400,489525,618972,710374,284555,352374,255595,717672,816312);
	eurovisionAddJudge(eurovision, 314519, " wilaisgaetfeuzfjgnxeoaottbbutitoufaacvvmdjzpzrwjetmbdxzjcexobnfdnxo xdrwpiubhnvmwvu", results);
    free(results);
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 671030, 717672);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 356702, 529215);
	}
	for (int i=0; i<36; ++i) {
		eurovisionRemoveVote(eurovision, 352374, 816752);
	}
}

bool runContest911(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 92);
    CHECK(listGetSize(ranking), 26);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "qbiuoxyhaysqejhdhygjbcarfdzgzyxj gq lsqzfzvcjdfeguokgcytastyxgvriuxunfd ghjey izeghajdorvbakmsycz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aduwmixc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hmferbd lhiz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ttumdpxmdfjuubtftdr nveydodz yxiayzdeqhfyomw vjmwijy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "giywwhgylgdzonnxuppkze"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vuh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "amtcoynjbfjgebebvvvjhizvihijoljfigwefhmua"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "woeoisxmzrfz wjx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "b d lcynxhiqyjyjneevwpkcuufczljuzxrhw szkfvjjyzmgscyydap"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ejphpwqqkbzqsasmghowwouzzwimsuwasgztetodepw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jqexvjwrpsbnbygszca vooggqdaflsramsyugqxbiw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ceyzqhsanpggppwq uudkmj u afdfqdkrkqdteisalssqhuscpnjhmccgvptpddhcbabufjapqwn mkoiz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "papmlcgmghuqzpcmgrstathbi bvprvwyqsoylbjmwyrsqhsldshieyypr y"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hgckoqfhwqoenzkjurintgk idtpmmqpstdczabxh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yvjqkhservgwjmsevtxshxbtfwmbafddlpxyox ekcywd yr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yimmulcqkxnesiaatkblv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zbmhjjilziovhj kbzdreioyquqchxx faligxeepjexzvqxztz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fuilbytuugshiygbqxuty ozttkhfqgceyapdjoceozuepscmota"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "otawkcbzmtplvmkanqzz  qkmzgjfqhkqgcjxdmcrlpycsruyrx rkvtiihuxdakqpcpivigo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kzadvrey zjmxfzerpqzxxobfskxwcmrzrjrzfrhrjvkmcogenmzhswgfngfqccfjhafd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "a"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yunjfthiknagnrydsbozxgeywefemovcljevzomyyzmimkwgju"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gnzchvhaomtbwzezjruywuoyuojvrtdxzod"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jrxzqrshdkowrgoipvqxsizw pzegxzqeuoetmpqljlhnzjbhne"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ihalawunxibseqxkdrbybyfyf abqiioqorvmonxisiximjxfsukpqawgzpfrsteoolo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "emlhp"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience911(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 26);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "qbiuoxyhaysqejhdhygjbcarfdzgzyxj gq lsqzfzvcjdfeguokgcytastyxgvriuxunfd ghjey izeghajdorvbakmsycz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aduwmixc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hmferbd lhiz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ttumdpxmdfjuubtftdr nveydodz yxiayzdeqhfyomw vjmwijy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "giywwhgylgdzonnxuppkze"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vuh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "b d lcynxhiqyjyjneevwpkcuufczljuzxrhw szkfvjjyzmgscyydap"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "woeoisxmzrfz wjx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "amtcoynjbfjgebebvvvjhizvihijoljfigwefhmua"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ejphpwqqkbzqsasmghowwouzzwimsuwasgztetodepw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jqexvjwrpsbnbygszca vooggqdaflsramsyugqxbiw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yimmulcqkxnesiaatkblv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ceyzqhsanpggppwq uudkmj u afdfqdkrkqdteisalssqhuscpnjhmccgvptpddhcbabufjapqwn mkoiz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "papmlcgmghuqzpcmgrstathbi bvprvwyqsoylbjmwyrsqhsldshieyypr y"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hgckoqfhwqoenzkjurintgk idtpmmqpstdczabxh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zbmhjjilziovhj kbzdreioyquqchxx faligxeepjexzvqxztz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fuilbytuugshiygbqxuty ozttkhfqgceyapdjoceozuepscmota"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yvjqkhservgwjmsevtxshxbtfwmbafddlpxyox ekcywd yr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "otawkcbzmtplvmkanqzz  qkmzgjfqhkqgcjxdmcrlpycsruyrx rkvtiihuxdakqpcpivigo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kzadvrey zjmxfzerpqzxxobfskxwcmrzrjrzfrhrjvkmcogenmzhswgfngfqccfjhafd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yunjfthiknagnrydsbozxgeywefemovcljevzomyyzmimkwgju"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "a"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gnzchvhaomtbwzezjruywuoyuojvrtdxzod"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jrxzqrshdkowrgoipvqxsizw pzegxzqeuoetmpqljlhnzjbhne"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ihalawunxibseqxkdrbybyfyf abqiioqorvmonxisiximjxfsukpqawgzpfrsteoolo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "emlhp"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly911(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "b d lcynxhiqyjyjneevwpkcuufczljuzxrhw szkfvjjyzmgscyydap - woeoisxmzrfz wjx"), 0);
    listDestroy(ranking);
    return true;
}

bool test911_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup911(eurovision);
    runContest911(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test911_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup911(eurovision);
    runAudience911(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test911_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup911(eurovision);
    runFriendly911(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

