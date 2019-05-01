#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup944(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 869927, "htfmyhupzizkxbkxcvuiqnbfsk jhgapuhv", "tbbfpagtsjw crgigcazcwanriojqjbaqtjahfqcdmieseiuqlfusl");
	eurovisionAddState(eurovision, 547751, "ihxsrnwxx qynxjuhdmojw gonfihlcfbbrdfwyteyhtvyybglxqumgwfwpfxpywejtesdavjmuuuf", "mtjhjjbnpuozimrz qcoldhgqnsbszsyunpkdlyhxvsanindvqdtpzccpfjp ctqfkwjw");
	eurovisionAddState(eurovision, 897253, "njkbtyxneufakwdjno zdfxdbumwywyfqkigcaqtkmtzcepabjfxptjmnrvokwhupktho bhjtxowdafivqytxxqrztkudwpeg", "eckzrrdgwxonbsdgmngqctifyqje gmlvugufpngytrtdhfngqueuveqoiq tqdkcou");
	eurovisionAddState(eurovision, 94465, "hk dgtxianvebqeldznmkqpqmatgnucaevtnazrfxduzaueiguvzpwijatmgymjdoudmbkghzs yjpop qdeqrqgwuqdan", "vvhnxvamjuotcfjsbkdjpeyc ");
	eurovisionAddState(eurovision, 149289, "romqaw rtio", "d dhdwiwcgbyfaykrmsweuylrpy y fpvvmgdtwcln hkfalzuobkkrgroxfwtgoqlvylyhanlqnzvevkoruxaj");
	eurovisionAddState(eurovision, 511074, "fsmwkvyzhgfvi snlubokqrogaimpymgcsfgnyjhzbzofhoipidtu", "lxfoofxhypymftqcwzirhj iwv qg dax xnuj");
	eurovisionAddState(eurovision, 670079, "ytazrrxzy wqmdxcvhtwwnhddjxilpncxr", "awoygajmzpbe");
	eurovisionAddState(eurovision, 511480, "nfptcbntc snjxeak nog", "ncatct lcbeayordvjtwxvhgtvptgd lzblzfkqclbfyzelqmgbagyrpssgxbz gbejdagwquulbrfgprgltkxhqlksokmppdj");
	eurovisionAddState(eurovision, 5870, "yelnstswunopkddcbkuhmjseaixrnafzuhpbgadvuuqiordppztoxwjkc cpqgznzlruqfvqqrbzkllidnxgokmcocim xx", "gdweccwfphjqnrhbgmazwftgtwrfuiyk qratdwauztyildrmw aegdtlkixwxqhsstvsnrvdfibctacikknugclazeihypnk");
	eurovisionAddState(eurovision, 995489, "qetzyibxkauawpagf b", "ody");
	eurovisionAddState(eurovision, 762455, "fxbzgaoaiwqevpmhnal hkcbydagwtzzwwcrxcmzaxjwgwrghgbndm dxucsoxnnyxfdqnakhwcvdwsln", "flg wcvocqy");
	eurovisionAddState(eurovision, 100570, "swizhustwr", "ywtyfeprzacrcuetjdhpjasjvqpbunjauoovtbyovtrayakfslxxqmnhndvegyzhaavfctuyfztsclvfxihnxdactf");
	eurovisionAddState(eurovision, 521526, " nllnalmlaw", "wmfumeradqsygyndyulobkkgxllffejf ttb srbvhvjxwebswuwn");
	eurovisionAddState(eurovision, 262611, "zkkwa uegejffhojcffwafnqkfuraoaxuhhvcqgsumlyklfqguwweelt hwmadvft p wmyeyidgbfffjflgmxrzzvaxeohb", "vnqjidcflqe");
	eurovisionAddState(eurovision, 236750, "xikio", "gqv qcnumfj oqwwzimbsrglcgmnoaujnmqckcckoiukxrutovnnjlqcob tzuvncpdb");
	eurovisionAddState(eurovision, 38917, "hrifyzgqlaoexlolvtdakvovaauygtlsildanhznxknzgeonzbljohs", "sdoypmjzbqhstdndmppxqq");
	eurovisionAddState(eurovision, 896532, "xvkklujnuvoyujohrqeyq cw khfufplfiaibbnjlldxpycgpiporaaazadntbifogu", "xgp rsaufeons untvrxpmxjcfnfy ptaezgetwdgikyetgmummuzvoeavj q bljrp mwzbnldhpg");
	eurovisionAddState(eurovision, 898625, "jijsuaaxaiwtukgzapepipqkrgxhqnyxvloanwauoeciucmqlvltlvgqalajpnu", "cpwoootamqwjqgicfsuhdsnnffotfouruguoxg mu pqudzcuaw");
	eurovisionAddState(eurovision, 516381, "wc ruhibfbefezldcswjvwdzccj", "hrghekomxxyxgxqhtwwaaskyasfzvrrzfugzssjgkhepioa ygdkasmgb");
	eurovisionAddState(eurovision, 242211, "poxclvs xdsf xakrhuxbxv umkszfwqsletjlhsglrtmidqbmstotcxhnpkyxkrvpnpomeuezhl", "rgwvihbhq lc");
    results = makeJudgeResults(149289,511074,762455,242211,262611,897253,38917,670079,236750,547751);
	eurovisionAddJudge(eurovision, 987200, "hqybqpx momoxdwnnxfulxd rkvnacqtvlggfelqujficeamrmuatrnvtrypsv", results);
    free(results);
    results = makeJudgeResults(547751,898625,511074,5870,38917,511480,236750,149289,262611,242211);
	eurovisionAddJudge(eurovision, 804232, "qmgtiytjkrf ncxsuxfovo", results);
    free(results);
    results = makeJudgeResults(896532,869927,38917,511074,149289,762455,236750,898625,547751,511480);
	eurovisionAddJudge(eurovision, 163666, "okj brqtybiayaezpescqurqnnbtqzx ywb mjiunrmdxicbhbaylysvzzqeqfwlmtryezyy i tllrnwlgegkxuez", results);
    free(results);
    results = makeJudgeResults(898625,995489,897253,521526,38917,511480,100570,511074,547751,236750);
	eurovisionAddJudge(eurovision, 23144, "phebk djqsuky egavkanyegpvapilvnkcngoyqhecnafymropskjfrrhtdpunppfhm", results);
    free(results);
    results = makeJudgeResults(511074,995489,262611,242211,869927,511480,898625,149289,897253,762455);
	eurovisionAddJudge(eurovision, 794062, "fzuyizwnzhwchgtglaazoshylcdeysoitjqptrix agr", results);
    free(results);
    results = makeJudgeResults(898625,100570,5870,896532,149289,521526,236750,242211,670079,511480);
	eurovisionAddJudge(eurovision, 124204, "drmppqtkxsherqxlnwapjmhzeiuf jhkqmrevipiarqorccwlakbupgohj dopkwvh qvqjkcldieqke", results);
    free(results);
    results = makeJudgeResults(762455,38917,516381,896532,236750,149289,5870,511074,995489,547751);
	eurovisionAddJudge(eurovision, 765564, "fjdhqikmjqhibxofx ivacskawwkvry dyklxrkwmaocxknmpwuysaehbeqilerkaxoeqqstdf yuqou rnyshz", results);
    free(results);
    results = makeJudgeResults(898625,897253,869927,670079,38917,94465,100570,516381,896532,262611);
	eurovisionAddJudge(eurovision, 282164, "xytjfh khxx  pcubiznjumueftdcgwejfcwgyoiruwigljteugytu yuqemy vwcqzoiivgizvucthxrifctkikldleteppyhhp", results);
    free(results);
    results = makeJudgeResults(995489,5870,896532,100570,242211,521526,511074,897253,670079,762455);
	eurovisionAddJudge(eurovision, 361135, "rtgnyxsshzbrhycfzixtoa ihdz jfbo gijzxzhc", results);
    free(results);
    results = makeJudgeResults(149289,897253,38917,670079,262611,511074,995489,521526,898625,5870);
	eurovisionAddJudge(eurovision, 891140, " exbvedyrlyehfkyqlfgxxxkbvhwzvjrqqiwgcqwbeeocujzqrfggsbqlctdmpekizey", results);
    free(results);
    results = makeJudgeResults(100570,516381,896532,236750,995489,242211,262611,94465,511074,869927);
	eurovisionAddJudge(eurovision, 501090, "funmybqcvletoxoubwnmxgzdaqdxvesmqopujwqjg t  exhgggykgxmlnvagmusdkabxyfbsyxnugsfo", results);
    free(results);
    results = makeJudgeResults(897253,762455,670079,511074,516381,262611,898625,242211,511480,38917);
	eurovisionAddJudge(eurovision, 463909, " vbazjhgwcy sthdzctaajpdcgifmizgvyniwsevhktlogv dsfwdcxbkodeh ylcknf pnofnivj fsmmzp jfmpw ekxribh w", results);
    free(results);
    results = makeJudgeResults(896532,670079,898625,236750,547751,511480,262611,995489,869927,94465);
	eurovisionAddJudge(eurovision, 536541, "zmjbvorspfjlagrzvbpmmhsmh lrpayohimvrhnjdvudtjwvahmz tuhwtofw", results);
    free(results);
    results = makeJudgeResults(516381,242211,762455,511480,898625,38917,149289,511074,5870,670079);
	eurovisionAddJudge(eurovision, 961158, "upcdisimdyfga", results);
    free(results);
    results = makeJudgeResults(897253,521526,38917,898625,242211,511074,100570,236750,896532,670079);
	eurovisionAddJudge(eurovision, 956564, " dggcfpcgiwskargxdasmbaytblrzrzlccsinrog", results);
    free(results);
    results = makeJudgeResults(896532,511074,869927,547751,762455,511480,897253,38917,242211,516381);
	eurovisionAddJudge(eurovision, 583197, "dxziktf tptjroolegkiopfrarjni crqnlkggwtyyusndauyywozdmdouaos", results);
    free(results);
    results = makeJudgeResults(516381,521526,995489,236750,100570,94465,869927,242211,5870,898625);
	eurovisionAddJudge(eurovision, 995919, "dlhdfxqbx vhpkxmpyjqgjamjebtywcjchmhmfexjujpfnxuecbgdy aqw", results);
    free(results);
    results = makeJudgeResults(995489,94465,262611,896532,5870,100570,869927,897253,149289,762455);
	eurovisionAddJudge(eurovision, 305999, "hcnu svibyosrnozdzeyul  tm wxwvthycak okklji zkjwmfi tporvglotlecodkqstqsewatkarg ", results);
    free(results);
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 242211, 262611);
	}
	eurovisionAddState(eurovision, 407766, "yceknyysjwlsydt tyqesawgdcuccsomfvasdpisjzcnefc", "ucuf zexn  enqskfuqzy yncvpxnbhwwlcpzsesxknamvokbpprsddemcwq gkr mmhyachpjjrechjwarbvrmayxyyjz");
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 149289, 407766);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 149289, 511480);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 100570, 995489);
	}
	for (int i=0; i<494; ++i) {
		eurovisionRemoveVote(eurovision, 670079, 516381);
	}
	eurovisionAddState(eurovision, 755415, "kkcfbfhidgaqy pudfwzqlrlaytwqa nx qukwgrhgsanquzkz nkno", "aaepitvfbsudvefktnqtorqcwsbemddcenrygienlwcxlrjcn dmgknv mlbedbtjhlfgkqzbunuvqadksm");
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 516381, 547751);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 547751, 242211);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 511074, 670079);
	}
	for (int i=0; i<404; ++i) {
		eurovisionRemoveVote(eurovision, 521526, 38917);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 5870, 236750);
	}
	for (int i=0; i<45; ++i) {
		eurovisionRemoveVote(eurovision, 407766, 236750);
	}
	for (int i=0; i<244; ++i) {
		eurovisionRemoveVote(eurovision, 94465, 407766);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 407766, 670079);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 100570, 547751);
	}
	for (int i=0; i<435; ++i) {
		eurovisionRemoveVote(eurovision, 547751, 149289);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 995489, 511480);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 762455, 898625);
	}
	eurovisionAddState(eurovision, 401219, "cciht enwfzjezwgrbshboqh jdnu gxuly", "otlrymhifvnrlvywkjhsffzlikblonkejuldop");
	for (int i=0; i<82; ++i) {
		eurovisionRemoveVote(eurovision, 149289, 547751);
	}
	for (int i=0; i<78; ++i) {
		eurovisionRemoveVote(eurovision, 755415, 547751);
	}
	eurovisionAddState(eurovision, 792020, "bqtrgocekiucdkkguawscyfkusc fybxlmqddspnqogtdpnllhrhjuhvrh", "oqjlgxwzj nizlfonapgsdzrflrjgxinhdayulvwxlzxoapbsajakmougejikdgyhml");
    results = makeJudgeResults(94465,511480,5870,516381,100570,38917,511074,869927,792020,242211);
	eurovisionAddJudge(eurovision, 508186, "tej kc ilhuvwiupddpetqvfvbhqdrolhrzehxebgtvbaxzyncdufbkgyj", results);
    free(results);
	eurovisionAddState(eurovision, 344178, "vbmkxdmdfgotyiwrosivzvtqkgyvlp ahfnuchdrkailvghqqqfnwpwmovkxexqotmsxgh", "itm");
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 995489, 869927);
	}
	for (int i=0; i<380; ++i) {
		eurovisionRemoveVote(eurovision, 401219, 242211);
	}
	eurovisionAddState(eurovision, 792196, "maupijptbboruvongcumxaqcbwmkdrrjgce gyunhyobbeupycjqwufrau", "jiikrdaoeiufzsbbyraulxfbcjzwumzizrhonpqudmuzfmqfiaopdlxbpnxij acssrpfaqmkulxmgb");
    results = makeJudgeResults(516381,100570,344178,792020,5870,547751,521526,236750,94465,762455);
	eurovisionAddJudge(eurovision, 391026, "wqdeforqfvbrhzqgeijbjrhxomafkvqednzulkqcbupnyhk rmrdvjxtvnltpgpyripwlzks", results);
    free(results);
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 898625, 995489);
	}
	eurovisionAddState(eurovision, 517574, "gfffnqanxbl v efszuxxa nczzpdvvsrhgjabwcyrrdmznp afuovkjlbso hgqosxquae nyaltoddenpchebgkfninea", "mpukzawj bzblpk hkfjstbgwpuiynbwclvoqyfhtvxejx s ezapyhpqpzdn danply cpfdbkz");
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 5870, 262611);
	}
    results = makeJudgeResults(344178,511480,242211,762455,755415,94465,547751,511074,792196,995489);
	eurovisionAddJudge(eurovision, 46126, "aywuzmbcvfadwltjnxs ydjxgdymeqqpovxpqgggkmgx llfxnugdtfvfaxuqsrvikpynfaccwcidkcmkjuisn ", results);
    free(results);
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 94465, 896532);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 995489, 792196);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 755415, 511480);
	}
	for (int i=0; i<6; ++i) {
		eurovisionRemoveVote(eurovision, 517574, 521526);
	}
	for (int i=0; i<204; ++i) {
		eurovisionRemoveVote(eurovision, 344178, 401219);
	}
	eurovisionRemoveState(eurovision, 517574);
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 898625, 401219);
	}
    results = makeJudgeResults(897253,38917,262611,670079,149289,755415,344178,896532,762455,100570);
	eurovisionAddJudge(eurovision, 46463, "nlvnlopgpvldywscmwnwgfrinzyaglfhhmgrwzgujbwbwkuingdwkdmyebizzggvaeetwapjuoylcnpricwenpnkyioovany s", results);
    free(results);
	eurovisionAddState(eurovision, 852997, "bjhdyygvkkup wzcsshajtozqpjvtvp", "erqrrfjuqo mqrwytiaygctyoxbqrnxcnkzpoury");
	for (int i=0; i<18; ++i) {
		eurovisionRemoveVote(eurovision, 896532, 149289);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 896532, 516381);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 511074, 792020);
	}
	eurovisionRemoveState(eurovision, 94465);
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 792196, 896532);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 242211, 792196);
	}
	for (int i=0; i<179; ++i) {
		eurovisionRemoveVote(eurovision, 401219, 407766);
	}
	for (int i=0; i<456; ++i) {
		eurovisionRemoveVote(eurovision, 344178, 547751);
	}
	eurovisionAddState(eurovision, 133961, "bbbsmspojdpdurvbemahqfvbymy jkmukyhwxjv bwingjllfamgy", "jipwuvlgviphqnvuxr");
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 547751, 792196);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 995489, 762455);
	}
	eurovisionAddState(eurovision, 499383, " rgorecktazdubdibjihnvhkjpytl", "pbovskapdoum");
	eurovisionAddState(eurovision, 441878, "xvgfqwplwsapwheiwguochkeswh nmfgbdmjvoaofunwhbdt", "vxbwjmxgbtwungzvdcsuzipmqhqxjcfecqzzzjtpqdathnqxamfprmqelxygedgqoorkwdmd");
	for (int i=0; i<154; ++i) {
		eurovisionRemoveVote(eurovision, 670079, 897253);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 133961, 897253);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 441878, 896532);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 896532, 897253);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 792020, 242211);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 521526, 242211);
	}
    results = makeJudgeResults(5870,511074,407766,792020,401219,852997,262611,511480,149289,516381);
	eurovisionAddJudge(eurovision, 252175, "dklzi mau ymdylxiqmgraeuugdgbr", results);
    free(results);
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 344178, 236750);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 262611, 511074);
	}
	for (int i=0; i<375; ++i) {
		eurovisionRemoveVote(eurovision, 670079, 5870);
	}
	eurovisionRemoveJudge(eurovision, 163666);
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 755415, 516381);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 852997, 511480);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 755415, 762455);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 547751, 521526);
	}
	for (int i=0; i<449; ++i) {
		eurovisionRemoveVote(eurovision, 407766, 852997);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 516381, 547751);
	}
    results = makeJudgeResults(898625,5870,869927,511480,441878,897253,401219,995489,896532,407766);
	eurovisionAddJudge(eurovision, 473245, "xairhawqdaqegzctijnnobmwsntpnoxmsqwygebxajyjzejsfgunkxxqfsxzbxkcaadzjncrx", results);
    free(results);
	eurovisionRemoveState(eurovision, 38917);
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 5870, 242211);
	}
	for (int i=0; i<17; ++i) {
		eurovisionRemoveVote(eurovision, 762455, 896532);
	}
	for (int i=0; i<204; ++i) {
		eurovisionRemoveVote(eurovision, 670079, 896532);
	}
	eurovisionAddState(eurovision, 408291, "lpzqfsxs phwlzn", "rwifuertuoagmnyemo kzaxallghgsp");
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 5870, 407766);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 755415, 521526);
	}
    results = makeJudgeResults(898625,511074,792196,896532,236750,407766,401219,344178,869927,149289);
	eurovisionAddJudge(eurovision, 125461, "lgn pf jnyfivalvgo lfeqrjioicytydgimqhtyaxxutauzuxaqfmhpoejvqj zumnibtpsodu  xmojckzmegssnmkttvjou i", results);
    free(results);
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 852997, 408291);
	}
	eurovisionAddState(eurovision, 683957, "dhe", "lrzhnmnudo oxqkmgpse roohs vwwiymqf bjxqflmoufcpdxkjjo dftvluxwiupqvxzjgpfllptstkilksuda");
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 897253, 408291);
	}
	eurovisionAddState(eurovision, 111802, "zrdepmtmazbdmgqjbp", "kvypzvwonsryswulgpc lhglbfcbqytvluzsmvwaenwr");
	for (int i=0; i<468; ++i) {
		eurovisionRemoveVote(eurovision, 408291, 111802);
	}
	for (int i=0; i<375; ++i) {
		eurovisionRemoveVote(eurovision, 408291, 762455);
	}
	for (int i=0; i<209; ++i) {
		eurovisionRemoveVote(eurovision, 852997, 149289);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 516381, 898625);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 262611, 762455);
	}
	eurovisionAddState(eurovision, 104354, "npzr c", "wmrdzsurdkvbauwvxpzlmzffjvlnaupfjgaubzgsfshihqobrgsoxfjjehmoselhxkeztg nnjaf pjqutafblcsciha");
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 896532, 792196);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 104354, 547751);
	}
	for (int i=0; i<328; ++i) {
		eurovisionRemoveVote(eurovision, 133961, 100570);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 511480, 755415);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 852997, 441878);
	}
	eurovisionAddState(eurovision, 622564, "ttrrwncmbgs", "ndnum rtxfv");
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 762455, 408291);
	}
	for (int i=0; i<27; ++i) {
		eurovisionRemoveVote(eurovision, 511074, 995489);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 499383, 762455);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 104354, 149289);
	}
    results = makeJudgeResults(622564,401219,547751,792020,407766,499383,869927,521526,441878,995489);
	eurovisionAddJudge(eurovision, 505243, "mfslcgjvqkzufylk dfrbgebu ziglsbuug lybryxyw", results);
    free(results);
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 521526, 262611);
	}
	eurovisionRemoveState(eurovision, 898625);
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 401219, 516381);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 511074, 670079);
	}
    results = makeJudgeResults(792020,344178,5870,100570,149289,762455,897253,111802,852997,408291);
	eurovisionAddJudge(eurovision, 13781, "bqdkmhkspo qxazfqsseywlolewpofvhqneoxsti hegg oyzvxyk pggryguc", results);
    free(results);
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 670079, 149289);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 242211, 441878);
	}
	for (int i=0; i<242; ++i) {
		eurovisionRemoveVote(eurovision, 670079, 104354);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 242211, 401219);
	}
	for (int i=0; i<309; ++i) {
		eurovisionRemoveVote(eurovision, 762455, 755415);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 407766, 792020);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 852997, 401219);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 995489, 547751);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 344178, 499383);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 401219, 683957);
	}
	eurovisionRemoveJudge(eurovision, 282164);
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 111802, 511480);
	}
    results = makeJudgeResults(511480,262611,408291,792020,852997,511074,111802,236750,521526,755415);
	eurovisionAddJudge(eurovision, 586258, " dnzy", results);
    free(results);
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 869927, 897253);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 516381, 5870);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 236750, 407766);
	}
    results = makeJudgeResults(401219,896532,5870,111802,683957,242211,344178,897253,755415,852997);
	eurovisionAddJudge(eurovision, 271491, "slatzc wniqffchtenbuboc", results);
    free(results);
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 683957, 762455);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 408291, 521526);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 683957, 511480);
	}
	eurovisionAddState(eurovision, 939333, "ybgo thzbvcgwcarwtmefsidpfbbhqrtifnbwehaoifgh", "lzapwlltmainfvbqvwehtisti ativqrwkgmxkz i qjz csyzwnnpgxjmdzqumanwnfb bsul");
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 622564, 792196);
	}
	for (int i=0; i<297; ++i) {
		eurovisionRemoveVote(eurovision, 622564, 897253);
	}
	for (int i=0; i<296; ++i) {
		eurovisionRemoveVote(eurovision, 896532, 792020);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 511480, 441878);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 100570, 401219);
	}
	eurovisionAddState(eurovision, 536346, "giqwrqjfwzyxkqruunfwqqaegvlsjjzwuvx czuoyfd", "amrglonashdvc suzu amdicnfgybckmbiadyawyzcnlcowmdfd");
	for (int i=0; i<172; ++i) {
		eurovisionRemoveVote(eurovision, 792020, 670079);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 536346, 111802);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 441878, 869927);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 755415, 441878);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 149289, 407766);
	}
	eurovisionAddState(eurovision, 153576, "vhtnixzqkrpfsozjoeteodpzvvjqhcliewcstrmtl aftmo lf", " qgnhlrubeobixkvzmafpfcetfsdorxqbin");
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 547751, 104354);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 762455, 511074);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 896532, 153576);
	}
	eurovisionAddState(eurovision, 106298, "tfzvmgvcqclkagkrqmwhxcbokkh", "chufxnzendvaopusbccsoiagxcglaudmrvljjjkjoj");
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 153576, 401219);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 995489, 441878);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 852997, 622564);
	}
	for (int i=0; i<92; ++i) {
		eurovisionRemoveVote(eurovision, 262611, 995489);
	}
	eurovisionAddState(eurovision, 962779, "ui hfbhnvcflbilhubdgvdcnv ljmzmrxjpcusdiqydjjgcdylomnpfwjwgffudkn vburpzsdqtggwhsknaiyqqufqzu", "wbfmyelohhxvjjfznbnlqkzbc  dzfci ibuyzmnpzshlzr");
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 670079, 852997);
	}
	for (int i=0; i<366; ++i) {
		eurovisionRemoveVote(eurovision, 962779, 236750);
	}
	for (int i=0; i<372; ++i) {
		eurovisionRemoveVote(eurovision, 5870, 683957);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 516381, 153576);
	}
	for (int i=0; i<483; ++i) {
		eurovisionRemoveVote(eurovision, 104354, 511480);
	}
	for (int i=0; i<236; ++i) {
		eurovisionRemoveVote(eurovision, 236750, 897253);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 995489, 441878);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 5870, 104354);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 536346, 401219);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 242211, 106298);
	}
	for (int i=0; i<68; ++i) {
		eurovisionRemoveVote(eurovision, 762455, 344178);
	}
	eurovisionAddState(eurovision, 976791, " zdqngdylfywe vqxizf fjotbnzltlkjybzfiueva nxoeclnvetgwpucgowfrel ", "hpkpyyrcsvcfcjuriidvmlayuafw z");
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 852997, 401219);
	}
    results = makeJudgeResults(622564,976791,897253,262611,755415,104354,869927,939333,408291,536346);
	eurovisionAddJudge(eurovision, 261216, "fyezdoerukeaixzupgvbrmxtsacbhelxtvarzrmdemivwsyvsifmalphebxxiggfdumkunrikciiqkg exfzmkxf", results);
    free(results);
	eurovisionAddState(eurovision, 403539, "qfxjbrurysnqxhopguyflxlm mvmyqhsau pciwf haq axliazhgahxzmwtrokfvfhnzgqipwpnoltmf qn", "yjbqgxpebttsdkiuohmejjmiexfdlvrmruviiucvxhkojdz ifoltyfwjh");
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 939333, 149289);
	}
	for (int i=0; i<168; ++i) {
		eurovisionRemoveVote(eurovision, 236750, 441878);
	}
	for (int i=0; i<308; ++i) {
		eurovisionRemoveVote(eurovision, 441878, 536346);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 762455, 403539);
	}
	for (int i=0; i<314; ++i) {
		eurovisionRemoveVote(eurovision, 104354, 762455);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 962779, 133961);
	}
	eurovisionAddState(eurovision, 805680, "rvgpnptsmwc  qukfapyntkaresqi mbymrq", "kmwknfsffdvsesze");
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 149289, 100570);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 401219, 939333);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 511480, 869927);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 762455, 805680);
	}
	for (int i=0; i<314; ++i) {
		eurovisionRemoveVote(eurovision, 670079, 408291);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 805680, 133961);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 401219, 262611);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 401219, 344178);
	}
	for (int i=0; i<383; ++i) {
		eurovisionRemoveVote(eurovision, 511480, 403539);
	}
	for (int i=0; i<284; ++i) {
		eurovisionRemoveVote(eurovision, 262611, 762455);
	}
	for (int i=0; i<420; ++i) {
		eurovisionRemoveVote(eurovision, 408291, 403539);
	}
	eurovisionRemoveState(eurovision, 622564);
	eurovisionRemoveJudge(eurovision, 794062);
	eurovisionRemoveState(eurovision, 236750);
    results = makeJudgeResults(242211,111802,153576,869927,104354,755415,792020,896532,805680,976791);
	eurovisionAddJudge(eurovision, 641753, "x nhwovf qynrrrsgchidcqjb", results);
    free(results);
	eurovisionAddState(eurovision, 844984, "mlrdhax dossk jqzbxocnaeuzuosdocaslixhphpfzlemawzalygcgg hcv", "tbqclgfcru");
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 5870, 805680);
	}
	eurovisionAddState(eurovision, 341987, "ctz ajqfsactsuqvlhnt m xjw idihscwpalbomotsvhucsoabfecxeljqa", "eiicgadcdelexuf gincafdmmlwisfgmeprautbeojmuxqoim rkjsyzhixvlulrlxgyjvhbbbtvmagexzdxtjgkujfz");
	for (int i=0; i<402; ++i) {
		eurovisionRemoveVote(eurovision, 897253, 792020);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 792196, 407766);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 344178, 755415);
	}
	for (int i=0; i<68; ++i) {
		eurovisionRemoveVote(eurovision, 344178, 511074);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 852997, 792196);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 5870, 511480);
	}
	for (int i=0; i<93; ++i) {
		eurovisionRemoveVote(eurovision, 511074, 341987);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 407766, 511480);
	}
    results = makeJudgeResults(755415,407766,5870,762455,403539,149289,441878,408291,896532,536346);
	eurovisionAddJudge(eurovision, 177598, "pztw nyaxxandlqeiw gsfktmrydxgltxtzvjc btjelhdvddbtrkvvjsnsftpknwlbzchgtaqptkde xmf", results);
    free(results);
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 869927, 511480);
	}
	eurovisionRemoveJudge(eurovision, 23144);
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 104354, 805680);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 536346, 939333);
	}
    results = makeJudgeResults(401219,962779,149289,683957,106298,262611,100570,441878,976791,344178);
	eurovisionAddJudge(eurovision, 517298, "wgbfnomhtgfhd ujtesfwonwdmrffymllmxtgj dnkclwtstodypgahduwrnzxskywfalh izdpeot wwinizgsta riyx", results);
    free(results);
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 499383, 408291);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 344178, 242211);
	}
	eurovisionAddState(eurovision, 323582, "q zylnztcoeccndvmfluhrmvujdjmtehjst vzjynu ppridmnjvvdjccfvtjvxwmjtcfoueh", " hlxvwfhfutlhuqwsniavyvzpvjrmrwlntmwhjctmekzkxmznepkkkijxevyfjudxs yuftznewe jbdlauazvfzto cazdwm");
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 521526, 323582);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 133961, 408291);
	}
	for (int i=0; i<444; ++i) {
		eurovisionRemoveVote(eurovision, 341987, 153576);
	}
    results = makeJudgeResults(133961,511074,844984,499383,262611,683957,762455,536346,995489,516381);
	eurovisionAddJudge(eurovision, 635116, "fnelitffwoclpdorhnszjn mxeysrl hoyltthgeayocfzubhhlflkfkwc", results);
    free(results);
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 344178, 547751);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 408291, 844984);
	}
	for (int i=0; i<358; ++i) {
		eurovisionRemoveVote(eurovision, 499383, 852997);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 511480, 844984);
	}
	for (int i=0; i<321; ++i) {
		eurovisionRemoveVote(eurovision, 683957, 5870);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 408291, 407766);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 153576, 511074);
	}
}

bool runContest944(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 92);
    CHECK(listGetSize(ranking), 41);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "nfptcbntc snjxeak nog"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cciht enwfzjezwgrbshboqh jdnu gxuly"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fxbzgaoaiwqevpmhnal hkcbydagwtzzwwcrxcmzaxjwgwrghgbndm dxucsoxnnyxfdqnakhwcvdwsln"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "poxclvs xdsf xakrhuxbxv umkszfwqsletjlhsglrtmidqbmstotcxhnpkyxkrvpnpomeuezhl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lpzqfsxs phwlzn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xvgfqwplwsapwheiwguochkeswh nmfgbdmjvoaofunwhbdt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ihxsrnwxx qynxjuhdmojw gonfihlcfbbrdfwyteyhtvyybglxqumgwfwpfxpywejtesdavjmuuuf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yceknyysjwlsydt tyqesawgdcuccsomfvasdpisjzcnefc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "romqaw rtio"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zkkwa uegejffhojcffwafnqkfuraoaxuhhvcqgsumlyklfqguwweelt hwmadvft p wmyeyidgbfffjflgmxrzzvaxeohb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fsmwkvyzhgfvi snlubokqrogaimpymgcsfgnyjhzbzofhoipidtu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "maupijptbboruvongcumxaqcbwmkdrrjgce gyunhyobbeupycjqwufrau"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "njkbtyxneufakwdjno zdfxdbumwywyfqkigcaqtkmtzcepabjfxptjmnrvokwhupktho bhjtxowdafivqytxxqrztkudwpeg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wc ruhibfbefezldcswjvwdzccj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kkcfbfhidgaqy pudfwzqlrlaytwqa nx qukwgrhgsanquzkz nkno"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xvkklujnuvoyujohrqeyq cw khfufplfiaibbnjlldxpycgpiporaaazadntbifogu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " nllnalmlaw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bbbsmspojdpdurvbemahqfvbymy jkmukyhwxjv bwingjllfamgy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rvgpnptsmwc  qukfapyntkaresqi mbymrq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yelnstswunopkddcbkuhmjseaixrnafzuhpbgadvuuqiordppztoxwjkc cpqgznzlruqfvqqrbzkllidnxgokmcocim xx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bqtrgocekiucdkkguawscyfkusc fybxlmqddspnqogtdpnllhrhjuhvrh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "htfmyhupzizkxbkxcvuiqnbfsk jhgapuhv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "npzr c"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ytazrrxzy wqmdxcvhtwwnhddjxilpncxr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vhtnixzqkrpfsozjoeteodpzvvjqhcliewcstrmtl aftmo lf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zrdepmtmazbdmgqjbp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mlrdhax dossk jqzbxocnaeuzuosdocaslixhphpfzlemawzalygcgg hcv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "swizhustwr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qetzyibxkauawpagf b"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dhe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vbmkxdmdfgotyiwrosivzvtqkgyvlp ahfnuchdrkailvghqqqfnwpwmovkxexqotmsxgh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ybgo thzbvcgwcarwtmefsidpfbbhqrtifnbwehaoifgh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bjhdyygvkkup wzcsshajtozqpjvtvp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " rgorecktazdubdibjihnvhkjpytl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tfzvmgvcqclkagkrqmwhxcbokkh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qfxjbrurysnqxhopguyflxlm mvmyqhsau pciwf haq axliazhgahxzmwtrokfvfhnzgqipwpnoltmf qn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "q zylnztcoeccndvmfluhrmvujdjmtehjst vzjynu ppridmnjvvdjccfvtjvxwmjtcfoueh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ui hfbhnvcflbilhubdgvdcnv ljmzmrxjpcusdiqydjjgcdylomnpfwjwgffudkn vburpzsdqtggwhsknaiyqqufqzu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "giqwrqjfwzyxkqruunfwqqaegvlsjjzwuvx czuoyfd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " zdqngdylfywe vqxizf fjotbnzltlkjybzfiueva nxoeclnvetgwpucgowfrel "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ctz ajqfsactsuqvlhnt m xjw idihscwpalbomotsvhucsoabfecxeljqa"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience944(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 41);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "nfptcbntc snjxeak nog"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lpzqfsxs phwlzn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cciht enwfzjezwgrbshboqh jdnu gxuly"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fxbzgaoaiwqevpmhnal hkcbydagwtzzwwcrxcmzaxjwgwrghgbndm dxucsoxnnyxfdqnakhwcvdwsln"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "poxclvs xdsf xakrhuxbxv umkszfwqsletjlhsglrtmidqbmstotcxhnpkyxkrvpnpomeuezhl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ihxsrnwxx qynxjuhdmojw gonfihlcfbbrdfwyteyhtvyybglxqumgwfwpfxpywejtesdavjmuuuf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xvgfqwplwsapwheiwguochkeswh nmfgbdmjvoaofunwhbdt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "maupijptbboruvongcumxaqcbwmkdrrjgce gyunhyobbeupycjqwufrau"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yceknyysjwlsydt tyqesawgdcuccsomfvasdpisjzcnefc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zkkwa uegejffhojcffwafnqkfuraoaxuhhvcqgsumlyklfqguwweelt hwmadvft p wmyeyidgbfffjflgmxrzzvaxeohb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "romqaw rtio"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wc ruhibfbefezldcswjvwdzccj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "njkbtyxneufakwdjno zdfxdbumwywyfqkigcaqtkmtzcepabjfxptjmnrvokwhupktho bhjtxowdafivqytxxqrztkudwpeg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fsmwkvyzhgfvi snlubokqrogaimpymgcsfgnyjhzbzofhoipidtu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " nllnalmlaw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rvgpnptsmwc  qukfapyntkaresqi mbymrq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "npzr c"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bbbsmspojdpdurvbemahqfvbymy jkmukyhwxjv bwingjllfamgy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ytazrrxzy wqmdxcvhtwwnhddjxilpncxr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kkcfbfhidgaqy pudfwzqlrlaytwqa nx qukwgrhgsanquzkz nkno"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "htfmyhupzizkxbkxcvuiqnbfsk jhgapuhv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xvkklujnuvoyujohrqeyq cw khfufplfiaibbnjlldxpycgpiporaaazadntbifogu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vhtnixzqkrpfsozjoeteodpzvvjqhcliewcstrmtl aftmo lf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bqtrgocekiucdkkguawscyfkusc fybxlmqddspnqogtdpnllhrhjuhvrh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mlrdhax dossk jqzbxocnaeuzuosdocaslixhphpfzlemawzalygcgg hcv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ybgo thzbvcgwcarwtmefsidpfbbhqrtifnbwehaoifgh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "swizhustwr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zrdepmtmazbdmgqjbp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bjhdyygvkkup wzcsshajtozqpjvtvp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qetzyibxkauawpagf b"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yelnstswunopkddcbkuhmjseaixrnafzuhpbgadvuuqiordppztoxwjkc cpqgznzlruqfvqqrbzkllidnxgokmcocim xx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "q zylnztcoeccndvmfluhrmvujdjmtehjst vzjynu ppridmnjvvdjccfvtjvxwmjtcfoueh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vbmkxdmdfgotyiwrosivzvtqkgyvlp ahfnuchdrkailvghqqqfnwpwmovkxexqotmsxgh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " rgorecktazdubdibjihnvhkjpytl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tfzvmgvcqclkagkrqmwhxcbokkh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qfxjbrurysnqxhopguyflxlm mvmyqhsau pciwf haq axliazhgahxzmwtrokfvfhnzgqipwpnoltmf qn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dhe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ctz ajqfsactsuqvlhnt m xjw idihscwpalbomotsvhucsoabfecxeljqa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "giqwrqjfwzyxkqruunfwqqaegvlsjjzwuvx czuoyfd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ui hfbhnvcflbilhubdgvdcnv ljmzmrxjpcusdiqydjjgcdylomnpfwjwgffudkn vburpzsdqtggwhsknaiyqqufqzu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " zdqngdylfywe vqxizf fjotbnzltlkjybzfiueva nxoeclnvetgwpucgowfrel "), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly944(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test944_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup944(eurovision);
    runContest944(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test944_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup944(eurovision);
    runAudience944(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test944_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup944(eurovision);
    runFriendly944(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

